const fabricantes = ['Ford','Mercedes',"Ferrari",'BMW']

function imprimir(valor,index){
    console.log(`O fabricante é ${valor} e o índice no vetor é ${index}`)
}
//fabricantes.forEach(imprimir)

//fabricantes.forEach( (v,index) => console.log(index))
fabricantes.forEach( (v,i) => (i === 3)?console.log(`Elemento valor = ${v}`):0)
