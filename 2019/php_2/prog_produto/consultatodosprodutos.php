<?php
    require_once "database/beans/produto.class.php";
    require_once "database/daoproduto.class.php";

    function converterData($us){
        $pt_br  = date("d-m-Y",strtotime($us)); // convert date to pt-br 
        return $pt_br;
    }
?>
<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
    <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
    <title>Consultando todos os produtos</title>
  </head>
  <body>

  <div class="container">
    <div class="row">
        <div class="col">
        <table class="table table-hover">

        <?php
  echo "<thead>
    <tr>
      <th scope='col'>ID</th>
      <th scope='col'>NOME</th>
      <th scope='col'>DESCRIÇÂO</th>
      <th scope='col'>COD BARRAS</th>
      <th scope='col'>PREÇO COMPRA</th>
      <th scope='col'>PREÇO VENDA</th>
      <th scope='col'>VALIDADE</th>
      <th scope='col'>ATIVO</th>
      <th scope='col'>PERECÍVEL</th>
      <th scope='col'>ESTOQUE</th>
      <th scope='col'>ALTERAR</th>
      <th scope='col'>DELETAR</th>
    </tr>
  </thead>";
 echo " <tbody>";
    

    $dao = new DaoProduto();

    $resultado = $dao->getAll();

    if($resultado != NULL){
        foreach($resultado as $chave  => $produto){
            echo "<tr>";
            echo "<th scope='row'>{$produto->getId()}</th>
                              <td>{$produto->getNome()}</td>
                              <td>{$produto->getDescricao()}</td>
                              <td>{$produto->getCodigo()}</td>
                              <td>{$produto->getPrecoCompra()}</td>
                              <td>{$produto->getPrecoVenda()}</td>
                              <td>".converterData($produto->getDataValidade())."</td>
                              <td>".(($produto->isAtivo())?"SIM":"NÃO")."</td>
                              <td>".(($produto->isPerecivel())?"SIM":"NÂO")."</td>
                              <td>{$produto->getEstoque()}</td>
                              <td><a href='atualizarproduto.php?id={$produto->getId()}'><i class='material-icons'> update </i></a></td>
                              <td><a href='deletarproduto.php?id={$produto->getId()}'><i class='material-icons'> delete </i></a></td>
    
      </tr>";

        }
    }
    
    
  echo "</tbody>
</table> ";

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