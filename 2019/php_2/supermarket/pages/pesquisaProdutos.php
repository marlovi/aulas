<?php 
    require_once "model/produto.class.php";
    require_once "dao/daoProduto.class.php";

    if(!isset($_SESSION['crcompra'])){
        $_SESSION['crcompra'] = array();
    }
?>

<div class="col-md-10">
            <div class="row mb-3">
            
            <form method="post">
            <?php
            $dao = new DaoProduto();
            $produtos = $dao->readAll();   







            echo "<table class='table'>
            <thead>
              <tr>
                <th scope='col'>#</th>
                <th scope='col'>First</th>                
              </tr>
            </thead>
            <tbody>" ;

            foreach ($produtos as $key => $value) {
                # code...



                echo "<tr>
            <th scope='row'>".$value->getNome()."</th>
            
            <td><button name='btn".$value->getId()."' type='submit'>Exemplo</button></td>
          </tr>";

            }
            

          echo "</tbody>
          </table>";

            





            foreach ($produtos as $key => $value) {
                # code...
                if(isset($_POST['btn'.$value->getId()])){
                    //

                    $item = new ItemVenda();
                    $item->setProduto($value);
                    $item->setUser($_SESSION['user']);


                    $_SESSION['x' ] = NULL; 
                    array_push($_SESSION['crcarrinho'],$item);


                    echo "<script> alert('oi  ".$value->getId()." ') </script> ";
                }
            }
            ?>
            </form>
            
            </div>
</div>