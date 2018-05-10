import * as restify from 'restify'


export const handleError = (req: restify.Request,resp:restify.Response
                            ,err : any,done : any) =>{
        console.log(err)

        err.toJSON  = ()=>{
            return {
                message: err.message
            }
        }

        done()
}