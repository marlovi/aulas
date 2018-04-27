"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const rotas_1 = require("../comum/rotas");
class UserRotas extends rotas_1.Rotas {
    aplicarRotas(aplicacao) {
        aplicacao.get('/usuarios', (req, resp, next) => {
            console.log(req);
            resp.json([{ nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }, { nome: "Higor",
                    endereco: "Rua 10 ",
                    email: "Higor@ifgoiano.edu.br",
                    genero: "Masculino" }]);
            return next();
        });
        //rota
    }
}
exports.userRotas = new UserRotas;
