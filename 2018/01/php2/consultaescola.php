<?php 
    require_once "projeto_escola/escola.class.php";
    require_once "projeto_escola/daoescola.class.php";

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

    <div class="row">
        <div class="col s12">
        <table>
        <thead>
          <tr>
              <th>Código</th>
              <th>Nome</th>
              <th>Telefone</th>
              <th>email</th>
              <th>Endereco</th>
              <th>diretor</th>
              <th>categoria</th>
              <th>Alterar</th>
              <th>Excluir</th>
          </tr>
        </thead>

        <tbody>
        <?php
            $dao = new DaoEscola();
            $resultado = $dao->getAll();
            if($resultado != NULL){
                foreach ($resultado as $key => $value) {
                    # code...
                    echo "<tr>";
                    echo "<td>{$value->getCodigo()}</td>";
                    echo "<td>{$value->getNome()}</td>";
                    echo "<td>{$value->getTelefone()}</td>";
                    echo "<td>{$value->getEmail()}</td>";
                    echo "<td>{$value->getEndereco()}</td>";
                    echo "<td>{$value->getDiretor()}</td>";
                    echo "<td>{$value->getCategoria()}</td>";
                    echo "<td><a href='alterarAluno.php?codigo={$value->getCodigo()}'><i class='material-icons'>update</i> </a> </td>";
                    echo "<td><a href='excluirAluno.php?codigo={$value->getCodigo()}'><i class='material-icons'>delete</i> </a> </td>";
                  echo "</tr>";
               }
            }
         
          ?>
        </tbody>
      </table>
        </div>
    </div>

    <body>
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>