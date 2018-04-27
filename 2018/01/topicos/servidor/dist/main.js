"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const server_1 = require("./server/server");
const user_rotas_1 = require("./user/user.rotas");
const carro_rotas_1 = require("./carros/carro.rotas");
const server = new server_1.Server;
server.inicializar([user_rotas_1.userRotas, carro_rotas_1.carroRotas]).then(server => {
    console.log(`Servidor executando na porta ${server.aplicacao.address().port}`);
}).catch(error => {
    console.log("Servidor não inicializou");
    console.error(error);
    process.exit(1);
});
