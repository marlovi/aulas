<?php
    class Conexao{
        private $db = 'supermarket';
        private $user = 'marlus';
        private $password = 'marlus';
        private $server = 'localhost';
        private $conexao;

        public function getConnection(){
            $conexao = new mysqli($this->server, $this->user, $this->password, $this->db);
            if($conexao->connect_error){
                die("A conexão falhou : " . $conexao->connect_error);
            }
            return $conexao;
        }
    }


    //Testando
    // $con = new Conexao();
    // echo '<pre>';
    // var_dump($con->getConnection());
    // echo '</pre>';
?>