<?php
 class UsuarioEndereco{
    private $id_usuario_endereco;
    private $usuario_id_usuario;
    private $endereco_id_endereco;


    
    public function setIdUsuarioEndereco($id_usuario_endereco){
        $this->id_usuario_endereco = $id_usuario_endereco;
    }
    public function getIdUsuarioEndereco(){
        return $this->id_usuario_endereco;
    }

    public function setUsuarioIdUsuario($usuario_id_usuario){
        $this->usuario_id_usuario = $usuario_id_usuario;
    }
    public function getIdUsuarioIdUsuario(){
        return $this->usuario_id_usuario;
    }
    
    public function setEnderecoIdEndereco($endereco_id_endereco){
        $this->endereco_id_endereco = $endereco_id_endereco;
    }
    public function getEnderecoIdEndereco(){
        return $this->endereco_id_endereco;
    }
    
 }
?>