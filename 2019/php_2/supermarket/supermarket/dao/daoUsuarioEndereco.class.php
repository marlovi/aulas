<?php
    require_once "model/UsuarioEndereco.class.php";
    require_once "db/conexao.php";
    class DaoUsuarioEndereco{
        public function create($usuEnd){
            $usuario_id_usuario = $con->insert_id;
            $sql = "INSERT INTO usuario_endereco(usuario_id_usuario, endereco_id_endereco) VALUES(?,?)";
            $stmt = $con->prepare($sql);
            $stmt->bind_param("ii", $usuario_id_usuario, $endereco_id_endereco);
            if($stmt->execute()){
                $id_usuario_endereco = $con->insert_id;
            }else{
                echo " Error :" . $con->error;
            }
        }
        public function read(){

        }
        public function update(){

        }
        public function delete(){
            
        }
    }
?>