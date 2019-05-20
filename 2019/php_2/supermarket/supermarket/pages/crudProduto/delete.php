<?php
    $dao = new DaoProduto();
    $pro = $dao->read($_GET['id']);

    //var_dump($pro);
?>
<div class="alert alert-danger text-center container m-5" role="alert">
  <h4 class="alert-heading">Remover Este Produto ?!</h4>
  <hr>
  <ul class="nav list-group">
      <li><?php echo $pro->getNome();  ?></li>
      <li><?php echo $pro->getDescricao();  ?></li>
      <li><?php echo $pro->getValor(); ?></li>
      <li><?php echo $pro->getCodigoBarras(); ?></li>
  </ul>
  <hr>
  <p>A ação não pode ser desfeita !!</p>
  <hr>
  <form action="#" method="post">

      <button type="submit" name="delete" class="btn btn-danger">Remover !</button>
  </form>
</div>
<?php
    if(isset($_POST['delete'])){
      $dao = new DaoProduto();
      $id = $_GET['id'];
      $dao->delete($id);   
    }
?>