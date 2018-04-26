import * as restify from 'restify'
import { Router } from '../common/router';

class UserRouter extends Router {
    applyRouter(application: restify.Server) {
        application.get('/users', (req,resp,next) =>{
            resp.json([{name:"ana"},{name:"joana"},{name:"fernanda"}])
            return next()
        })
        application.get('/users/:id',  (req,resp, next)=>{
            resp.json({name:req.params.id})
            return next()
        })
        application.post('/user', (req,resp,next)=>{
            console.log(req.body)
            resp.json(req.body)
            return next();
        })
        
    }
}

export const usersRouter  = new UserRouter