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

        aplicacao.del('/usuario/:id', (req, resp, next)=>{
            User.remove({_id: req.params.id}).exec().then( (result:any) =>{
                if(result.n)
                    resp.send(204)
                else
                resp.send(404)

                return next()
            })
        })

        aplicacao.patch('/usuario/:id', (req, resp, next) =>{
            User.findByIdAndUpdate({_id: req.params.id}, req.body,{new: true}).then( usuario =>{
                resp.json(usuario)
                return next()
            })
        })

        //rota
        
    }
}

export const userRotas = new UserRotas