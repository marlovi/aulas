<?php
    require_once "db/conexao.php";
    require_once "model/query.class.php";

    $id = $_GET['id'];

    $con = new Conexao();
    $query = new Query($con->getConnection());

    $query->id = $id;

    $query->resposta();


?>