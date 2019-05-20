<?php
    class Endereco{
        private $id_endereco;
        private $cep;
        private $rua;
        private $bairro;
        private $num;
        private $complemento;
        private $cidade_id_cidade;

        public function setIdEndereco($id_endereco){
            $this->id_endereco = $id_endereco;
        }
        public function getIdEndereco(){
            return $this->id_endereco;
        }

        public function setCep($cep){
            $this->cep = $cep;
        }
        public function getCep(){
            return $this->cep;
        }

        public function setRua($rua){
            $this->rua = $rua;
        }
        public function getRua(){
            return $this->rua;
        }

        public function setBairro($bairro){
            $this->bairro = $bairro;
        }
        public function getBairro(){
            return $this->bairro;
        }

        public function setNum($num){
            $this->num = $num;
        }
        public function getNum(){
            return $this->num;
        }

        public function setComplemento($complemento){
            $this->complemento = $complemento;
        }

        public function getComplemento(){
            return $this->complemento;
        }

        public function setCidadeIdCidade($cidade_id_cidade){
            $this->cidade_id_cidade = $cidade_id_cidade;
        }
        public function getCidadeIdCidade(){
            return $this->cidade_id_cidade;
        }
    }
?>