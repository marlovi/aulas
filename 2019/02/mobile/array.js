console.log(typeof Array, 
            typeof new Array, 
            typeof [])

let aprovados = new Array('Bia','Carlos','Amanda','Fernanda')

console.log(aprovados[2])

aprovados.push(200)

console.log(aprovados.pop())

console.log(aprovados)

aprovados.sort()

console.log(aprovados)
console.log(aprovados.length)

delete aprovados[2]

console.log(aprovados)


aprovados.splice(2,1)


console.log(aprovados)