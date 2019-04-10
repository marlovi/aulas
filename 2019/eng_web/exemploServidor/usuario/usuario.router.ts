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

    }

     
}

export const usuarioRouter = new UsuarioRouter