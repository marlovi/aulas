<?php 
    require_once "conexao.class.php";
    require_once "daocliente.class.php";
    require_once "cliente.class.php";

    $cliente = new Cliente();
    $cliente->setNome("José da Silva");
    $cliente->setCpf("012.333.444-74");

    DaoCliente::save($cliente);


?>