<?php 
    require_once "cliente.class.php";
    require_once "conexao.class.php";
    class DaoCliente{
        public static function save($cliente){

           
            $sql  = "INSERT INTO `cliente`(`nome`, `cpf`) VALUES (?,?)";

            $con = Conexao::getConnection();

            $stmt = $con->prepare($sql);
            $stmt->bind_param("ss",$nome,$cpf);

            $nome = $cliente->getNome();
            $cpf = $cliente->getCpf();

            $stmt->execute();
            $salvado = $stmt->insert_id;
            
            $stmt->close();
            $con->close();

            return $salvado;
        }
        public static function delete($cliente){
            
        }
    }

   

?>