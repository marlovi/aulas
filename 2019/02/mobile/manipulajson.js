let fs = require("fs")

let arquivo = fs.readFileSync("pessoa.json")

let jsonArquivo = JSON.parse(arquivo)


console.log(jsonArquivo.nome)


jsonArquivo.email.forEach(
    (value,i)=>console.log(`index ${i} email: ${value}`)
)



let  vNotas =jsonArquivo.notas.filter(v => v >=7).map(v => v * 2)

console.log(vNotas)