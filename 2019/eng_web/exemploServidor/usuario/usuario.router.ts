import {Router} from '../common/router'
import * as restify from 'restify'
import {Usuario} from './usuario.model'


class UsuarioRouter extends Router {
    applyRouter(app: restify.Server) {
        
        app.get('/usuarios', (req, resp, next) =>{
            Usuario.find().then((usuarios) =>{
                resp.json(usuarios)
                return next();
            }).catch(next)
        })

        app.post('/usuario',(req,resp,next) =>{
             let usuario  = new Usuario(req.body)
            

            usuario.save().then(usuario =>{
                //usuario.password = undefined
                resp.json(usuario)

            }).catch(next)
         return next();
        })

        app.patch('/usuario/:id', (req,resp,next)=>{
            let option = {new: true}
            Usuario.findByIdAndUpdate(req.params.id,req.body,option).then(
                 u =>{
                     resp.json(u)
                     return next();
                 }
            ).catch(next)
        })
        app.del('/usuario/:id', (req,resp,next) =>{
            Usuario.remove({_id:req.params.id}).exec().then(result   =>{
                if(result.n) 
                    resp.send(204)
                else resp.send(404)
            })
        })

    }

     
}

export const usuarioRouter = new UsuarioRouter