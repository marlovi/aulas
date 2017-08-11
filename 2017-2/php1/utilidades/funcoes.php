<?php 

    function menor($n1,$n2,$n3){
        $resultado = $n1;

        if($n2 < $resultado) 
            $resultado = $n2;
        if($n3 < $resultado )
            $resultado = $n3;

        return $resultado;

    }

    function maior($n1,$n2,$n3){
        $resultado = $n1;
        if($n2 > $resultado)
            $resultado  = $n2;
        if($n3 > $resultado)
            $resultado = $n3;

        return $resultado;
    }

    function dobro($valor){
        $resultado = (2 * $valor);
        return $resultado;
    }


?>