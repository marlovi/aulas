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
class Server {
    constructor() {
        this.application = restify.createServer({
            name: "Aula de REST",
            version: "1.0"
        });
    }
    initRouters(routers) {
        return new Promise((resolve, reject) => {
            try {
                this.application.use(restify.plugins.queryParser()); //geralmente utilizando no get para converter pesquisas
                this.application.use(restify.plugins.bodyParser()); // convert json em object automaticamente
                for (let router of routers) {
                    router.applyRouter(this.application);
                }
                this.application.listen(3000, () => {
                    resolve(this.application);
                });
            }
            catch (err) {
                reject(err);
            }
        });
    }
    bootstrap(routers = []) {
        return this.initRouters(routers).then(() => this);
    }
}
exports.Server = Server;
