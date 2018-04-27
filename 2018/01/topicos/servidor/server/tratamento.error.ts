import * as restify from 'restify'


export const tratamentoErros = (req: restify.Request, resp:restify.Response, err:any, done:any) =>{
    err.toJSON = () =>{
        return {
            message: err.message
        }
    }
}