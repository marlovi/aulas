<?php 
    class Usuario{
        private $id_usuario;
        private $nome;
        private $email;
        private $cpf;
        private $rg;
        private $senha;
        private $con;
        private $telefones; // criar um array de telefones  

        // public function __construct($con)
        // {
        //     $this->con = $con;
        // }

        public function setTelefones($telefones){
            $this->telefones = $telefones;
        }
        public function getTelefones(){
            return $this->telefones; 
        }
        public function setIdUsuario($id_usuario){
            $this->id_usuario = $id_usuario;
        }
        public function getIdUsuario(){
            return $this->id_usuario;
        }

        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;
        }

        public function setEmail($email){
            $this->email = $email;
        }
        public function getEmail(){
            return $this->email;
        }

        public function setCpf($cpf){
            $this->cpf = $cpf;
        }
        public function getCpf(){
            return $this->cpf;
        }

        public function setRg($rg){
            $this->rg = $rg;
        }
        public function getRg(){
            return $this->rg;
        }

        public function setSenha($senha){
            $this->senha = $senha;
        }
        public function getSenha(){
            return $this->senha;
        }
    }
?>