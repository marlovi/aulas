import {Server} from './server/server'
import {usersRouter} from './user/user.router'


const server:Server = new Server

server.bootstrap([usersRouter]).then( server => {
    console.log(`servidor executando na porta ${server.application.address().port}`)
}).catch( error =>{
    console.log(`Servidor não inicializou   ${error}`)
    process.exit(1)
})