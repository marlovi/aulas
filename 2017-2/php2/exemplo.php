<?php 
require_once "pessoa.class.php";
  $maria = new Pessoa();
  $joaquim = new Pessoa();

  $doido = new Pessoa();
  $x = "João Doidão";

  $joaquim->setNome($x);

  $doido->setNome("Doidão");


  var_dump($joaquim);
  var_dump($doido);
?> 