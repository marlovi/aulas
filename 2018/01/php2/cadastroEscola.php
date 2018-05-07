<?php 
    require_once("projeto_escola/escola.class.php");
    require_once("projeto_escola/daoescola.class.php");
    require_once("projeto_escola/daodiretor.class.php");
?>

<!DOCTYPE html>
<html lang="en">
  <head>
      <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
      <title>Title of the document</title>
    <!-- Material Icon CDN -->
      <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
    <!-- Path of the materialize.min.css file -->
      <link rel="stylesheet" href="css/materialize.min.css" media="screen,projection">
    <!-- Custom css file path -->
      <link rel="stylesheet" href="css/style.css">
    <!-- Used as an example only to position the footer at the end of the page.
      You can delete these styles or move it to your custom css file -->
    <style>
      body {
        display: flex;
        min-height: 100vh;
        flex-direction: column;
      }  
      main {
        flex: 1 0 auto;
      }
    </style>
  </head>
  <body>
    <header>
      <nav class="cyan">
        <div class="nav-wrapper">
          <div class="container">
            <a href="#" class="brand-logo">LOGO</a>
            <a href="#" data-activates="mobile-menu" class="button-collapse"><i class="material-icons">menu</i></a>
            <ul class="right hide-on-med-and-down">
              <li><a href="#">item1</a></li>
              <li><a href="#">item2</a></li>
              <li><a href="#">item3</a></li>
              <li><a href="#">item4</a></li>
            </ul>
            <ul class="side-nav" id="mobile-menu">
              <li>
                <div class="userView">
                  <div class="background">
                    <img src="http://lorempixel.com/output/abstract-q-c-640-480-10.jpg" alt="Background Sidenav">
                  </div>
                  <a href="#!user"><img class="circle" src="http://lorempixel.com/output/people-q-c-640-480-9.jpg" alt="User Image Sidenav"></a>
                  <a href="#!name"><span class="white-text name">John Doe</span></a>
                  <a href="#!email"><span class="white-text email">jdandturk@gmail.com</span></a>
                </div>
              </li>
              <li><a href="#">item1</a></li>
              <li><a href="#">item2</a></li>
              <li><a href="#">item3</a></li>
              <li><a href="#">item4</a></li>
            </ul>
          </div>
        </div>
      </nav>
    </header>
    <main>
      <!-- Your content here -->
    <div class="row">
        <div class="col s12">
            <form  method="post">
                <div class="row">
                    <div class="col s4 input-field">
                        <input type="text" name="nome" id="nome">
                        <label for="nome">Nome</label>
                    </div>
                    <div class="col s4 input-field">
                        <input type="text" name="telefone" id="telefone">
                        <label for="telefone">Telefone</label>
                    </div>
                    <div class="col s4 input-field">
                        <input type="email" name="email" id="email">
                        <label for="email">Email</label>
                    </div>
                </div>
                <div class="row">
                    <div class="col input-field s12">
                        <input type="text" name="endereco" id="endereco">
                        <label for="endereco">Endereco</label>
                    </div>
                </div>

                
                <div class="row">
                <div class="input-field col s6">

                <?php
                 echo "<select>";
                 echo "<option value='' disabled selected>SELECIONE UM DIRETOR</option>";
                 $daoDiretor = new DaoDiretor();
                $diretores = $daoDiretor->getAll();
                
                if($diretores != null)

                  foreach ($diretores as $key => $diretor) {
                    # code...
                    echo "<option value='{$diretor->getCodigo()}'>{$diretor->getNome()}</option>";
                  }
                 
                 else echo "null";
                echo "</select>";
                echo "<label>Diretor</label>"
                ?>
               </div>

             <div class="input-field col s6">
              <select>
                <option value="" disabled selected>Choose your option</option>
                 <option value="1">Option 1</option>
                <option value="2">Option 2</option>
                <option value="3">Option 3</option>
              </select>
              <label>Materialize Select</label>
             </div>
           </div>

           <div class="row">
                    <div class="col center s12">
                        <button class="waves-effect waves-light btn" type="submit" name="submit">
                            <i class="material-icons right">send</i>Cadastrar</button>
                    </div>
          </div>

                <?php 
                     if(isset($_POST['submit'])){
                         $escola = new Escola();
                         $escola->setNome($_POST['nome']);
                         $escola->setTelefone($_POST['telefone']);
                         $escola->setEndereco($_POST['endereco']);
                         $escola->setEmail($_POST['email']);


                         $dao =new DaoEscola();
                         if($dao->save($escola)){
                             echo "<script> alert('Escola cadastrada com sucesso')  </script>";
                         }
                     }

                ?>

            </form>
        </div>
    </div>

    </main>
    <footer class="page-footer cyan">
      <div class="container">
        <div class="row">
          <div class="col s12 m8 l6">
            <h5 class="white-text">First Footer Content</h5>
            <p class="grey-text text-lighten-4">You can use rows and columns here to organize your footer content.</p>
          </div>
          <div class="col s12 m4 l6">
            <h5 class="white-text">Second Footer Content</h5>
            <p class="grey-text text-lighten-4">You can use rows and columns here to organize your footer content.</p>
          </div>
        </div>
      </div>
      <div class="footer-copyright">
        <div class="container">
          © 2017 Copyright Text
          <a class="grey-text text-lighten-4 right" href="#!">More Links</a>
        </div>
      </div>
    </footer>
    <!-- The jQuery file path -->
      <script src="js/jquery.min.js"></script>
    <!-- Path of the materialize.min.js file -->
      <script src="js/materialize.min.js"></script>
    <script>
      $("document").ready(function(){
        $(".button-collapse").sideNav();
        $('select').material_select();
      });
    </script>
  </body>
</html>