<?php
  require_once "daocliente.class.php";
  require_once "cliente.class.php";
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
    <meta charset="utf-8"/>
  </head>

  <body>
      <div class="row">
          <form class="col s12" method="POST">
              <div class="row">
                <div class="input-field col s6">
                    <input  id="first_name" type="text" name="nome" class="validate">
                    <label for="first_name">Nome</label>
                </div>
                <div class="input-field col s6">
                     <input  id="cpf" name="cpf" type="text" class="validate">
                     <label for="cpf">Cpf</label>
                </div>
              </div>
              <div class="row">
                  <div class="col s12 center">
                      <button class="btn  waves-effect  " type="submit" name="submit">Salvar</button>
                  </div>
              </div>
              <?php
                    if(isset($_POST['submit'])){
                        $cliente = new Cliente();
                        $cliente->setNome($_POST['nome']);
                        $cliente->setCpf($_POST['cpf']);
                        $id = DaoCliente::save($cliente);

                        echo "<script> alert ( 'Cadastrado com sucesso ".$id."' ) </script>";
                    }
              ?>
          </form>
      </div>
    <!--Import jQuery before materialize.js-->
    <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
    <script type="text/javascript" src="js/materialize.min.js"></script>
  </body>
</html>