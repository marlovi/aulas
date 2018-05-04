import * as restify from 'restify'
import {Rotas} from '../comum/rotas'
import { User } from './user.model';

class UserRotas extends Rotas {
    aplicarRotas(aplicacao: restify.Server) {
        aplicacao.get('/usuarios', (req,resp,next) =>{
           User.find().then( users =>{
               resp.json(users)
               return next()
           })
            
        })

        aplicacao.post('/usuario', (req, resp, next)=>{
            let user = new User(req.body)

            user.save().then( user =>{
                resp.json(user)
            },err =>{
                console.log(err)
            })

            return next()
        })
        //rota
        
    }
}

export const userRotas = new UserRotas