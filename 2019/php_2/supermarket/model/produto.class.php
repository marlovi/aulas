<?php
    class Produto{
        private $id_produto;
        private $nome;
        private $valor;
        private $descricao;
        private $codigoBarras;
        private $dataValidade;
        private $perecivel;
        //Tabela usuario_Produto
        private $id_usuario_produto;
        private $produto_id_produto;
        private $usuario_id_usuario;
        private $data_compra;
        private $con;

        public function __construct($con)
        {
            $this->con = $con;
        }



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

        public function setIdusuarioProduto($id_usuario_produto){
            $this->id_usuario_produto = $id_usuario_produto;
        }
        public function getIdusuarioProduto(){
            return $this->id_usuario_produto;
        }

        public function setProdutoIdProduto($produto_id_produto){
            $this->produto_id_produto = $produto_id_produto;
        }
        public function getProdutoIdProduto(){
            return $this->produto_id_produto;
        }

        public function setusuarioIdusuario($usuario_id_usuario){
            $this->usuario_id_usuario = $usuario_id_usuario;
        }
        public function getusuarioIdusuario(){
            return $this->usuario_id_usuario;
        }

        public function setDataCompra($data_compra){
            $this->data_compra = $data_compra;
        }
        public function getDataCompra(){
            return $this->data_compra;
        }
    }


?>