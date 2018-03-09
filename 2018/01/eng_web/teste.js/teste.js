function call(valor,callback){
    console.log(valor)
    callback()
}


call(10,function(){
    console.log("chamando uma função callback")
})


