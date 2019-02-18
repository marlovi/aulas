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
    }
?>