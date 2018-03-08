<?php 
    session_start();
    if(! isset($_SESSION['valor'])){
        $_SESSION['valor'] = array();
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
    </head>

    <body>

    <main>
        <div class="row">
            <div class="col s12">
                <form  method="post">
                    <div class="row container">
                        <div class="col s6 input-field">
                            <input type="text" name="valor" id="valor">
                            <label for="valor">Valor</label>
                        </div>
                        
                    </div>
                    <div class="row">
                        <div class="col s6 center">
                       
                            <button class="waves-effect waves-light btn" type="submit" name="submit"> 
                            <i class="material-icons right">add</i>Add</button>
                        
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s6 center">
                       
                            <button class="waves-effect waves-light btn" type="submit" name="visualizar"> 
                            <i class="material-icons right">android</i>Visualizar</button>
                        
                        </div>
                    </div>

                    <?php
                    if(isset($_POST['submit'])){
                        $vetor = $_SESSION['valor'];
                        array_push($vetor,$_POST['valor']);
                        $_SESSION['valor'] = $vetor;
                    }
                    else if(isset($_POST['visualizar'])){
                        $vetor = $_SESSION['valor'];
                        var_dump($vetor);
                        /*    $v = array();
                            $v[0] = 10;
                            $v[1] = 20;
                            $v[2] = 30;

                            $x = [5];
                            $x[0] = "Arroz";
                            $x[1] = "feijão";

                            array_push($x,'R$ 2.560');
                            for( $i = 0 ; $i< 4; $i++){
                                array_push($x,$i+10);
                            }
                            for( $i = 0 ; $i< count($x); $i++){
                              //  array_push($x,$i+10);
                              echo $x[$i].'<br>';
                            }
                            array_pop($x);
                            array_pop($x);
                            array_pop($x);
                            foreach ($x as $i => $value) {
                                # code...
                                echo $value." index = {$i} <br>";
                            }
                           // var_dump($v);
                            //var_dump($x);*/
                        }

                        ?>
                </form>

            </div>
        </div>
    </main>
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>
        