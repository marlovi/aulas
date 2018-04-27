import * as restify from 'restify'
import {Rotas} from '../comum/rotas'

class UserRotas extends Rotas {
    aplicarRotas(aplicacao: restify.Server) {
        aplicacao.get('/usuarios', (req,resp,next) =>{
            console.log(req)
            resp.json([{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"},{nome:"Higor",
            endereco:"Rua 10 ",
            email:"Higor@ifgoiano.edu.br",
            genero:"Masculino"}])
            return next()
        })
        //rota
        
    }
}

export const userRotas = new UserRotas