const scanf = require('scanf')

let notas = new Array 

for( let i = 0 ; i< 10 ;i++){
    console.log(`Informe a ${i}ª nota`)
    let valor = scanf('%f')
    notas.push(valor)
}


notas.forEach (function(valor,index,vetor){
    if(valor >= 7)
        console.log(`nota [ ${valor} ] na posicao ${index} está aprovada  `)
    else
    console.log(`nota [ ${valor} ] na posicao ${index} está reprovado  `)
})