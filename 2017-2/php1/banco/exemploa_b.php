<?php 
    require_once "conexao.php";
    $aula = array();
    array_push($aula,"PHP1");
     array_push($aula,"PHP2");
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
        <meta charset="UTF-8">
    </head>

    <body>
    <div class="container card-panel">
        <div class="col s12">
            <form method="POST">
                <div class="row">
                    <div class="input-field col s3 ">
                      <?php 
                            $con  = conectar();
                            $sql = "SELECT `idtabela_b`, `descricao` FROM `tabela_b`";

                            $result = mysqli_query($con,$sql);
                             echo "<select name='opcao'>";
                            if(mysqli_num_rows($result) > 0 ){

                                while($row  = mysqli_fetch_assoc($result)){
                              
                      
                          echo "<option value=".$row['idtabela_b'].">".$row['descricao']."</option>"  ;
                            
                       
                                }
                            }
                             echo "</select>";

                             mysqli_close($con);
                        ?>

                        
                        
                        <label for="">Dias da Semana</label>
                    </div>
                    <div class="col s3">    
                        <button class=" btn waves-effect " name="submit" type="submit">Teste</button>
                    </div>
                </div>
                <?php 
                    if(isset($_POST['submit'])){
                        echo $_POST['opcao'];
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
        