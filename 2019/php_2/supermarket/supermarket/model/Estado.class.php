<?php
    class Estado{
        private $id_estado;
        private $nome;
        private $uf;

        public function setIdEstado($id_estado){
            $this->id_estado = $id_estado;
        }
        public function getIdEstado(){
            return $this->id_estado;
        }

        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;
        }

        public function setUf($uf){
            $this->uf = $uf;
        }
        public function getUf(){
            return $this->uf;
        }
    }
?>