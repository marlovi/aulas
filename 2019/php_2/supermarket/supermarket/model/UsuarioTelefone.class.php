<?php
    class UsuarioTelefone{
        private $id_usuario_telefone;
        private $id_telefone;
        private $id_usuario;

        public function setIdUsuarioTelefone($id_telefone){
            $this->id_telefone = $id_telefone;
        }
        public function getIdUsuarioTelefone(){
            return $this->id_telefone;
        }

        public function setIdTelefone($id_telefone){
            $this->id_telefone = $id_telefone;
        }
        public function getIdTelefone(){
            return $this->id_telefone;
        }

        public function setIdUsuario($id_usuario){
            $this->id_usuario = $id_usuario;
        }
        public function getIdUsuario(){
            return $this->id_usuario;
        }
    }
?>