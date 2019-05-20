<?php
    require_once "model/Telefone.class.php";
    require_once "model/UsuarioTelefone.class.php";
    require_once "db/conexao.php";
    class DaoTelefone{
        public function create($tele, $idUsuario){
            $con = new Conexao();
            $con = $con->getConnection();
            $sql = "INSERT INTO telefone(ddd, telefone) VALUES(?,?)";
            $stmt = $con->prepare($sql);
            $stmt->bind_param("ii", $ddd, $telefone);
            $ddd = $tele->getDdd();
            $telefone = $tele->getTelefone();
            if($stmt->execute()){
                $idTelefone = $con->insert_id;
                $usuTele = new UsuarioTelefone();
                $usuTele->setIdTelefone($idTelefone);
                $usuTele->setIdUsuario($idUsuario);
                $dao = new DaoUsuarioTelefone();
                $dao->create($usuTele);
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