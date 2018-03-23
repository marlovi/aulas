const alunos = [
    {nome: 'João', nota: 7.3, bolsista: false},
    {nome: 'Maria', nota: 9.2, bolsista: true},
    {nome: 'Pedro', nota: 9.8, bolsista: false},
    {nome: 'Ana', nota: 8.7, bolsista: true}
]

console.log(alunos.map( aluno => aluno.nota).reduce((total,valor) => total + valor))
let notas = [1,2,3,4,5]

console.log(notas.reduce((total,nota) => total + nota ,3))