<?php
    $dao = new DaoProduto();
    $pro = $dao->read($_GET['id']);
?>
<div class="container mt-4 mb-5">
    <div class="text-center m-5">
      <h2>Atualizar Produto</h2>
    </div>
    <form method="post" action="#" class="sm mb-5">
      <div class="form-row">
        <div class="form-group col-md-6">
          <label for="nome" class="sm">Nome</label>
          <input required type="text" class="form-control form-control-sm" name="nome" id="nome" placeholder="Nome" value="<?php echo $pro->getNome();  ?>">
        </div>
        <div class="form-group col-md-6">
          <label for="valor">Valor</label>
          <input required type="decimal" class="form-control form-control-sm" name="valor" id="valor" placeholder="R$ ____,00" value="<?php echo $pro->getValor();  ?>">
        </div>
      </div>
      <div class="form-row">
        <div class="form-group col-md-6">
          <label for="codigoBarras">Código de Barras</label>
          <input required type="text" class="form-control form-control-sm" name="codigoBarras" id="codigoBarras" placeholder="Código de Barras" value="<?php echo $pro->getCodigoBarras();  ?>">
        </div>
        <div class="form-group col-md-6">
          <label for="descricao">Descrição</label>
          <input required type="text" class="form-control form-control-sm" name="descricao" id="descricao" placeholder="Descricao" value="<?php echo $pro->getDescricao();  ?>">
        </div>
      </div>
      <div class="form-row">
        <div class="form-group  col-md-6">
          <label for="dataValidade">Data de Validade</label>
          <input required class="form-control form-control-sm " type="date" name="dataValidade" id="dataValidade" value="<?php echo $pro->getDataValidade();  ?>">
        </div>
        <div class="form-group mt-4 col-md-6">
          <div class="form-check">
            <input <?php echo (($pro->isPerecivel())? "checked" : "");  ?> class="form-check-input pl-3" type="checkbox" name="perecivel" id="perecivel">
            <label class="form-check-label pl-2" for="gridCheck">
              Perecível
            </label>
          </div>
        </div>
      </div>
      <div class="text-center mt-2  mb-5">
        <button type="submit" class="btn btn-primary" name="atualizar">Atualizar</button>
      </div>
    </form>
</div>
<hr class="mb-5">
<?php
  if(isset($_POST['atualizar'])){
    $con = new Conexao();
    $pro = new Produto($con->getConnection());
    $pro->setNome($_POST['nome']);
    $pro->setValor($_POST['valor']);
    $pro->setCodigoBarras($_POST['codigoBarras']);
    $pro->setDescricao($_POST['descricao']);
    $pro->setDataValidade($_POST['dataValidade']);
    $pro->setPerecivel((isset(($_POST['perecivel']))? 1 : 0));
    $pro->setId($_GET['id']);

        // echo "<pre>";
        // var_dump($pro);
        // echo "</pre>";
    $dao = new DaoProduto();
    $dao->update($pro);
  }

?>