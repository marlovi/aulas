<?php
    session_start();

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
    <div class="row"> 
        <div class="col s12">
            <form  method="POST">
                <div class="row">
                    <div class="col s2 input-field">
                        <input type="text" name="v1" id="v1">
                        <label for="v1"> primeiro valor</label>
                    </div>
                    <div class="col s2 input-field">
                    <input type="text" name="v2" id="v2">
                    <label for="v2"> Segundo valor</label>
                    </div>
                   
                    <div class="col s3">
                        <button name="submit" class="btn waves-effect waves-light" type="submit"> 
                        <i class="material-icons right">send</i>Enviar </button>
                    </div>
                    <div class="col s3">
                        <button name="delete" class="btn waves-effect waves-light" type="submit"> 
                        <i class="material-icons right">send</i>Enviar </button>
                    </div>
                 </div>
                 <?php
                        if(isset($_POST['submit'])){
                            $_SESSION['valor1'] = $_POST['v1'];
                            $_SESSION['valor2'] = $_POST['v2'];
                        }elseif(isset($_POST['delete'])){
                            session_unset();
                           session_destroy();
                        }

                        print_r($_SESSION);
                 ?>
            </form>
        </div>
    </div>
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>
        