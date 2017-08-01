 <?php
    require_once "pessoa.class.php";
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
        <div class="row" >
            <div class="col s12 ">
                <form method="POST">
                    <div class="row">
                        <div class="col s6 input-field">
                            <input type="text" id="nome" name="nome" />
                            <label for="nome">Nome</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s12 center">
                            <button class="btn waves-effect " type="submit" name="submit">Exibir</button>
                        </div>
                    </div>
                    <?php
                        if(isset($_POST['submit'])){
                            $pessoa = new Pessoa();
                            $pessoa->setNome($_POST['nome']);


                            var_dump($pessoa);
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