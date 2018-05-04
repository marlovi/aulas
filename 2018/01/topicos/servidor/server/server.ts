import * as restify from 'restify'
import {Rotas} from '../comum/rotas'
import { tratamentoErros } from './tratamento.error';
import {ambiente} from '../comum/ambiente'
import mongoose from 'mongoose'

export class Server{
    aplicacao: restify.Server  = restify.createServer({
        name:"Servidor técnico 2018",
        version:"0.1"
    })

    inicializarBanco():any{
        (<any> mongoose).Promise  = global.Promise
        return mongoose.connect('mongodb://localhost/topicos')
    }

    iniciaRotas( rotas: Rotas[]):Promise<any>{
        return new Promise<any>( (resolve,reject) =>{
            try{
                this.aplicacao.use(restify.plugins.queryParser())
                this.aplicacao.use(restify.plugins.bodyParser())

                for(let rota of rotas){
                    rota.aplicarRotas(this.aplicacao)
                }

                this.aplicacao.listen(ambiente.porta, ()=>{
                    resolve(this.aplicacao)
                })

                this.aplicacao.on('restify',tratamentoErros)
            }catch(err){
                reject(err)
            }
        })
    }


    inicializar(rotas:Rotas[] = []):Promise<Server>{
        return this.inicializarBanco().then(
            () =>  this.iniciaRotas(rotas).then( () =>this  )
        )
        
    }

}