console.log(typeof Array, typeof new Array, typeof [])

let aprovados = new Array('Ana', "Maria",'Joana','Fernanda', "marilha")
console.log(aprovados)

console.log(aprovados[2])
console.log(aprovados[4])

aprovados[10] = 'Jéssica'

aprovados[5] = function(valor){
    console.log(`O valor indicado foi ${valor}`)
}
aprovados[5](1000)

aprovados.push([10,11,12])

aprovados.sort()

console.log(aprovados)

let numeros = [29,778,54447,6,545,214,3,2,1321321,0]

numeros.sort()

//console.log(numeros)


//delete numeros[1]
//numeros.splice(1,5)
console.log(numeros)

numeros.forEach(function(valor,index,vetor){
    console.log(`index = ${index}   elemento [${valor}]`)
   // console.log(vetor)
})
let mal = new Array
for(let i=0; i <10; i++){
    mal.push('elemento  '+i)
}

console.log(`mal mal mal ${mal}`)