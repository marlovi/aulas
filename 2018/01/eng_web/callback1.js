function call(valor,callback){
    console.log(valor);
    callback(valor);
}

function teste(xxxx){
    console.log( 'A nota tirada foi ',xxxx);
}

call(5,
    function (v){
    console.log('elemento   ',v);
}
)
call(5, function( v){
    console.log('quadrado ', Math.pow(5,2))
})

call(7.5,teste)


