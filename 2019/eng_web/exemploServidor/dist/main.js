"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const server_1 = require("./server/server");
const usuario_router_1 = require("./usuario/usuario.router");
const server = new server_1.Server;
server.inicializarServer([usuario_router_1.usuarioRouter]).then(server => {
    console.log(`aplicação executando na porta ${server.application.address().port}`);
}).catch(error => {
    console.log(":( não inicializou o server");
    console.log(error);
    process.exit(1);
});
