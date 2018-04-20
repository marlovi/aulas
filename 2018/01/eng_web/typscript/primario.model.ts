import {Aluno} from './aluno.model'
export class Primario extends Aluno{
    constructor(nome:string,idade:Number =5){
        super(nome,idade);
    }
}