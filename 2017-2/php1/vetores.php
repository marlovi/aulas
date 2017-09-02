<?php

    $vetor = array();
    $p1 = 50.0;
    $megasenha= "não ganhei de novo";
    $megasenh= "nao ganhei de novo";

    array_push($vetor,$p1);
    array_push($vetor,$megasenha);
    array_push($vetor,$megasenh);

    //array_pop($vetor);

    //??
    //no terceiro elemento quero adicionar o valor 100.02 ? como fazer isso, utilizando a conotação matemática;

    $vetor[2] = 100.02;

//    array_shift($vetor);
    //unset($vetor[1]);
    
    $contador = 0;

   /* while($contador < 3){
      echo "<br> ";
        echo $vetor[$contador];

        $contador++;
    }*/

 foreach ($vetor as $key => $value){
     echo "<br> KEY  ".$key." VALUE = ".$value;
 }
    //var_dump($vetor);
?>