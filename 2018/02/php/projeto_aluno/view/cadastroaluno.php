
  <?php
    require_once "../beans/aluno.class.php";
    require_once "../persistencia/daoaluno.class.php";
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
        <div class="row ">
            <form class="col s12" method="POST">
              <div class="row">
                <div class="col s12 input-field">
                  <input type="text" name="nome" id="nome">
                  <label for="nome">Nome</label>
                </div>
               
              </div>
              <div class="row">
                <div class="col s6 input-field">
                  <input type="text" name="telefone" id="telefone">
                  <label for="telefone">Telefone</label>
                </div>
                <div class="col s6 input-field">
                  <input type="email" name="email" id="email">
                  <label for="email">Email</label>
                </div>                
              </div>
              <div class="row">
                <div class="col s12 center">
                  <button name="submit" class="btn waves-effect waves-light " type="submit">Enviar<i class="material-icons right">send<i/></button>
                </div>
              </div>

              <?php

                if(isset($_POST['submit'])){
                    $aluno  = new Aluno(); //instanciando um aluno na memória do computador
                    $aluno->setNome($_POST['nome']);
                    $aluno->setTelefone($_POST['telefone']);
                    $aluno->setEmail($_POST['email']);



                    $dao = new DaoAluno();

                    if($dao->save($aluno)){
                      echo "<script> alert('aluno cadastrado com sucesso') </script>";
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
        