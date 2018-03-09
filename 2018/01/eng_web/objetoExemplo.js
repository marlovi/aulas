
function Aluno(nome,v1,v2,v3){
    this.nome = nome
    this.v1= v1;
    this.v2 = v2;
    this.v3 = v3;

   
    this.resultado = function(){
        return (((this.v1+this.v2+this.v3) /3) > 6)? 'Aprovado' : 'Reprovado'
    }

}

let aluno = new Aluno('João da silva')
aluno.cpf = '0170.65.411-70'

console.log(aluno)



a = new Aluno('Alice',4,1,2)

console.log(a.resultado())


x = new Aluno 

console.log(a.v2)