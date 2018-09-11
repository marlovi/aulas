
  <?php
      require_once "../beans/aluno.class.php";
       session_start();

        $aluno = new Aluno();

        $aluno->setNome("João Nascimento");


        $_SESSION["aluno"] = serialize($aluno);

        var_dump(  $_SESSION["aluno"]);



  ?>