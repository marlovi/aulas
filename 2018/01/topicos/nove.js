
scanf = require('scanf')
const metroParaKM = function(velocidade){
    return velocidade * 3.6
}

function kmParaMetros(velocidade){
    return velocidade / 3.6
}

const menu = function(scanf){
    console.log("Digite 1 para informar a velocidade em metros por segundo")
    console.log("Digite 2 para informar a velocidade em km horas");
    console.log("Digite 0 para SAIR")
    let op = scanf("%d");
    return op;
}
const informeValor = function(s){
    console.log("Informe uma velocidade")
    let r = s('%d')
    return r
}

let op = 0
do{
    op = menu(scanf);
    switch(op){
        case 1: {
           console.log(`O valor em km é ${metroParaKM(informeValor(scanf))}`)
        }break
        case 2: {
            console.log(`O valor em ms é ${kmParaMetros(informeValor(scanf))}`)
        }break
        default:console.log("Opção Inválida")
    }
}while(op !== 0)

