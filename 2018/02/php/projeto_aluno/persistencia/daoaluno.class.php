<?php 
    require_once "../beans/aluno.class.php";
    require_once "conexao.class.php";

    class DaoAluno{
    public function save($aluno){
        $resultado = true;
        $conexao  = new Conexao();
        $conectado = $conexao->getConnection();
        $sql = "INSERT INTO `aluno`(`nome`, `telefone`, `email`) VALUES (?,?,?)";
        $stmt = $conectado->prepare($sql);
        $stmt->bind_param("sss",$nome,$telefone,$email);

        $nome = $aluno->getNome();
        $telefone = $aluno->getTelefone();
        $email = $aluno->getEmail();

        if(!$stmt->execute()){
            $resultado = false;
            die("Dao Aluno save {$stmt->errno}   {$stmt->error}");
        }

       $stmt->close();
       $conectado->close(); 

       return $resultado;


    }
    }


    /*$x = new DaoAluno();
    $ana = new Aluno();

    $ana->setNome("Ana Beatriz");
    $ana->setTelefone("(64)99999-8823");
    $ana->setEmail("anabeatriz@ifgoiano.edu.br");

    if($x->save($ana)){
        echo "Salvo com sucesso";
    }*/
?> 