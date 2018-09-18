<?php
    class ItensVenda{
        private $idItensVenda;
        private $clienteIdCliente;
        private $produtoIdProduto;
        private $venda;


        public function setVenda($venda){
            $this->venda = $venda;
        }
        public function getVenda(){
            return $venda;
        }
        public function getProdutoIdProduto(){
            return $this->produtoIdProduto;
        }
        public function setProdutoIdProduto($produtoIdProduto){
            $this->produtoIdProduto = $produtoIdProduto;
        }
        public function getClienteIdCliente(){
            return $this->clienteIdCliente;
        }
        public function setClienteIdCliente($clienteIdCliente){
            $this->clienteIdCliente = $clienteIdCliente;
        }
        public function setIdItensVenda($idItensVenda){
            $this->idItensVenda  = $idItensVenda;
        }
        public function getIdItensVenda(){
            return $idItensVenda;
        }
    }


?>