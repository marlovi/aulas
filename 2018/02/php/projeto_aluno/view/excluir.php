<?php 
    require_once "../beans/aluno.class.php";
    require_once "../persistencia/daoaluno.class.php";
    if(isset($_GET['codigo'])){ 
        $dao = new DaoAluno();
        $aluno = $dao->getAluno($_GET['codigo']);
       
       if( $dao->delete($aluno) === TRUE){
           echo "<script>alert('deletado com sucesso')</script>";
       }

       
    }
?>