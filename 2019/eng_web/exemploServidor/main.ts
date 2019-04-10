import {Server} from './server/server'
import {usuarioRouter} from './usuario/usuario.router'

const server:Server = new Server

server.inicializarServer([usuarioRouter]).then( server => {
    console.log(`aplicação executando na porta ${server.application.address().port}`)
}).catch(error =>{
    console.log(":( não inicializou o server")
    console.log(error)
    process.exit(1)
})