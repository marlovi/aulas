<?php
    require_once ("conexao.class.php");
    require_once ("escola.class.php");
    class DaoEscola{
        public function save($escola){
            $conexao = new Conexao();
            $sql = "INSERT INTO `Escola`(`nome`, `telefone`, `email`, `endereco`) VALUES (?,?,?,?)";
            $con = $conexao->connection();
            $stmt = $con->prepare($sql); //anitaaa[]
            $stmt->bind_param('ssss',$a,$b,$c,$d);
            $a = $escola->getNome();
            $b = $escola->getTelefone();
            $c = $escola->getEmail();
            $d = $escola->getEndereco();

            $stmt->execute();

            

            $stmt->close();
            $con->close();

            return true;
        }
        
    }

 /*   $escola = new Escola();
    $escola->setNome("IFGOIANO");
    $escola->setTelefone("36202500");
    $escola->setEmail("ifgoiano@ifgoiano.edu.br");
    $escola->setEndereco("Rodovia Sul Goiana, Km 01, Zona Rural | Rio Verde - Go ");

    $dao = new DaoEscola();
    $dao->save($escola);
*/



?>