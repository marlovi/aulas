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
const restify_cors_middleware_1 = __importDefault(require("restify-cors-middleware"));
const error_1 = require("./error");
class Server {
    constructor() {
        this.application = restify.createServer({
            name: "Primeiro Servidor de REST",
            version: '000000000001'
        });
    }
    inicializarDb() {
        /* (<any>mongoose).Promise = global.Promise //obrigatório
         return mongoose.connect('mongodb://localhost/exemplo',{useNewUrlParser: true}).then(
             () => console.log('Banco de dados conectado')
         ).catch((err)=> {throw err})*/
    }
    initRoutes(routers) {
        return new Promise((resolve, reject) => {
            try {
                const corsOptions = {
                    preflightMaxAge: 86400,
                    origins: ['*'],
                    allowHeaders: ['authorization'],
                    exposeHeaders: ['x-custom-header']
                };
                const cors = restify_cors_middleware_1.default(corsOptions);
                this.application.pre(cors.preflight);
                this.application.use(cors.actual);
                this.application.use(restify.plugins.bodyParser());
                this.application.use(restify.plugins.queryParser());
                for (let router of routers) {
                    router.applyRouter(this.application);
                }
                this.application.listen(3000, () => {
                    resolve(this.application);
                });
                this.application.on('restifyError', error_1.handleError);
            }
            catch (err) {
                reject(err);
            }
        });
    }
    inicializarServer(routers) {
        return this.initRoutes(routers).then(() => this);
        /* return this.inicializarDb().then(
             ()=> this.initRoutes(routers).then(
                 () => this
             )
         )*/
    }
}
exports.Server = Server;
