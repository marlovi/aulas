<?php
     require_once "model/carrinho.class.php";
?>
<div class="container border border-dark rounded">
    <div class="row">
        <div class="col-md-12">
        <table class="table table-light text-center">
            <thead>
                <tr>
                <td scope="col">Id Produto</td>
                <td scope="col">Id Usuario</td>
                <td scope="col">Valor</td>
                <td scope="col">Qnt</td>
                </tr>
            </thead>
            <tbody>
                <?php
                    foreach ($_SESSION['carrinho'] as $key => $c) {
                        $x = unserialize($c);

                        echo   $x->getIdProduto();
                        // echo 
                        // '
                        //     <tr>
                        //         <td>'. $c .'</td>
                        //         <td>'. $c .'</td>
                        //         <td>'. $c .'</td>
                        //         <td>'. $c .'</td>
                        //     </tr>
                        // ';
                        // echo "<pre>";
                        // print_r(unserialize($c));
                        // echo "</pre>";
                    }
                ?>
            </tbody>
        </table>
        <span class="float-right">TOTAL : R$<?php ?>899,00</span>
        <div class="text-center mt-5 mb-3">
                <button class="btn btn-sm btn-success">Finalizar Compra</button>
        </div>
        </div>
    </div>
</div>