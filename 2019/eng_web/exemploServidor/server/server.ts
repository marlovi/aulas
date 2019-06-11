import * as restify from 'restify'
import mongoose  from 'mongoose'
import {Router} from '../common/router'
import corsMiddleware from 'restify-cors-middleware'
import {handleError} from './error'
 

export class Server{

    application: restify.Server = restify.createServer({
        name:"Primeiro Servidor de REST",
        version:'000000000001'
    })

    inicializarDb():any{
        (<any>mongoose).Promise = global.Promise //obrigatório
        return mongoose.connect('mongodb://localhost/exemplo',{useNewUrlParser: true}).then(
            () => console.log('Banco de dados conectado')
        ).catch((err)=> {throw err})
    }

    initRoutes(routers: Router[]):Promise <any>{
        return new Promise((resolve:any,reject:any) =>{
            try{
                const corsOptions: corsMiddleware.Options = {
                    preflightMaxAge: 86400,
                    origins: ['*'],
                    allowHeaders: ['authorization'],
                    exposeHeaders: ['x-custom-header']
                  }
                const cors: corsMiddleware.CorsMiddleware = corsMiddleware(corsOptions)
                
                this.application.pre(cors.preflight)

                this.application.use(cors.actual)
                this.application.use(restify.plugins.bodyParser())
                this.application.use(restify.plugins.queryParser())

                for(let router of routers){
                    router.applyRouter(this.application)
                }



                this.application.listen(3000, () =>{
                    
                    resolve(this.application)
                })
                this.application.on('restifyError',handleError)
            }catch(err){
                reject(err)
            }
        })
    }

    inicializarServer(routers : Router[]) : Promise<Server>{


       return this.inicializarDb().then(
            ()=> this.initRoutes(routers).then(
                () => this
            )
        )
    }
 }




