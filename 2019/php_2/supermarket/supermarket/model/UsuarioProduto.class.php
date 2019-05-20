<?php
    class UsuarioProduto{
        private $id_usuario_produto;
        private $produto_id_produto;
        private $usuario_id_usuario;
        private $valor_total;
        private $data_compra;

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

        public function setValorTotal($valor_total){
            $this->valor_total = $valor_total;
        }
        public function getValorTotal(){
            return $this->valor_total;
        }

        public function setDataCompra($data_compra){
            $this->data_compra = $data_compra;
        }
        public function getDataCompra(){
            return $this->data_compra;
        }
    }
?>