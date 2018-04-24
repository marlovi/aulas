import {Aluno} from './aluno.model'
import {AlunoTecnico} from './tecnico.model'

let a:Aluno // criando uma varável a que não tem nada na memória
a = new Aluno

//a.nome = "Alessandro"
let salarioComComissao = a.comissao(1000)

console.log(salarioComComissao)

console.log(a)
console.log(a.calularSalario(500))

let vetor: number[]

vetor = new Array

vetor.push(10)
vetor.push(20)
vetor.push(30)


//vetor.pop()
vetor.forEach(  (elemento,index, pvetor) =>{
        console.log(`O elemento ${elemento} está na posição ${index} do vetor de inteiros`)
     }    
)
console.log(vetor)



let nomes:string[] = [] 
nomes[0] = "Joaquim"
nomes[1] = "ana"
nomes[2] = 'joana'


console.log(nomes)


for( let i = 0  ; i < nomes.length ; i++){
    console.log(nomes[i])
}

nomes.forEach( (e,i,v) =>{
    console.log(e)
})

let tecnico:AlunoTecnico = new AlunoTecnico

console.log(tecnico)
tecnico.formatura = 1.6
tecnico.nome ="Marlus dias Silva"
console.log(tecnico)

console.log(JSON.stringify(tecnico) )




