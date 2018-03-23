Array.prototype.filtrar = function(callback){
    const novoArray = [];
    for(let i =0 ; i < this.length; i++){
        if(callback(this[i],i,this)){
            novoArray.push(this[i])
        }
    }
    return novoArray
}

const alunos = [
    {nome: 'João', nota: 7.3, bolsista: false},
    {nome: 'Maria', nota: 9.2, bolsista: true},
    {nome: 'Pedro', nota: 9.8, bolsista: false},
    {nome: 'Ana', nota: 8.7, bolsista: true}
]

console.log(alunos)
console.log(alunos.map(x =>  x.nome))

const funcaoBolsista = aluno => aluno.bolsista

const notasAltas = x => x.nota > 9.0

console.log('\n\n\n\n')
console.log(alunos.filter(funcaoBolsista))
console.log('\n\n\n\n')

console.log(alunos.filter(notasAltas))
/*
console.log('\n\n\n\n')

console.log(alunos.filter(notasAltas).filter(funcaoBolsista))
console.log(alunos.filter(notasAltas).map(aluno => {
    aluno.nota = aluno.nota -1.0

    return aluno
}))


alunos.filter(( x , i, obj)=> {console.log(obj)})
*/