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
    <title>Pesquisa de Clientes</title>
  </head>

  <body>
    <div class="row container">
        <div class="col s12">
        <table>
        <thead>
          <tr>
              <th>Código</th>
              <th>Nome</th>
              <th>Cpf</th>
              <th>Alterar</th>
              <th>Excluir</th>
          </tr>
        </thead>

        <tbody>

        <?php
        $resultado = DaoCliente::pesquisarTodos();

         foreach ($resultado as $key => $value) {
             # code...
             echo  "<tr>";
                echo "<td>".$value->getCodigo()."</td>";
                echo "<td>".$value->getNome()."</td>";
                echo "<td>".$value->getCpf()."</td>";
                echo "<td> <a href='alterarcliente.php?codigo=".$value->getCodigo()."'><i class='material-icons'>update</i></a></td>";
                echo "<td> <a href='deletarcliente.php?codigo=".$value->getCodigo()."'><i class='material-icons'>delete</i></a></td>";
            echo "</tr>";
         }
           

        ?>
         
          
        </tbody>
      </table>
        </div>
    </div>
    <!--Import jQuery before materialize.js-->
    <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
    <script type="text/javascript" src="js/materialize.min.js"></script>
  </body>
</html>