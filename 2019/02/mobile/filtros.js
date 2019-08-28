const produtos = [
    { nome: 'Notebook', preco: 2499, fragil: true },
    { nome: 'iPad Pro', preco: 4199, fragil: false },
    { nome: 'Copo de Vidro', preco: 12.49, fragil: true },
    { nome: 'Copo de Plástico', preco: 18.99, fragil: false }
]

const caro = (produto) => produto.preco >= 500

console.log(produtos.filter(caro))

const fra = (produto) => produto.fragil


console.log(produtos.filter(fra))
console.log('aqui interessante recursividade')

console.log(produtos.filter(caro).filter(fra))

