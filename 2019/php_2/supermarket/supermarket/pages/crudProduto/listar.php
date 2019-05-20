<?php
    $dao = new DaoProduto();
    $pro = $dao->readAll();

    function ConverteData($data){
      $pt_br = date("d-m-Y", strtotime($data));
      return $pt_br;
    }

    // echo "<pre>";
    // var_dump($pro);
    // echo "</pre>";
?>

<table class="table table-hover table-dark container text-center">
  <thead>
    <tr>
      <th scope="col">Nome</th>
      <th scope="col">Preço</th>
      <th scope="col">Código de Barras</th>
      <th scope="col">Descrição</th>
      <th scope="col">Data de Validade</th>
      <th scope="col">Perecível</th>
      <th scope="col">Ações</th>
    </tr>
  </thead>
  <tbody>
    <?php
      foreach ($pro as $key => $pro) {
        echo '
            <tr>
            <td>' .$pro->getNome() . '</td>
            <td>' .$pro->getValor() . '</td>
            <td>' .$pro->getCodigoBarras() . '</td>
            <td>' .$pro->getDescricao() . '</td>
            <td>' . ConverteData($pro->getDataValidade()) . '</td>
            <td>' .(($pro->isPerecivel()? "Sim" : "Não")) . '</td>
            <td>
              <a href="?p=readProduto&id=' .$pro->getId() . '"><i class="fas fa-info-circle"></i></a>
              <a class="ml-2" href="?p=updateProduto&id=' .$pro->getId() . '"><i class="far fa-edit"></i></a>
              <a  class="ml-2" href="?p=deleteProduto&id=' .$pro->getId() . '"><i class="far fa-trash-alt"></i></a>
            </td>
            </tr>
          ';
      }
      ?>
  </tbody>
</table>