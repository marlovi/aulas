<?php
    class Diretor{
        private $codigo;
        private $nome;
        private $email;

        public function setCodigo($codigo){
            $this->codigo = $codigo;
        }
        public function getCodigo(){
            return $this->codigo;
        }

        
        public function getEmail()
        {
                return $this->email;
        }

        
        public function setEmail($email)
        {
                $this->email = $email;

               
        }

        public function getNome()
        {
                return $this->nome;
        }

        public function setNome($nome)
        {
                $this->nome = $nome;              
        }
    }
?>