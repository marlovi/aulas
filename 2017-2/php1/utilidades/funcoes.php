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

    function e_triangulo($l1,$l2,$l3){
        $resultado = FALSE;

        if(($l1+$l2) > $l3 )
            $resultado = TRUE;
        if(($l2+$l3)>$l1)
            $resultado = TRUE;
        if(($l1+$l3) > $l2)
            $resultado = TRUE;

            return $resultado;
    }

    function equilatero($x,$y,$z){
        return ( ($x==$y) && ($x == $z)&& ($y == $z)  );
    }

?>