<?php 
    class Produto{
        private $idProduto;
        private $nome;
        private $codigoBarras;


        public function setIdProduto($idProduto){
            $this->idProduto = $idProduto;
        }
        public function setNome($nome){
            $this->nome = $nome;
        }
        public function setCodigoBarras($codigoBarras){
            $this->codigoBarras = $codigoBarras;
        }
        public function getCodigoBarras(){
            return $this->codigoBarras;
        }
        public function getNome(){
            return $this->nome;
        }
        public function getIdProduto(){
            return $idProduto;
        }
    }
?>