<?php
  require_once "daocliente.class.php";
  require_once "cliente.class.php";
 $codigo = $_GET['codigo'];

 if(DaoCliente::delete($codigo)){
     echo "<script> alert('excluído com sucesso'); window.location.href='pesquisarclientes.php';</script>";
 }


?>