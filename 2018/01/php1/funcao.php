<?php 

    function soma($elemento1,$elemento2){
        $total = $elemento1 + $elemento2;
        return $total;
    }

    function imprimir($valor){
        echo $valor;
    }
    function converterStringParaInteiro($v){
        return intval($v);
    }


   
    $v1 = soma(2,2);

   // imprimir($v1);
    echo converterStringParaInteiro("000000020") - converterStringParaInteiro("10");

   // echo "20" - 20;

?> 