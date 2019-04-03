export class Aluno{
    nome?:string
    idade:number
    rg:string
    cpf:string

    constructor(nome:string, idade:number, rg:string, cpf:string){
        this.nome = nome
        this.idade = idade
        this.rg = rg;
        this.cpf = cpf;

    }


}