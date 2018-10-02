<?php
  require_once "../beans/cliente.class.php";
  require_once "../beans/produto.class.php";
  require_once "../beans/itensvenda.class.php";
  require_once "../dao/daoitensvenda.class.php";
  session_start();
  $cliente = null;
  $arrayProduto = null;
 if(isset($_SESSION['cliente'])){
   $cliente = unserialize($_SESSION['cliente']);
 }

 if(isset($_SESSION['produto'])){
      $arrayProduto = unserialize($_SESSION['produto']);
 }

 if($cliente != null) var_dump($cliente);

?>

<!DOCTYPE html>
<html>
  <head>
    <!--Import Google Icon Font-->
    <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
    <!--Import materialize.css-->
    <link type="text/css" rel="stylesheet" href="css/materialize.min.css"  media="screen,projection"/>
    <meta charset="UTF-8">
    <!--Let browser know website is optimized for mobile-->
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  </head>

  <body>
      <div class="row ">
          <form class="col s12" method="POST">
           <?php
       echo " <table>
        <thead>
          <tr>
              <th>IDProduto</th>
              <th>Nome</th>
              <th>Código de Barras</th>
              <th>Valor do Item </th>
          </tr>
        </thead>
      ";
        echo "<tbody>";
         
          foreach ($arrayProduto as $key => $value) {
            # code...
            echo "<tr>";

            echo "<td>{$value->getIdProduto()}</td>
            <td>{$value->getNome()}</td>
            <td>{$value->getCodigoBarras()}</td>";
            echo "<td>              
            <input name='venda{$value->getIdProduto()}' type='text' name='venda{$value->getIdProduto()}'>
            
            </td>";
            echo "</tr>";
          }
           

        echo "</tbody>";
      echo "</table>";
           ?>

          <button class="btn waves-effect waves-light" type="submit" name="submit">Salvar
            <i class="material-icons right">send</i>
          </button>


          <?php
            if(isset($_POST['submit'])){
              $arrayItem = array();
              foreach ($arrayProduto as $key => $value) {
                $item = new ItensVenda();
                $item->setClienteIdCliente($cliente->getIdCliente());
                $item->setProdutoIdProduto($value->getIdProduto());
                $var = "venda".$value->getIdProduto();
                $item->setVenda($_POST[$var]);
                
                array_push($arrayItem,$item);

              }

              print_r($arrayItem);
              $dao = new DaoItensVenda();

              $retorno = $dao->save($arrayItem);
              if($retorno){
                echo "<script> alert('Cadastrado com sucesso') </script>";
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
      