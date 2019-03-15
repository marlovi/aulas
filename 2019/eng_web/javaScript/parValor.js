const variavel = "dentro do escopo da aplicação"


let cliente =  {
    nome: 'Pedro Henrique Siqueira', 
    idade: 18, 
    peso: 90, 
    endereco: {
        logradouro: 'Rua Jatobá',
        numero: 10
        
    },
    salario : function(gratificacao){
        return 1600 + gratificacao
    }
}

cliente.cpf = "017.065.478-98"
cliente.telefones = {
    cel:"6498136-0644",
    fixo:"3622-9898"
}
console.log(cliente.nome)
cliente.nome = "Fernando Henrique Cardoso"

console.log(cliente)
console.log(cliente.salario(10.02))