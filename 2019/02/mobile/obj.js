let  obj = {
    "nome":"Marlus Dias Silva",
    "idade":32,
    "fone":"(64)98136-0644",
    "profissao":"Professor EBTT",
    "cpf":"017.065.411-71",
    "email":["marlus.guitar@gmail.com","marlus.silva@ifgoiano.edu.br"]
} 

obj.email.forEach( (valor,index,array) =>{
    console.log(`index i=${index} valor = ${valor}`)
})



