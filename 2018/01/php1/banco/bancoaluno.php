<?php 
    require_once("conexao.php");

    function save($nome,$email,$telefone,$matricula,$curso,$periodo,$instituicao){
        $validacao = true;
        $sql = "INSERT INTO `Aluno`(`nome`,`email`,`telefone`,
                            `matricula`,`curso`, `periodo`,
                            `instituicao`) VALUES( '".$nome."','".$email."', 
                                                   '".$telefone."', 
                                                   '".$matricula."', 
                                                   '".$curso."', 
                                                   ".$periodo.", 
                                                   '".$instituicao."' )" ;
        $con =  getConnection(); // retorna a conexão (estrada até o banco de dados)

        if(! mysqli_query($con,$sql)){ // mysqli_query é responsável por salvar no banco
            $validacao = false;
            echo "ERRO ".$sql."<br> ".mysqli_error($con);
        }
        mysqli_close($con);
        return $validacao;
    }

//  echo  save("marlus dias",
  //  "marlus.guitar@gmail.com",
    //"981337874","2018000212","Eng Elétrica",3,"UFU");

?>