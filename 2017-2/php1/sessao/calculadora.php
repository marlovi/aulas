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
    <div class="row container">
        <form class="col s12 card-panel"  method="POST">
            <div class="row">
                <div class="col s5 input-field">
                    <input type="text" name="visor" id="visor" value = "<?php echo $_SESSION['atual']; ?>">
                    <label for="visor"></label>    
                </div>
            </div>
            <div class="row">
                <div class="col s1 input-field">
                    <button type="submit" name="sete">7</button>
                </div>
                <div class="col s1 input-field">
                    <button type="submit" name="oito">8</button>
                </div>
                <div class="col s1 input-field">
                    <button type="submit" name="nove">9</button>
                </div>
                <div class="col s1 input-field">
                    <button type="submit" name="div">/</button>
                </div>
            </div>
            <?php 
                    if(isset($_POST['sete'])){
                        $_SESSION['atual'] = 7;
                    }
                    if(isset($_POST['oito'])){
                        $_SESSION['atual'] = 8;
                    }


                
                    if(isset($_POST['div'])){
                        $_SESSION['operacao'] = '/';
                        $_SESSION['anterior'] = $_SESSION['atual'];
                    }
                    

                   if(isset($_SESSION['operacao'])){
                    $op = $_SESSION['operacao']; 
                    
                    
                    
                                        if($op == '/'){
                                            echo $_SESSION['anterior'] / $_SESSION['atual'];
                                        }
                    
                   }

            ?>
        </form>
    </div>
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>
        