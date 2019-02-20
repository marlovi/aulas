<?php 
    class Carro{
        private $cor;// 2 ações incluir, obter
        private $modelo;
        private $placa; 
        private $ano;
        private $proprietario;
        private $chassi;
        private $flex;

        public function getCor(){
            return $this->cor;
        }
        public function setCor($cor){
            $this->cor = $cor; 
        }
        public function isFlex(){
            return $this->flex;
        }
        public function __construct(){
            echo "Inicializando a classe CARRO <br><br>";
        }
    }
    $fusca  = new Carro();
    var_dump($fusca);
    echo "<br><br>";
    $fusca->setCor("Preta");
   // $fusca->setProprietario("Marlus Dias Silva");

 
    var_dump($fusca);
    echo "<br><br>";
    $uno = new Carro();
?>