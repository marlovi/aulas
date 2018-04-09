<?php 
    class Escola{
        private $codigo;
        private $nome;
        private $telefone;
        private $email;
        private $endereco;
        private $diretor; // composicao
        private $categoria;

        public function getCategoria(){
            return $this->categoria;
        }
        public function setCategoria($categoria){
            $this->categoria = $categoria;
        }



//Aplicar o encapsulamento ok 

        // 5 minutos

       
        public function getCodigo(){
            return $this->codigo;
        }
        public function setCodigo($codigo){
            $this->codigo = $codigo;
        }
        public function getNome(){
            return $this->nome;
        }
        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getTelefone(){
            return $this->telefone;
        }
        public function setTelefone($telefone){
            $this->telefone = $telefone;
        }
        public function getEmail(){
            return $this->email;
        }
        public function setEmail($email){
            $this->email = $email;
        }
        public function getEndereco(){
            return $this->endereco;
        }
        public function setEndereco($endereco){
            $this->endereco = $endereco;
        }


        public function getDiretor()
        {
                return $this->diretor;
        }

        public function setDiretor($diretor)
        {
                $this->diretor = $diretor;

                
        }
    }


?>