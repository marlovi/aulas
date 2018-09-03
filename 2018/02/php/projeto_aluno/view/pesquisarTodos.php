
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

    <div class="row">
        <div class="col s12">
        
        <?php 

echo "<table>
<thead>
  <tr>
      <th>Código</th>
      <th>Nome</th>
      <th>Telefone</th>
      <th>E-mail</th>
      <th>Alterar</th>
      <th>Excluir</th>
  </tr>
</thead>

<tbody>";




            $dao = new DaoAluno(); 

            $resultado  = $dao->getAll(); 

            if($resultado != NULL){
              foreach ($resultado as $key => $aluno) {
                  # code...
                  echo "<tr>";
                    echo "<td> {$aluno->getCodigo()} </td>";
                    echo "<td> {$aluno->getNome()} </td>";
                    echo "<td> {$aluno->getTelefone()} </td>";
                    echo "<td> {$aluno->getEmail()} </td>";
                    echo "<td> <a href= 'alterar.php?codigo={$aluno->getCodigo()}' > <i class='material-icons'>update</i> </a>
                    </td>";
                    echo "<td> <a href= 'excluir.php?codigo={$aluno->getCodigo()}' > <i class='material-icons'>delete</i> </a> 
                    </td>";
                  echo "</tr>";
              }
            }
            echo " </tbody>
            </table>";
        ?>
          
       
            
        </div>
    </div>

      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>