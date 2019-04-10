"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const router_1 = require("../common/router");
const usuario_model_1 = require("./usuario.model");
class UsuarioRouter extends router_1.Router {
    applyRouter(app) {
        app.get('/usuarios', (req, resp, next) => {
            usuario_model_1.Usuario.find().then((usuarios) => {
                resp.json(usuarios);
                return next();
            }).catch(next);
        });
    }
}
exports.usuarioRouter = new UsuarioRouter;
