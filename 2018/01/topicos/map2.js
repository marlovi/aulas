const nums = [1,2,3,4,5]

const soma = function(v){
    return v + 10
}
const triplo = function(v){
    return v * 3
}
const dinheiro = function(v){
    return `R$ ${parseFloat(v).toFixed(2).replace('.',',')}`
}

const somaArrow  = (v) => v + 20
const triploArrow = (v) => v * 3
const dinheiroArrow = (v) => `R$ ${parseFloat(v).toFixed(2).replace('.',',')}`



console.log(nums.map(somaArrow))

console.log(nums.map(soma).map(triplo).map(dinheiro))

console.log(nums)