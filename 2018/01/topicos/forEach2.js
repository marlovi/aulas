Array.prototype.forEach2 = function(callback){
    for(let i = 0; i < this.length; i++)
        callback(this[i],i) 
}







const aprovados = ['Agatha', 'Aldo', 'Daniel', 'Raquel']

aprovados.forEach2(function(v,i){
    console.log(`${i} ${v} `)
})


