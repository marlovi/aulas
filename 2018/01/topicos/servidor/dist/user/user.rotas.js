"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const rotas_1 = require("../comum/rotas");
const user_model_1 = require("./user.model");
class UserRotas extends rotas_1.Rotas {
    aplicarRotas(aplicacao) {
        aplicacao.get('/usuarios', (req, resp, next) => {
            user_model_1.User.find().then(users => {
                resp.json(users);
                return next();
            });
        });
        aplicacao.post('/usuario', (req, resp, next) => {
            let user = new user_model_1.User(req.body);
            user.save().then(user => {
                resp.json(user);
            }, err => {
                console.log(err);
            });
            return next();
        });
        //rota
    }
}
exports.userRotas = new UserRotas;
