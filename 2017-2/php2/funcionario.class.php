<?php
    class Funcionario{
        private $cpf;
        private $nome;
        private $cargo;


        public function setCpf($cpf){
            $this->cpf = $cpf;
        }
        public function setNome($nome){
            $this->nome = $nome;
        }
        public function setCargo($cargo){
            $this->cargo = $cargo;
        }

        public function getCpf(){
            return $this->cpf;
        }
        public function getNome(){
            return $this->nome;
        }
        public function getCargo(){
            return $this->cargo;
        }
    }



?>