<?php 
    $vetor = array("a","b","c","d","e","f");

    $arraySerializado = serialize($vetor);

    echo $arraySerializado;


    var_dump(   unserialize($arraySerializado) );

    //echo $vetor;


?>