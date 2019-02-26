<?php 

    class Aluno{
        private $nome;
        private $matricula;
        private $rg;
        private $cpf;
        private $telefone;
        private $email;
        private $dataNascimento;

        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;
        }
        public function setMatricula($matricula){
            $this->matricula = $matricula;
        }
        public function getMatricula(){
            return $this->matricula;
        }
        public function setRg($rg){
            $this->rg = $rg;
        }
        public function getRg(){
            return $this->rg;
        }
        public function setCpf($cpf){
            $this->cpf= $cpf;
        }
        public function getCpf(){
            return $this->cpf;
        }
        public function setTelefone($telefone){
            $this->telefone = $telefone;
        }
        public function getTelefone(){
            return $this->telefone;
        }
        public function setEmail($email){
            $this->email = $email;
        }
        public function getEmail(){
            return $this->email;
        }
        public function setDataNascimento($dataNascimento){
            $this->dataNascimento = $dataNascimento;
        }
        public function getDataNascimento(){
            return $this->dataNascimento;
        }
    }


?> 