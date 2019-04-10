import * as restify from 'restify'

export abstract class Router{
    abstract applyRouter(app : restify.Server) : any
}