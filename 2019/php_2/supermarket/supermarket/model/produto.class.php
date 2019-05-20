<?php
    class Produto{
        private $id_produto;
        private $nome;
        private $valor;
        private $descricao;
        private $codigoBarras;
        private $dataValidade;
        private $perecivel;
        
        private $con;

        // public function __construct($con)
        // {
        //     $this->con = $con;
        // }

        public function setId($id_produto){
            $this->id_produto = $id_produto;
        }
        public function getId(){
            return $this->id_produto;
        }

        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;
        }
        
        public function setValor($valor){
            $this->valor = $valor;
        }
        public function getValor(){
            return $this->valor;
        }

        public function setDescricao($descricao){
            $this->descricao = $descricao;
        }
        public function getDescricao(){
            return $this->descricao;
        }

        public function setCodigoBarras($codigoBarras){
            $this->codigoBarras = $codigoBarras;
        }
        public function getCodigoBarras(){
            return $this->codigoBarras;
        }

        public function setPerecivel($perecivel){
            $this->perecivel = $perecivel;
        }
        public function isPerecivel(){
            return $this->perecivel;
        }
        
        public function setDataValidade($dataValidade){
            $this->dataValidade = $dataValidade;
        }
        public function getDataValidade(){
            return $this->dataValidade;
        }
    }

?>