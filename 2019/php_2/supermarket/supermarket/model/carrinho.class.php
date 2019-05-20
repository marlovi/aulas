<?php
    class Carrinho{
        private $id_usuario;
        private $id_produto;
        private $valor;
        private $qnt;

        public function setIdUsuario($idUsuario){
            $this->id_usuario = $idUsuario;
        }
        public function getIdUsuario(){
            return $this->id_usuario;
        }
        public function setIdProduto($idProduto){
            $this->id_produto = $idProduto;
        }
        public function getIdProduto(){
            return $this->id_produto;
        }
        public function setValor($valor){
            $this->valor = $valor;
        }
        public function getValor(){
            return $this->valor;
        }
        public function setQnt($qnt){
            $this->qnt = $qnt;
        }
        public function getQnt(){
            return $this->qnt;
        }
    }
?>