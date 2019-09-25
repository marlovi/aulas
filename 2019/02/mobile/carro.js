let carros = [
    {
        "marca":"Ferrari",
        "ano":2017,
        "preco":1.00,
        "fabricacao":"Itália",
        "cor":"vermelha"
    },
    {
        "marca":"Ferrari",
        "ano":2011,
        "preco":10000.00,
        "fabricacao":"Itália",
        "cor":"Amarelo"
    },
    {
        "marca":"Ferrari",
        "ano":2010,
        "preco":5000.00,
        "fabricacao":"Itália",
        "cor":"Pink"
    }
]
/*
carros.forEach((valor,i)=>{
    console.log(`Marca ${valor.marca}` )
    console.log(`Preço ${valor.preco}`)
    console.log(`Cor  ${valor.cor}`)
})*/

let c = carros.filter( (valor)=> valor.preco > 2000)
              .filter( (valor)=> valor.preco <= 10000)
              .filter( v => v.ano == 2010)


c.forEach((v,i) => console.log(v.cor))



let texto = '[{"nome":"Marlus Dias"},{"nome":"Fernanda Souza"}]';

console.log(texto)


let objNovo = JSON.parse(texto)


console.log(objNovo)

console.log(JSON.stringify(objNovo))







