import {Fatorial} from './fatorial'
import {Aluno} from './aluno.model'
import {Primario} from './primario.model'
let fat:Fatorial = new Fatorial
let joao:Aluno = new Aluno('João da Silva',56)
let maria:Aluno = new Aluno('Maria Aparecida')

let array:Array<Aluno> = [joao,maria]

console.log(`O valor do de 5 fatorial é   ${fat.calcular(5)}`)


console.log(joao)
console.log(JSON.stringify(joao))

console.log(array)
console.log(JSON.stringify(array))

let ana:Primario = new Primario('Ana luiza')
console.log(JSON.stringify(ana))
