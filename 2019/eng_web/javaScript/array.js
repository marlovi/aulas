


console.log(typeof Array, typeof new Array, typeof [])
let aprovados = new Array('Bia','Ana',"Fernanda")
console.log(aprovados)

console.log(aprovados[0])

aprovados.push('Marcelo')

aprovados.sort();

let valor = [9,25,31,-8,-10,0]


valor.sort(function (a,b){
    if( a  < b){
        return 1
    }
    if( a > b) 
        return -1
    return 0
}) ;


function compara(a,b){
    if(a[0] < b[0])
        return -1
    if(a[0] > b[0])
        return 1
    return 0;
}
aprovados.sort(compara)

valor[10] = 15

valor[25] =-1
console.log(valor)
console.log(aprovados)

function imprimir(e){
    if(e == 0)    
        console.log('valor encontrado ',e)
}

/*valor.forEach( function(elemento,index,array){
    console.log(`Elemento é ${elemento} index   ${index}`,array)
})*/

function positivos(valor){
    return valor >= 0
}

valor.forEach(imprimir)


let filtrados = valor.filter(positivos)

console.log(filtrados)


console.log(valor.slice(1,3))

/*function multDois(valor){
    return valor * 2
}*/

let mutlDois = valor => valor * 2


let numeros = [1,2,3,4,5]

console.log(numeros.map(mutlDois).map(mutlDois).slice(3,numeros.length).map(mutlDois).map(function(v){
    return v - 10
}))
