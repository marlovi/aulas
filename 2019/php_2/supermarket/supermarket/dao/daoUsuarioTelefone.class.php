<?php
    require_once "model/UsuarioTelefone.class.php";
    require_once "db/conexao.php";
    class DaoUsuarioTelefone{
        public function create($usuTele){
            $con = new Conexao;
            $con = $con->getConnection();
            $sql = "INSERT INTO usuario_telefone(id_telefone, id_usuario) VALUES(?, ?)";
            $stmt = $con->prepare($sql);
            $stmt->bind_param("ii", $id_telefone, $id_usuario);
            $id_telefone = $usuTele->getIdTelefone();
            $id_usuario = $usuTele->getIdUsuario();
            if($stmt->execute()){
                $stmt->close();
                $con->close();
                echo "<script>alert('OK')</script>";
                echo "<script> window.location.href='index.php'</script> ";
            }else{
                echo "ERROR :" . $con->error;
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