<?php
    require_once ("conexao.class.php");
    require_once ("escola.class.php");
    class DaoEscola{
        public function save($escola){
            var_dump($escola);
            $conexao = new Conexao();
            $sql = "INSERT INTO `escola`(`nome`, `telefone`, 
                                `email`, `endereco`,`codigo_diretor_fk`)
                                 VALUES (?,?,?,?,?)";
            $con = $conexao->connection();
            $stmt = $con->prepare($sql); //anitaaa[]
            $stmt->bind_param('ssssi',$a,$b,$c,$d,$e);
            $a = $escola->getNome();
            $b = $escola->getTelefone();
            $c = $escola->getEmail();
            $d = $escola->getEndereco();
            $e  = intval($escola->getDiretor());
            $stmt->execute();

            

            $stmt->close();
            $con->close();

            return true;
        }
        
    }
/*
    $escola = new Escola();
    $escola->setNome("IFGOIANO");
    $escola->setTelefone("36202500");
    $escola->setEmail("ifgoiano@ifgoiano.edu.br");
    $escola->setEndereco("Rodovia Sul Goiana, Km 01, Zona Rural | Rio Verde - Go ");
    $escola->setDiretor(1);
    $dao = new DaoEscola();
    $dao->save($escola);*/




?>