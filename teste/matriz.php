<?php 

$x = array();


for ($i=0 ; $i<10 ; $i++){
    for($j=0;$j<10;$j++)
       $x[$i][$j] = rand();
}

var_dump($x);
?>