
<?php 
    require_once('banco/conexao.php')

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
    <table  class="striped">
        <thead>
          <tr>
              <th>ID</th>
              <th>Nome</th>
              <th>CNPJ</th>
              <th> Razão Social </th>
              <th>Alterar</th>
              <th>Excluir</th>
          </tr>
        </thead>

        <tbody>

        <?php 
        $sql = "SELECT `id_fornecedor`,`nome`, `cnpj`, `razao_social` FROM `fornecedor` ORDER BY `nome` ASC";
        $con = getConnection();
        $result  = mysqli_query($con,$sql); 

        if(mysqli_num_rows($result) > 0 ){
            while ( $row = mysqli_fetch_assoc($result)){
                echo "<tr>";
                echo "<td>{$row['id_fornecedor']}</td>";
                echo "<td>{$row['nome']}</td>";
                echo "<td>{$row['cnpj']}</td>";
                echo "<td>{$row['razao_social']}</td>";
                echo "<td> <a href='atualizarFornecedor.php?codigo=".$row['id_fornecedor']."' ><i class='material-icons'> update </i> </a> </td>";
                echo "<td> <a href='excluirFornecedor.php?codigo=".$row['id_fornecedor']."' ><i class='material-icons'> delete </i> </a> </td>";
              echo "</tr>";
            }
        }
        
        
       

          ?>
          
        </tbody>
      </table>
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>
        