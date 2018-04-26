"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const server_1 = require("./server/server");
const user_router_1 = require("./user/user.router");
const server = new server_1.Server;
server.bootstrap([user_router_1.usersRouter]).then(server => {
    console.log(`servidor executando na porta ${server.application.address().port}`);
}).catch(error => {
    console.log(`Servidor não inicializou   ${error}`);
    process.exit(1);
});
