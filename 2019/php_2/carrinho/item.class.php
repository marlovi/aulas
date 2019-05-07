<?php 

class Item{
    private $id;
    private $idCliente;
    private $idProduto;
    private $valor;



    public function setId($id){
        $this->id = $id;
    }
    public function getId(){
        return $this->id;
    }
    public function setIdCliente($idCliente){
        $this->idCliente = $idCliente;
    }
    public function getIdCliente(){
        return $this->idCliente;
    }
    public function setIdProduto($idProduto){
        $this->idProduto = $idProduto;
    }
    public function getIdProduto(){
        return $this->produto;
    }
    public function setValor($valor){
        $this->valor = $valor;
    }
    public function getValor(){
        return $this->valor;
    }
}

?>