import * as restify from 'restify'
import { Router } from '../common/router';
import mongoose from 'mongoose'
import {User} from './user.model'
import { URLSearchParams } from 'url';


class UserRouter extends Router {
    applyRouter(application: restify.Server) {
        application.get('/users', (req,resp,next) =>{
            User.find().then(users =>{
                resp.json(users)
                return next()
            })
            
        })
        application.get('/users/:id',  (req,resp, next)=>{
            User.findById(req.params.id).then(user =>{
                if(user){
                    resp.json(user)
                    return next()
                }
                resp.send(404)
                return next()
            })
            return next()
        })
        application.post('/user', (req,resp,next)=>{
            let user = new User(req.body)
    
            user.save().then(user => {
                //user.password = undefined 
                resp.json(user)
            })




            return next();
        })
        
    }
}

export const usersRouter  = new UserRouter