<?php

function conectar(){
    $servername = "localhost";
    $username="marlus";
    $password="s1lv@385";
    $dbname="exemplo";

    $con = mysqli_connect($servername,$username,$password,$dbname);

    if(!$con){
        die("Falha ao conectar com o banco de dados ".mysqli_connect_error());
    }

    return $con;


}
?>