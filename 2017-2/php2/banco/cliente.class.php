<?php 
    class Cliente{
        private $codigo;
        private $nome;
        private $cpf;
    
    
        public function getNome(){
            return $this->nome;
        }
        public function getCpf(){
            return $this->cpf;
        }
        public function getCodigo(){
            return $this->codigo;
        }
        public function setCodigo($codigo){
            $this->codigo = $codigo;
        }
        public function setNome($nome){
            $this->nome = $nome;
        }
        public function setCpf($cpf){
            $this->cpf = $cpf;
        }
    
        public function __construct(){
            
        }
    
    }



?>