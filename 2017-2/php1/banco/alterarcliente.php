<?php 
    require_once 'conexao.php';
    $resultado = NULL;
    if(isset($_GET['codigo'])){
        $con = conectar();
        $sql = "SELECT `codigo`,`nome`,`telefone`,`email` FROM `cliente` WHERE `codigo` = ".$_GET['codigo'];
        $result = mysqli_query($con,$sql);

        if(mysqli_num_rows($result) > 0 ){
            while($row = mysqli_fetch_assoc($result)){
                $resultado = $row;
            }
        }
        mysqli_close($con);
    }else{
        echo "Página não econtrada";
    }


?>


<!DOCTYPE html>
<html>
  <head>
    <!--Import Google Icon Font-->
    <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
    <!--Import materialize.css-->
    <link type="text/css" rel="stylesheet" href="css/materialize.min.css"  media="screen,projection"/>

    <!--Let browser know website is optimized for mobile-->
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    <meta http-equiv="Content-Type" content="text/html;charset=UTF-8">
    <title>Aula de Inserção no banco de dados</title>
  </head>

  <body>
      <div class="container">
          <h4 class="center">Cadastro no banco de dados</h4>
          <div class="row">
              <form  method="POST" class="col s12">
                  <div class="row">
                      <div class="col s3 input-field">
                          <input type="text" name="nome" id="nome" value="<?php echo $resultado['nome']; ?>">
                          <label for="nome">Nome</label>
                      </div>
                      <div class="col s3 input-field">
                          <input type="text" name="telefone" id="telefone" value="<?php echo $resultado['telefone']; ?> ">
                          <label for="telefone">Telefone</label>
                      </div>
                      <div class="col s3 input-field">
                          <input type="text" name="email" id="email" value=" <?php echo $resultado['email'];   ?>">
                          <label for="email">E-mail</label>
                      </div>
                  </div>
                  <div class="row">
                      <div class="col s12 center">
                          <button class="btn waves-effect waves-light" type="submit" name="submit" ><i class="material-icons right">update</i>Alterar</button>
                      </div>
                <?php 
                    if(isset($_POST['submit'])){

                        $nome = $_POST['nome'];
                        $telefone = $_POST['telefone'];
                        $email = $_POST['email'];
                        $con = conectar();
                        
                                            $sql = "UPDATE cliente SET nome= '".$nome."', telefone = '".$telefone."',email = '".$email."' WHERE codigo = ".$resultado['codigo'];
                        
                            if(mysqli_query($con,$sql)){
                                echo "<script> alert('Alterado com sucesso') </script>";
                                echo "<script> window.location.href='consultacliente.php' </script>";    


                            }else{
                                echo "ERRO UPDATE".mysqli_error($con);
                            }
                    }


                ?>
              </form>
          </div>

      </div>
    <!--Import jQuery before materialize.js-->
    <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
    <script type="text/javascript" src="js/materialize.min.js"></script>
  </body>
</html>