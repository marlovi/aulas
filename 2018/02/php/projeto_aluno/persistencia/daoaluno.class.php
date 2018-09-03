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



    public function getAluno($codigo){
        $resultado = NULL;
        $conexao  = new Conexao();
        $conectado = $conexao->getConnection();

        $sql = "SELECT `codigo`, `nome`, `telefone`, `email` FROM `aluno` WHERE `codigo` = {$codigo}";

        $result  = $conectado->query($sql);

        if($result->num_rows > 0 ){
          
            while($row  = $result->fetch_assoc()){
                $aluno = new Aluno();
                $aluno->setCodigo($row['codigo']);
                $aluno->setNome($row['nome']);
                $aluno->setTelefone($row['telefone']);
                $aluno->setEmail($row['email']);
                $resultado = $aluno;
            }
        }

        $conectado->close(); 

        return $resultado;
    }
    public function getAll(){
        $resultado = NULL;
        $conexao  = new Conexao();
        $conectado = $conexao->getConnection();

        $sql = "SELECT `codigo`, `nome`, `telefone`, `email` FROM `aluno`   ORDER BY nome ASC ";

        $result  = $conectado->query($sql);

        if($result->num_rows > 0 ){
            $resultado  = array();
            while($row  = $result->fetch_assoc()){
                $aluno = new Aluno();
                $aluno->setCodigo($row['codigo']);
                $aluno->setNome($row['nome']);
                $aluno->setTelefone($row['telefone']);
                $aluno->setEmail($row['email']);
                array_push($resultado,$aluno);//array_push add na última posição do vetor
            }
        }

        $conectado->close(); 

        return $resultado;



    }
    public function update($aluno){
        $resultado = false; 
        $conexao  = new Conexao();
        $conectado = $conexao->getConnection();
        $sql = "UPDATE `aluno` 
        SET `nome`= '{$aluno->getNome()}',
        `telefone`= '{$aluno->getTelefone()}',`email`='{$aluno->getEmail()}' 
        WHERE 
    `codigo` = {$aluno->getCodigo()}";

        if($conectado->query($sql) === TRUE){
            $resultado = true;
        }else{
            $resultado = false;
            die( $conectado->error);
        }

        return $resultado;

    }

    public function delete($aluno){
        $resultado = false; 
        $conexao  = new Conexao();
        $conectado = $conexao->getConnection();
        $sql = "DELETE FROM `aluno`
        WHERE 
    `codigo` = {$aluno->getCodigo()}";

        if($conectado->query($sql) === TRUE){
            $resultado = true;
        }else{
            $resultado = false;
            die( $conectado->error);
        }

        return $resultado;

    }


    }


    /*$dao = new DaoAluno();
    var_dump($dao->getAll());*/
    /*$x = new DaoAluno();
    $ana = new Aluno();

    $ana->setNome("Ana Beatriz");
    $ana->setTelefone("(64)99999-8823");
    $ana->setEmail("anabeatriz@ifgoiano.edu.br");

    if($x->save($ana)){
        echo "Salvo com sucesso";
    }*/
?> 