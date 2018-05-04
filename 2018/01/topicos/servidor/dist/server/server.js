"use strict";
var __importStar = (this && this.__importStar) || function (mod) {
    if (mod && mod.__esModule) return mod;
    var result = {};
    if (mod != null) for (var k in mod) if (Object.hasOwnProperty.call(mod, k)) result[k] = mod[k];
    result["default"] = mod;
    return result;
};
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const restify = __importStar(require("restify"));
const tratamento_error_1 = require("./tratamento.error");
const ambiente_1 = require("../comum/ambiente");
const mongoose_1 = __importDefault(require("mongoose"));
class Server {
    constructor() {
        this.aplicacao = restify.createServer({
            name: "Servidor técnico 2018",
            version: "0.1"
        });
    }
    inicializarBanco() {
        mongoose_1.default.Promise = global.Promise;
        return mongoose_1.default.connect('mongodb://localhost/topicos');
    }
    iniciaRotas(rotas) {
        return new Promise((resolve, reject) => {
            try {
                this.aplicacao.use(restify.plugins.queryParser());
                this.aplicacao.use(restify.plugins.bodyParser());
                for (let rota of rotas) {
                    rota.aplicarRotas(this.aplicacao);
                }
                this.aplicacao.listen(ambiente_1.ambiente.porta, () => {
                    resolve(this.aplicacao);
                });
                this.aplicacao.on('restify', tratamento_error_1.tratamentoErros);
            }
            catch (err) {
                reject(err);
            }
        });
    }
    inicializar(rotas = []) {
        return this.inicializarBanco().then(() => this.iniciaRotas(rotas).then(() => this));
    }
}
exports.Server = Server;
