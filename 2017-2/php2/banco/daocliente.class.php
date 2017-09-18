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
        public static function delete($codigo){
            $resultado = FALSE;
            $sql ="DELETE FROM `cliente` WHERE `codigo`= ".$codigo;

            $con = Conexao::getConnection();

            if($con->query($sql) == TRUE){
                $resultado = TRUE;
            }
            $con->close();
            return $resultado;
        }

        public static function pesquisarTodos(){
            $resultado = NULL;
            $sql = "SELECT * FROM `cliente` ORDER BY `nome` ASC";

            $con = Conexao::getConnection();

            $result = $con->query($sql);

            if($result->num_rows > 0 ){// verifica se houve pelo menos 1 resultado na consulta
                $resultado = array();
                while($row  = $result->fetch_assoc()){
                     $cliente = new Cliente();
                     $cliente->setCodigo($row['codigo']);
                     $cliente->setCpf($row['cpf']);
                     $cliente->setNome($row['nome']);

                     array_push($resultado,$cliente);//Adicionando o cliente na última possição do vetor
                }
            }
            $con->close();

            return $resultado;
        }



        public static function getCliente($id){
            $resultado = NULL;
            $sql = "SELECT * FROM `cliente` WHERE `codigo` = ".$id." ORDER BY `nome` ASC";
    
            $con = Conexao::getConnection();
    
            $result = $con->query($sql);
    
            if($result->num_rows > 0 ){// verifica se houve pelo menos 1 resultado na consulta
                $resultado = array();
                while($row  = $result->fetch_assoc()){
                     $cliente = new Cliente();
                     $cliente->setCodigo($row['codigo']);
                     $cliente->setCpf($row['cpf']);
                     $cliente->setNome($row['nome']);
    
                     array_push($resultado,$cliente);//Adicionando o cliente na última possição do vetor
                }
            }
            $con->close();
    
            return $resultado;
        }

        public static function update($cliente){
            $resultado = FALSE;
            $con  = Conexao::getConnection();

            $sql = "UPDATE `cliente` SET `nome`= '".$cliente->getNome()."',`cpf`= '".$cliente->getCpf()."' WHERE `codigo` = ".$cliente->getCodigo();

            if($con->query($sql)==TRUE){
                $resultado = TRUE;
            }else{
                echo "ERRO ".$con->error;
            }

            $con->close();

            return $resultado;
        }   

    }

    

   
  

?>