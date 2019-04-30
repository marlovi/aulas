<?php
    $dao = new DaoProduto();
    $pro = $dao->read($_GET['id']);
    
    function ConverterData($data){
        $pt_br = date("d-m-Y", strtotime($data));
        return $pt_br;
    }
?>
<div class="container">
    <div class="row mt-3 mb-3">
        <div class="col-md-6">
            <img src="teste.jpg" class="img-fluid" alt="">
        </div>
        <div class="col-md-4">
            <div class="card" style="width: 18rem;">
                <div class="card-header">
                    <?php echo $pro->getNome();  ?>
                </div>
                <ul class="list-group list-group-flush ">
                    <li class="list-group-item">Valor :      <?php echo $pro->getValor();  ?></li>
                    <li class="list-group-item">Perecível :  <?php echo (($pro->isPerecivel() == 1) ? "Sim" : "Não");  ?></li>
                    <li class="list-group-item">Descrição :  <?php echo $pro->getDescricao();  ?></li>
                </ul>
            </div>

        </div>

    </div>
    <div class="row mb-5">
        <h3>Comentários</h3>
    </div>
</div>