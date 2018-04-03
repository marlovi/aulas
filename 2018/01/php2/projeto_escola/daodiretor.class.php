<?php
require_once('diretor.class.php');
require_once('conexao.class.php');
    class DaoDiretor{   
        public function getAll(){
            $diretores = NULL;

            $conexao = new Conexao();
            $con = $conexao->connection();
            $sql = "SELECT `codigo`, `nome`,`email` FROM `diretor` ORDER BY `nome` ASC";
            $result = $con->query($sql);
            if($result->num_rows > 0){
                $diretores = array();

                while($row = $result->fetch_assoc()){
                    $diretor = new Diretor();
                    $diretor->setCodigo($row['codigo']);
                    $diretor->setNome($row['nome']);
                    $diretor->setEmail($row['email']);

                    array_push($diretores,$diretor);
                }
            }
            $con->close();
            return $diretores;
        }
    
    
    
    }


   // $d = new DaoDiretor();
    //var_dump($d->getAll());



?>