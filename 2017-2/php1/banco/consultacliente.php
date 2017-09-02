<?php 
    require_once 'conexao.php';
?>

<!DOCTYPE html>
  <html>
    <head>
      <!--Import Google Icon Font-->
      <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
      <!--Import materialize.css-->
      <link type="text/css" rel="stylesheet" href="css/materialize.min.css"  media="screen,projection"/>
         <meta http-equiv="Content-Type" content="text/html;charset=UTF-8">
      <!--Let browser know website is optimized for mobile-->
      <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    </head>

    <body>
        <div class="row container">
            <div class="col s12">
            <table>
        <thead>

        <tr>
              <th>Codigo</th>
              <th>Nome</th>
              <th>Telefone</th>
              <th>E-Mail</th>
          </tr>
          <tbody>
          
          
        
          
            <?php
                $con = conectar();
                $sql = "SELECT codigo,nome,telefone,email FROM cliente ORDER BY nome ASC";
                $result = mysqli_query($con,$sql);
                if(mysqli_num_rows($result) > 0 ){
               
                    while($row = mysqli_fetch_assoc($result)){
                        echo "<tr>";
                            echo "<td>".$row['codigo']."</td>";
                            echo "<td>".$row['nome']."</td>";
                            echo "<td>".$row['telefone']."</td>";
                            echo "<td>".$row['email']."</td>";
                      echo "</tr>";
                    }
                }



                mysqli_close($con);
            ?>


            </tbody>
          
        </thead>

       
      </table>
            </div>
        </div>
      <!--Import jQuery before materialize.js-->
      <script type="text/javascript" src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
      <script type="text/javascript" src="js/materialize.min.js"></script>
    </body>
  </html>
        