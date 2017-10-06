<?php
    require_once 'conexao.php';
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
    </head>

    <body>
        <div class="row container">
            <div class="col s12 ">
                <form method="POST">
                    <div class="row">
                        <div class="col s6 input-field">
                            <input type="text" name="nome" id="nome">
                            <label for="nome">Nome</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s6 input-field">
                            <input type="text" name="cpf" id="cpf">
                            <label for="cpf">Cpf</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s6 input-field">
                            <input type="text" name="rg" id="rg">
                            <label for="rg">RG</label>
                        </div>
                    </div>
                    <div class="row">                        
                        <div class="input-field col s6">
                            <select name="estado">

                                <?php
                                    $con = conectar();
                                    $sql = "SELECT `idestado`, `nome`,`sigla` FROM `estado`";
                                    $result = mysqli_query($con,$sql);
                                    if(mysqli_num_rows($result) > 0 ){
                                        while($row = mysqli_fetch_assoc($result)){
                                            echo "<option value=".$row['idestado'].">".$row['nome']."  -  ".$row['sigla']." </option> ";
                                        }
                                    }
                                    mysqli_close($con);
                                ?>

                              
                            </select>
                                    <label>Estado</label>
                        </div>
                        <div class="col s6">
                        <button class="btn waves-effect" type="submit" name="submit">  Teste</button>
        
                        </div>
                    </div>

                    <?php 
                        if(isset($_POST['submit'])){
                            $estado = $_POST['estado'];
                            $nome = $_POST['nome'];
                            $cpf = $_POST['cpf'];
                            $rg = $_POST['rg'];

                            $con = conectar();

                            $sql = "INSERT INTO `pessoa`(`estado_idestado`,`nome`,`cpf`, `rg`) VALUES(".$estado.",'".$nome."','".$cpf."','".$rg."')";

                            if(mysqli_query($con,$sql)){
                                echo "<script> alert('Cadastrado com sucesso') </script>";
                            }else{
                                echo "ERRO ".mysqli_error($con);
                            }
                            mysqli_close($con);
                        }
                    ?>
                </form>
            </div>
        </div>

      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>

      <script type="text/javascript">
             $(document).ready(function() {
                    $('select').material_select();
                   

             });
      </script>
    </body>
  </html>


