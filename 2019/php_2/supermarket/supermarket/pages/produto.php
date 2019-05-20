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
            <div class="text-center list-group">
                <form action="" method="post">
                    <button type="submit" name="cr-<?php echo $pro->getId();?>" class="btn btn-warning btn-sm m-5 ">Adicionar ao Carrinho</button>
                    <a class="btn btn-primary btn-sm" href="">Comprar</a>
                </form>
            </div>

        </div>

    </div>
    <div class="row mb-5">
        <h3>Comentários</h3>
    </div>
</div>
<?php
    $idUsuario = $_SESSION['id_user'];
    if(isset($_POST['cr-'.$pro->getId()])){
        if(!isset($_SESSION['carrinho'])){
            $_SESSION['carrinho']= array();
        }
        $car = new Carrinho();
        $car->setIdProduto($pro->getId());
        $car->setIdUsuario($idUsuario);
        $car->setValor($pro->getValor());
        $car->setQnt(1);

        array_push($_SESSION["carrinho"], serialize($car/* = (array) $car)*/));
        foreach($_SESSION['carrinho'] as $key=> $c){
            echo "<pre>";
            var_dump(unserialize($c));
            echo "</pre>";
        }
    }
?>
