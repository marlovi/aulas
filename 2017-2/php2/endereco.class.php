<?php 
    class Endereco{
        private $logradouro;
        private $numero;
        private $cep;
        private $cidade;
        private $bairro;
        private $estado;

        public function setLogradouro($logradouro){
            $this->logradouro = $logradouro;
        }
        public function setNumero($numero){
            $this->numero = $numero;
        }
        public function setCep($cep){
            $this->cep = $cep;
        }
        public function setCidade($cidade){
            $this->cidade = $cidade;
        }
        public function setBairro($bairro){
            $this->bairro = $bairro;
        }
        public function setEstado($estado){
            $this->estado = $estado;
        }

        public function getLogradouro(){
            return $this->logradouro;
        }
        public function getNumero(){
            return $this->numero;
        }
        public function getCep(){
            return $this->cep;
        }
        public function getCidade(){
            return $this->cidade;
        }
        public function getBairro(){
            return $this->bairro;
        }
        public function getEstado(){
            return $this->estado;
        }


    }
?>