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
            }).catch(next)
            
        })
        application.get('/users/:id',  (req,resp, next)=>{
            User.findById(req.params.id).then(user =>{
                if(user){
                    resp.json(user)
                    return next()
                }
                resp.send(404)
                return next()
            }).catch(next)
            return next()
        })
        application.post('/user', (req,resp,next)=>{
            let user = new User(req.body)
    
            user.save().then(user => {
                //user.password = undefined 
                resp.json(user)
            }).catch(next)
            return next();
        })

        application.del('/user/:id' , (req,resp,next)=>{
            User.remove({_id:req.params.id}).exec().then((result)=>{
                if(result.n)
                    resp.send(204)
                else
                    resp.send(404)
                return next()
            } ).catch(next)
        })

        application.patch('/user/:id', (req,resp , next) =>{
            const options  = { new : true}
            User.findByIdAndUpdate(req.params.id,req.body,options).then( user => {
                resp.json(user)
                return next()
            }).catch(next)
        })
    }
}

export const usersRouter  = new UserRouter