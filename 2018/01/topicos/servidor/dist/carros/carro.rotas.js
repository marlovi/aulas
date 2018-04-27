"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const rotas_1 = require("../comum/rotas");
class CarroRotas extends rotas_1.Rotas {
    aplicarRotas(aplicacao) {
        aplicacao.get('/carros', (req, resp, next) => {
            resp.json({ modelo: "Ferrari" });
            return next();
        });
        aplicacao.get('/carros/:id', (req, resp, next) => {
            resp.json({ id: req.params.id });
            return next();
        });
    }
}
exports.carroRotas = new CarroRotas;
