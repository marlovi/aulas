<?php 
    class Conexao{
        private $servername = "localhost";
        private $username = "marlus";
        private $password="marlus";
        private $dbname = "compras";

        public function getConnection(){
            $con = new mysqli($this->servername,
                              $this->username,
                              $this->password,
                              $this->dbname);

            if($con->connect_error){
                die("Falha na conexão  {$con->connect_error}");
            }

            return $con;

        }
    }

 /*   $x  = new Conexao();

    $conexao = $x->getConnection(); 

    var_dump($conexao);*/

?>