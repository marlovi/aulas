<?php
    class Telefone{
        private $id_telefone;
        private $ddd;
        private $telefone;

        public function setId($id_telefone){
            $this->id_telefone = $id_telefone;
        }
        public function getId(){
            return $this->idTelefone;
        }
        public function setDdd($ddd){
            $this->ddd = $ddd;
        }
        public function getDdd(){
            return $this->ddd;
        }
        public function setTelefone($telefone){
            $this->telefone = $telefone;
        }
        public function getTelefone(){
            return $this->telefone;
        }
    }
?>