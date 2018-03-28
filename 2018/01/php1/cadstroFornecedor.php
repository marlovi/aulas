<?php 
    require_once('banco/bancoFornecedor.php');
    require_once('banco/conexao.php');
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
    </head>

    <body> 
   
   
        <div class="row">
            <div class="col s12">
                <form method="post">
                    <div class="row">
                        <div class="col s6 input-field">
                        <input type="text" name="nome" id="nome">
                        <label for="nome">Nome</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s6 input-field">
                            <input type="text" name="cnpj" id="cnpj">
                            <label for="cnpj">Cnpj</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col input-field s6">
                            <input type="text" name="razao_social" id="razao_social">
                            <label for="razao_social">Razão Social</label>
                        </div>
                    </div>
                    <div class="row">
                      <div class="col s6 center">
                      <button class="btn waves-effect" name="submit" type="submit"><i class="material-icons right">send</i>Enviar</button>
                      </div>
                    </div>

                         <div class="input-field col s12">
    
      
      <?php
      $con = getConnection();
      $sql = "SELECT `id_fornecedor`, `nome`,`razao_social` FROM `fornecedor`";
      
      echo "<select name='fornecedores'>";
      echo "<option value='' disabled selected>Selecione.....</option>";
      $result = mysqli_query($con,$sql);
      if(mysqli_num_rows($result) > 0 ){
          while($row = mysqli_fetch_assoc($result)){
                echo "<option value=".$row['id_fornecedor'].">".$row['nome']." ( ".$row['razao_social']." ) </option>";
          }
        }
     
      echo "</select>";
      echo "<label>Materialize Select</label>";
      ?>
   
  </div>





                    <?php 
                       /* if(isset($_POST['submit'])){
                            if(save($_POST['nome'],
                            $_POST['cnpj'],
                            $_POST['razao_social'])){
                                echo "<script> alert('Fornecedor cadastrado com sucesso') </script>";
                            }else{
                                echo "erro ao cadastrar";
                            }
                        }*/
                        if(isset($_POST['submit'])) echo $_POST['fornecedores'];
                    ?>
                </form>
            </div>
        </div>
      <!--JavaScript at end of body for optimized loading-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.3.1.min.js">
          
      </script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
      <script type="text/javascript">
             $(document).ready(function() {
                     $('select').material_select();
            });

      </script> 
      
    </body>
  </html>
        