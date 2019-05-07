<?php 
    require_once("cliente.class.php");
    session_start();
    if(isset($_GET['add'])){
        $c = new Cliente();

        $c->setId(1);
        $c->setNome("Marlus Dias Silva");


        $_SESSION['cliente'] = serialize($c); 


    }


    if(isset($_GET['imprimir'])){
        var_dump($_SESSION['cliente']);
    }

?>