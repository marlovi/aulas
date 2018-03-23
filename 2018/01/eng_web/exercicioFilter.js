const produtos = [
    { nome: 'Notebook', preco: 2499, fragil: true },
    { nome: 'iPad Pro', preco: 4199, fragil: true },
    { nome: 'Copo de Vidro', preco: 12.49, fragil: true },
    { nome: 'Copo de Plástico', preco: 18.99, fragil: false }
]

console.log(produtos.filter(produto => produto.preco > 500))
console.log(produtos.filter(produto => !produto.fragil))
console.log(produtos.filter(produto => produto.preco > 3500 ).filter(produto => !produto.fragil))