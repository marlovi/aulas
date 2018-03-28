<?php 
    function getConnection(){
        $servername = "localhost";
        $username = "marlus";
        $password = "marlus";//aluno123
        $database = "aula2";

        $con = mysqli_connect($servername,
                              $username,
                              $password,
                              $database);
 
        if(!$con){
            die("Falha ao conectar ".mysqli_connect_error());
        }
        return $con;
    }

    

?>