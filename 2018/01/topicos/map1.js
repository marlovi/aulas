Array.prototype.map2 = function(callback){
    const novoArray = []
    for(let i =0 ; i < this.length ; i++)
        novoArray.push(callback(this[i],i,this))

    return novoArray
}
const valores  = [4,250,33,25,90]


const resultado = valores.map2(function(valor,index,vetor){
    return Math.pow(valor,2)
})

console.log(valores)
console.log(resultado)

