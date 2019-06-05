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
        app.post('/usuario', (req, resp, next) => {
            let usuario = new usuario_model_1.Usuario(req.body);
            /*
                        usuario.save().then(usuario =>{
                            //usuario.password = undefined
                            resp.json(usuario)
            
                        }).catch(next)*/
            resp.json(usuario);
            console.log(JSON.stringify(usuario));
            return next();
        });
        app.patch('/usuario/:id', (req, resp, next) => {
            let option = { new: true };
            usuario_model_1.Usuario.findByIdAndUpdate(req.params.id, req.body, option).then(u => {
                resp.json(u);
                return next();
            }).catch(next);
        });
        app.del('/usuario/:id', (req, resp, next) => {
            usuario_model_1.Usuario.remove({ _id: req.params.id }).exec().then(result => {
                if (result.n)
                    resp.send(204);
                else
                    resp.send(404);
            });
        });
    }
}
exports.usuarioRouter = new UsuarioRouter;
