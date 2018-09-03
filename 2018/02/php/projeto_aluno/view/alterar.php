<?php 
    require_once "../beans/aluno.class.php";
    require_once "../persistencia/daoaluno.class.php";
    if(isset($_GET['codigo'])){ 
        $dao = new DaoAluno();
        $aluno = $dao->getAluno($_GET['codigo']);
        var_dump($aluno);
        $aluno->setNome("Fernanda Lima");
        $dao->update($aluno);

        var_dump($dao->getAluno($_GET['codigo']));

    }
?>