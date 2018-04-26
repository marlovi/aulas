import * as restify from 'restify'

export abstract class Router{
    abstract applyRouter(application: restify.Server) : any
}