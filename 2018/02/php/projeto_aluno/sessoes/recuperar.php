<?php
    

    require_once "../beans/aluno.class.php";
    session_start();
    $objAluno = NULL;
    if(isset($_SESSION['aluno'])){
        $objAluno = unserialize($_SESSION["aluno"]);
    }

    if($objAluno == null) echo "Não existe";
    else var_dump($objAluno);
?>