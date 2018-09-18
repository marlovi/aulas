<?php 
    class Cliente{
        private $idCliente;
        private $nome;
        private $email;

        public function setIdCliente($idCliente){
            $this->idCliente = $idCliente;
        }
        public function setNome($nome){
            $this->nome = $nome;
        }
        public function setEmail($email){
            $this->email = $email;
        }
        public function getIdCliente(){
            return $this->idCliente;
        }
        public function getNome(){
            return $this->nome;
        }
        public function getEmail(){
            return $this->email;
        }


    }

?> 