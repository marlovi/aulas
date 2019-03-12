<?php 
    class Conexao{
        private $servername= "localhost"; // ip fisico ipv4
        private $username = "marlus";
        private $password="marlus";
        private $db = "aula";
        private $conexao;
        public function getConnection(){
            $conexao = new mysqli($this->servername,
                                  $this->username,
                                  $this->password,
                                  $this->db);

            if($conexao->connect_error){
                die("A Conexão falho pelo seguinte motivo {$conexao->connect_error}");
            }
            return $conexao;
        }
    }
/*
    $c = new Conexao();
    var_dump($c->getConnection());
*/



?>