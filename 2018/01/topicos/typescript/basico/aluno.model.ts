export class Aluno{
    nome ?: string 
    salario:number = 1000


    constructor( ){
        
    }

    calularSalario(desconto:number):number{
        let total =  this.salario - desconto
        return total
    }

    comissao = (ganho:number) =>{
        return this.calularSalario(200) + ganho
    }
}