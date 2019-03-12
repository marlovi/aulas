<?php

class Produto{
    private $id;
    private $nome;
    private $codigo;
    private $estoque;
    private $preco_compra;  
    private $preco_venda;  
    private $perecivel;
    private $ativo; 
    private $data_validade;
    private $descricao; 
    
    public function setId($id){
        $this->id = $id;
    }
    public function getId(){
        return $this->id;
    }
    public function getNome(){
        return $this->nome;
    }

    public function setNome($nome){
        $this->nome = $nome;
    }

    public function getPrecoCompra(){
        return $this->preco_compra;
    }

    public function setPrecoCompra($preco_compra){
        $this->preco_compra = $preco_compra;
    }

    public function getDescricao(){
        return $this->descricao;
    }

    public function setDescricao($descricao){
        $this->descricao = $descricao;
    }

    public function getPrecoVenda(){
        return $this->preco_venda;
    }

    public function setPrecoVenda($preco_venda){
        $this->preco_venda = $preco_venda;
    }

    public function isPerecivel(){
        return $this->perecivel;
    }

    public function setPerecivel($perecivel){
        $this->perecivel = $perecivel;
    }

    public function isAtivo(){
        return $this->ativo;
    }

    public function setAtivo($ativo){
        $this->ativo = $ativo;
    }

    public function getDataValidade(){
        return $this->data_validade;
    }

    public function setDataValidade($data_validade){
        $this->data_validade = $data_validade;
    }

    public function getEstoque(){
        return $this->estoque;
    }

    public function setEstoque($estoque){
        $this->estoque = $estoque;
    }

    public function getCodigo(){
        return $this->codigo;
    }

    public function setCodigo($codigo){
        $this->codigo = $codigo;
    }

}

    // $produto = new Produto();
    // $produto -> setNome("Jeffinho");
    // var_dump($produto);


?>