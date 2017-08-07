<?php
    require_once 'pessoa.class.php';
    class PessoaFisica extends Pessoa{
        private $cpf;

        public function setCpf($cpf){
            $this->cpf = $cpf;
        }

        public function getCpf(){
            return $this->cpf;
        }

        function __construct(){
            parent::__construct(); // está instanciando na memória, um objeto da classe pessoa.
            echo "PessoaFísica<br><br>";
        }
    } 


    $obj = new PessoaFisica();
    $obj->setNome("João");

    var_dump($obj);
?>