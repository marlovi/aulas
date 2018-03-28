<?php 
    require_once("conexao.php");
    function save($nome,$cnpj,$razao_social){
        $validacao = NULL;
       $sql = "INSERT INTO `fornecedor`(`nome`,`cnpj`,`razao_social`)".
        " VALUES('".$nome."','".$cnpj."','".$razao_social."')";
        $con = getConnection();
        if(mysqli_query($con,$sql)){
            $validacao = true;
        }else{
            $validacao = false;
            die(mysqli_error($con));
        }
        return $validacao;
    }

   ?>