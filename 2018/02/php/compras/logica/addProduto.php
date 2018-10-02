<?php 
    require_once "../beans/produto.class.php";
    require_once "../dao/daoproduto.class.php";

    session_start();
    $arrayProduto = null;
    if(!isset($_SESSION["produto"])){
        $arrayProduto = array();
        echo "aqui";}
  else  {      
        $arrayProduto = unserialize($_SESSION['produto']);
       
    }
    if(isset($_GET['codigo'])){
        $dao = new DaoProduto();
        $produto = $dao->getProduto($_GET['codigo']);

        array_push($arrayProduto,$produto);
        print_r($arrayProduto);
        $_SESSION['produto'] = serialize($arrayProduto);
    }

   
?>  