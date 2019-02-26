<?php 
    require_once "aluno.class.php";

?>
<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">

    <title>Cadastro de Aluno</title>
  </head>
  <body>
    <div class="container">
        <div class="row">
            <div class="col">
                <form method="POST">
                    <div class="form-group">
                        <label for="nome">Nome</label>
                        <input class="form-control" type="text" id="nome" name="nome" placeholder="Informe o nome completo">
                    </div>
                    <div class="form-row">
                        <div class="form-group col-md-4" >
                            <label for="rg">RG</label>
                            <input type="text" class="form-control" id="rg" name="rg" placeholder="Registro Geral">
                        </div>
                        <div class="form-group col-md-4">
                            <label for="cpf">CPF </label>
                            <input type="text" name="cpf" id="cpf" class="form-control" placeholder="***.***.***-**">
                        </div>
                        <div class="form-group col-md-4">
                            <label for="telefone">Telefone</label>
                            <input type="text" name="telefone" id="telefone" class="form-control" placeholder="(64)XXXXX-XXXX"> 
                        </div>
                    </div>
                    <div class="form-row">
                        <div class="form-group col-md-6">
                            <label for="matricula">Matrícula</label>
                            <input type="text" name="matricula" id="matricula" class="form-control" placeholder="Matrícula">
                        </div>
                        <div class="form-group col md-6">
                            <label for="data">Data de Nascimento</label>
                            <input type="date" name="data" id="data" class="form-control">
                        </div>
                    </div>
                    <div class="form-group">
                        <label for="email">E-mail</label>
                        <input type="email" name="email" id="email" class="form-control" placeholder="******@***.****">
                    </div>



                    <div class="row">
                        <div class="col d-flex justify-content-center">
                        <button type="submit" name="enviar" class="btn btn-primary ">Enviar</button> 
                        </div>
                    </div> 
                </form>
                <?php 

                if(isset($_POST['enviar'])){

                  //Como instanciar um obj em php
                  $aluno  = new Aluno(); 
                  $aluno->setNome($_POST["nome"]);
                  $aluno->setRg($_POST["rg"]);
                  var_dump($aluno);
                }
                ?>
            </div>
        </div>
    </div>

    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
  </body>
</html>