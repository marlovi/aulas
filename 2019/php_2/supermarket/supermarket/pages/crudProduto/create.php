<div class="container mt-4 mb-5">
    <div class="text-center m-5">
      <h2>Adicionar Produto</h2>
    </div>
    <form method="post" action="#" class="sm mb-5">
      <div class="form-row">
        <div class="form-group col-md-6">
          <label for="nome" class="sm">Nome</label>
          <input required type="text" class="form-control form-control-sm" name="nome" id="nome" placeholder="Nome" value="">
        </div>
        <div class="form-group col-md-6">
          <label for="valor">Valor</label>
          <input required type="decimal" class="form-control form-control-sm" name="valor" id="valor" placeholder="R$ ____,00" value="">
        </div>
      </div>
      <div class="form-row">
        <div class="form-group col-md-6">
          <label for="codigoBarras">Código de Barras</label>
          <input required type="text" class="form-control form-control-sm" name="codigoBarras" id="codigoBarras" placeholder="Código de Barras" value="">
        </div>
        <div class="form-group col-md-6">
          <label for="descricao">Descrição</label>
          <input required type="text" class="form-control form-control-sm" name="descricao" id="descricao" placeholder="Descricao" value="">
        </div>
      </div>
      <div class="form-row">
        <div class="form-group  col-md-6">
          <label for="dataValidade">Data de Validade</label>
          <input required class="form-control form-control-sm " type="date" name="dataValidade" id="dataValidade">
        </div>
        <div class="form-group mt-4 col-md-6">
          <div class="form-check">
            <input class="form-check-input pl-3" type="checkbox" name="perecivel" id="perecivel">
            <label class="form-check-label pl-2" for="gridCheck">
              Perecível
            </label>
          </div>
        </div>
      </div>
      <div class="text-center mt-2  mb-5">
        <button type="submit" class="btn btn-primary" name="adicionar">Adicionar </button>
      </div>
    </form>
</div>
<hr class="mb-5">
<?php
  if(isset($_POST['adicionar'])){
    $con = new Conexao();
    $pro = new Produto($con->getConnection());
    $pro->setNome($_POST['nome']);
    $pro->setValor($_POST['valor']);
    $pro->setCodigoBarras($_POST['codigoBarras']);
    $pro->setDescricao($_POST['descricao']);
    $pro->setDataValidade($_POST['dataValidade']);
    $pro->setPerecivel((isset(($_POST['perecivel']))? 1 : 0));

    // echo "<pre>";
    // var_dump($pro);
    // echo "</dpre>";
    $dao = new DaoProduto();
    $dao->create($pro);
  }

?>