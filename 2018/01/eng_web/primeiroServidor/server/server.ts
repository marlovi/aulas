import * as restify from 'restify'
import mongoose from 'mongoose'
import { Router } from '../common/router';
import corsMiddleware from 'restify-cors-middleware';
import { handleError } from './error.handler';


export class Server{
    application: restify.Server = restify.createServer({
        name:"Aula de REST",
        version: "1.0"
    })


    initializeDb(): any{
        (<any>mongoose).Promise = global.Promise  // comando obrigatório
        return mongoose.connect('mongodb://localhost/exemplo')

    }

    initRouters(routers:Router[]): Promise<any>{
        return new Promise( (resolve,reject) =>{
        try{
           /* const corsOptions: corsMiddleware.Options = {
                preflightMaxAge: 86400,
                origins: ['*'],
                allowHeaders: ['authorization'],
                exposeHeaders: ['x-custom-header']
              }
            const cors: corsMiddleware.CorsMiddleware = corsMiddleware(corsOptions)
      
            this.application.pre(cors.preflight)
            
            this.application.use(cors.actual)*/
            this.application.use(restify.plugins.queryParser())//geralmente utilizando no get para converter pesquisas
            this.application.use(restify.plugins.bodyParser())// convert json em object automaticamente
        
            for( let router of routers){
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

    bootstrap(routers: Router[] = []):Promise<Server>{
       return this.initializeDb().then( 
           () =>  this.initRouters(routers).then( 
           () => this) )
       
    }
}