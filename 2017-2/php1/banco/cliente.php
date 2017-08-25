<?php
require_once "conexao.php";

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
    <title>Aula de Inserção no banco de dados</title>
  </head>

  <body>
      <div class="container">
          <h4 class="center">Cadastro no banco de dados</h4>
          <div class="row">
              <form  method="POST" class="col s12">
                  <div class="row">
                      <div class="col s3 input-field">
                          <input type="text" name="nome" id="nome">
                          <label for="nome">Nome</label>
                      </div>
                      <div class="col s3 input-field">
                          <input type="text" name="telefone" id="telefone">
                          <label for="telefone">Telefone</label>
                      </div>
                      <div class="col s3 input-field">
                          <input type="text" name="email" id="email">
                          <label for="email">E-mail</label>
                      </div>
                  </div>
                  <div class="row">
                      <div class="col s12 center">
                          <button class="btn waves-effect waves-light" type="submit" name="submit" ><i class="material-icons right">send</i>Enviar</button>
                      </div>
                  </div>
              </form>
          </div>

      </div>
    <!--Import jQuery before materialize.js-->
    <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
    <script type="text/javascript" src="js/materialize.min.js"></script>
  </body>
</html>