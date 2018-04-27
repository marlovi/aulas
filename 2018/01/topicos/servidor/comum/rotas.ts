import * as restify from 'restify'

export abstract class Rotas{
    abstract aplicarRotas( aplicacao: restify.Server) : any
}