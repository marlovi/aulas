scanf = require('scanf')

const calcular = function(salario){
    let desconto = salario * 0.9
        desconto = desconto * 0.95
    return desconto
}


console.log("Informe o valor do salário bruto")
let sal = scanf('%f')

console.log(`O Salário Líquido é R$ ${calcular(sal)} `)