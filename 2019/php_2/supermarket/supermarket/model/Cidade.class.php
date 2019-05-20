<?php
    class Cidade{
        private $id_cidade;
        private $nome;
        private $estado_id_estado;

        public function setIdCidade($id_cidade){
            $this->id_cidade = $id_cidade;
        }
        public function getIdCidade(){
            return $this->id_cidade;
        }

        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;
        }

        public function setEstadoIdEstado($estado_id_estado){
            $this->estado_id_estado = $estado_id_estado;
        }
        public function getEstadoIdEstado(){
            return $this->estado_id_estado;
        }
       
    }
?>