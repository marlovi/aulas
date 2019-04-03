
import {Fatorial}  from './fatorial'
import {Aluno} from './aluno.model'
import {Carro} from './carro.model'
import { Ka } from './ka';
import { Celta } from './celta';


let fat:Fatorial = new Fatorial

let aluno:Aluno = new Aluno("Alice",2,"123456","123.456.456-98")


console.log(aluno)
console.log(`O fatorial de 5 é ${fat.calcular(1)}`)


//let  carro:Carro  = {nome:"Fiesta",placa:"OMX1234",potencia:25,cor:"Pink",ano:1964,combustivel:"Gás"}


let ka:Ka = new Ka
let celta:Celta = new Celta
function imprimir(c:Carro):void{
    console.log(c.precoVenda())
}



imprimir(ka)

imprimir(celta)