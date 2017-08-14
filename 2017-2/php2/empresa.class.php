<?php
    require_once("endereco.class.php");
    require_once("funcionario.class.php");
    class Empresa{
        private $razaoSocial;
        private $cnpj;

        ///relacionamento de composição 
        private $endereco;
        private $funcionario;

        public function setRazaoSocial($razaoSocial){
            $this->razaoSocial = $razaoSocial;
        }
        public function setCpnj($cnpj){
            $this->cnpj = $cnpj;
        }
        public function setEndereco($endereco){
            $this->endereco = $endereco;
        }
        public function setFuncionario($funcionario){
            $this->funcionario = $funcionario;
        }

        public function getRazaoSocial(){
            return $this->razaoSocial;
        }
        public function getCnpj(){
            return $this->cnpj;
        }
        public function getEndereco(){
            return $this->endereco;
        }
        public function getFuncionario(){
            return $this->funcionario;
        }




    }

    $x  = new Endereco();
    $x->setLogradouro("Avenida");
    $empresa = new Empresa();

    $funcionario = new Funcionario();
    $funcionario->setNome("João pereira");

    $empresa->setFuncionario($funcionario);
    $empresa->setEndereco($x);
    

    $f = $empresa->getFuncionario();

    echo $f->getNome();


?>