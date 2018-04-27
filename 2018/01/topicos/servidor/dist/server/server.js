"use strict";
var __importStar = (this && this.__importStar) || function (mod) {
    if (mod && mod.__esModule) return mod;
    var result = {};
    if (mod != null) for (var k in mod) if (Object.hasOwnProperty.call(mod, k)) result[k] = mod[k];
    result["default"] = mod;
    return result;
};
Object.defineProperty(exports, "__esModule", { value: true });
const restify = __importStar(require("restify"));
const tratamento_error_1 = require("./tratamento.error");
const ambiente_1 = require("../comum/ambiente");
class Server {
    constructor() {
        this.aplicacao = restify.createServer({
            name: "Servidor técnico 2018",
            version: "0.1"
        });
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
        return this.iniciaRotas(rotas).then(() => this);
    }
}
exports.Server = Server;
