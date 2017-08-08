<?php
    require_once 'pessoa.class.php';
    class PessoaJuridica extends Pessoa{
        private $razaoSocial;
        private $cnpj;

        public function __construct(){
            parent::__construct();
        }

        public function setRazaoSocial($razaoSocial){
            $this->razaoSocial = $razaoSocial;
        }
        public function getRazaoSocial(){
            return $this->razaoSocial;
        }
        public function setCnpj($cnpj){
            $this->cnpj = $cnpj;
        }
        public function getCpnf(){
            return $this->cnpj;
        }

    }
?>