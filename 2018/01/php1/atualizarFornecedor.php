<?php

    require_once('banco/bancoFornecedor.php');
    require_once('banco/conexao.php');

    $id ='';
    $nome = '';
    $cnpj = '';
    $razao_social = '';

    if(isset($_GET['codigo'])){
      $con = getConnection();
      $sql = "SELECT * FROM fornecedor AS f WHERE f.id_fornecedor = ".$_GET['codigo'];
      $result  = mysqli_query($con,$sql);
      if(mysqli_num_rows($result) > 0 ){
          while($row  = mysqli_fetch_assoc($result)){
            $id = $row['id_fornecedor'];
            $nome = $row['nome'];
            $cnpj = $row['cnpj'];
            $razao_social = $row['razao_social']; 
          }
      }
      mysqli_close($con);
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
    </head>

    <body> 
   
   
        <div class="row">
            <div class="col s12">
                <form method="post">
                    <div class="row">
                        <div class="col s6 input-field">
                        <input type="text" name="nome" id="nome" value="<?php  echo $nome;   ?>">
                        <label for="nome">Nome</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s6 input-field">
                            <input type="text" name="cnpj" id="cnpj" value = "<?php echo $cnpj; ?>" >
                            <label for="cnpj">Cnpj</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col input-field s6">
                            <input type="text" name="razao_social" id="razao_social" value="<?php echo $razao_social;  ?>">
                            <label for="razao_social">Razão Social</label>
                        </div>
                    </div>
                    <div class="row">
                      <div class="col s6 center">
                      <button class="btn waves-effect" name="submit" type="submit"><i class="material-icons right">send</i>Enviar</button>
                      </div>
                    </div>

                
                    <?php 
                        if(isset($_POST['submit'])){
                            $con = getConnection();
                            $sql = " UPDATE fornecedor SET nome ='".$_POST['nome']."',cnpj = '".$_POST['cnpj']."' ,razao_social='".$_POST['razao_social']."' WHERE id_fornecedor = ".$id;
                            if(mysqli_query($con,$sql)){
                                echo "<script>  alert('cadastrado com sucesso') </script>";
                                echo "<script>  window.location.href = 'consultarFornecedor.php' </script>";
                            }else{
                                echo "<script>  alert('ERRO ao Cadastrar') </script>";
                            }
                           mysqli_close($con);
                        }  
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

