import {Server} from './server/server'
import {userRotas} from './user/user.rotas'
import { carroRotas } from './carros/carro.rotas';

const server:Server = new Server

server.inicializar([userRotas,carroRotas]).then(server =>{
    console.log(`Servidor executando na porta ${server.aplicacao.address().port}`)
}).catch(error =>{
    console.log("Servidor não inicializou")
    console.error(error)
    process.exit(1)
})