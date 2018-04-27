import { Rotas } from "../comum/rotas";
import * as restify from 'restify'
class CarroRotas extends Rotas {
    aplicarRotas(aplicacao: restify.Server) {
      aplicacao.get('/carros', (req,resp,next) =>{
          resp.json({modelo:"Ferrari"})
          return next();
      })
      aplicacao.get('/carros/:id', (req,resp,next) =>{
        resp.json({id:req.params.id})
        return next();
    })
    }
}

export const carroRotas = new CarroRotas