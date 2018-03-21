<?php
    require_once('banco/bancoaluno.php');

?>
<!DOCTYPE html>
  <html>
    <head>
        <meta http-equiv="Content-Type" content="text/html;charset=UTF-8">
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
                <form  method="post">
                    <div class="row">
                        <div class="col s3 input-field">
                            <input type="text" name="nome" id="nome">
                            <label for="nome">Nome</label>
                        </div>
                        <div class="col s3 input-field">
                            <input type="email" name="email" id="email">
                            <label for="email">Email</label>
                        </div>
                        <div class="col s3 input-field">
                            <input type="text" name="telefone" id="telefone">
                            <label for="telefone">Telefone</label>
                        </div>
                        <div class="col s3 input-field">
                            <input type="text" name="matricula" id="matricula">
                            <label for="matricula">Matricula</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s3 input-field">
                            <input type="text" name="curso" id="curso">
                            <label for="curso">Curso</label>
                        </div>
                        <div class="col s3 input-field">
                        <select name="periodo">
                            <option value="0" disabled selected>Favor selecione...</option>
                            <option value="1">Matutino</option>
                            <option value="2">Vespertino</option>
                            <option value="3">Noturno</option>
                        </select>
                        <label>Perído</label>
                        </div>
                        <div class="col s6 input-field">
                            <input type="text" name="instituicao" id="instituicao">
                            <label for="instituicao">Instituição</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col s12 center">
                        <button class="waves-effect waves-light btn" type="submit" name="submit"><i class="material-icons right">send</i>Cadastrar</button>
                        </div>
                    </div>
                    <?php 
                       
                       if(isset($_POST['submit'])){
                        if(!isset($_POST['nome']) || $_POST['nome']==""){
                            echo "<script> alert('O campo nome é obrigatório ') </script>";
                        }elseif(!isset($_POST['email']) || $_POST['email']==""){
                            echo "<script> alert('O campo email é obrigatório ') </script>";
                        }elseif(!isset($_POST['telefone']) || $_POST['telefone']==""){
                            echo "<script> alert('O campo telefone é obrigatório ') </script>";
                        }elseif(!isset($_POST['matricula']) || $_POST['matricula']==""){
                            echo "<script> alert('O campo matricula é obrigatório ') </script>";
                        }elseif(!isset($_POST['curso']) || $_POST['curso']==""){
                            echo "<script> alert('O campo curso é obrigatório ') </script>";
                        }elseif(!isset($_POST['instituicao']) || $_POST['instituicao']==""){
                            echo "<script> alert('O campo instituicao é obrigatório ') </script>";
                        }elseif(!isset($_POST['periodo']) || $_POST['periodo']==0){
                            echo "<script> alert('O campo periodo é obrigatório ') </script>";
                        }else{
                            $nome = $_POST['nome'];
                            $email = $_POST['email'];
                            $telefone = $_POST['telefone'];
                            $matricula = $_POST['matricula'];
                            $curso = $_POST['curso'];
                            $periodo = $_POST['periodo'];
                            $instituicao = $_POST['instituicao'];

                            $validar = save($nome,$email,$telefone,$matricula,$curso,$periodo,$instituicao);
                            if($validar){
                                echo "<script> alert('cadastrado com sucesso') </script>";
                            }
                        }

                       }

                    ?>
                </form>
            </div>
        </div>
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>

      <script  type="text/javascript"> 
      
            $(document).ready(function() {
                $('select').material_select();
            });
     
      
      </script>
    </body>
  </html>