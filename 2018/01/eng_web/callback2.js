const fabricantes = ['Ford','Mercedes',"Ferrari",'BMW']
fabricantes[50] = "oi";
function imprimir(valor,index){
    console.log(`O fabricante é ${valor} e o índice no vetor é ${index}`)
}
//fabricantes.forEach(imprimir)

//fabricantes.forEach( (v,index) => console.log(index))

const teste = (a,b,c) =>{
    console.log(`Elemento ${b+1} = ${a}   `)
} 

fabricantes.forEach(teste)
//fabricantes.forEach( (v,i) => (i === 3)?console.log(`Elemento valor = ${v}`):0)
