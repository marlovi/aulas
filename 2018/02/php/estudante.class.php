<?php 

    class Estudante{
        private $nome;
        private $idade; 

        public function __construct(){
            //Método contrutor
        }

        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;   
        }
    } 

        $p = new Estudante();

       
    $p->setNome("Marcelo Bueno");


    echo "O nome adicionado foi ".$p->getNome().
    " <br><br> ";
    echo "O nome adicionado foi {$p->getNome()} <br><br> ";
    var_dump($p);

?> 