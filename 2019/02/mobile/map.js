let   mapa = new Map(); 

console.log(typeof mapa)

let keyString = "uma string"
let keyObj = {} 
let keyFuncao = function(){} 


console.log(typeof keyString, typeof keyObj, typeof keyFuncao)
_
mapa.set(keyString, "valor associado a uma string")
mapa.set(keyObj, "valor associado a um objeto")
mapa.set(keyFuncao, "valor associado a uma keyFunc")


console.log(mapa.size)
console.log(
    mapa.get(keyString))
console.log