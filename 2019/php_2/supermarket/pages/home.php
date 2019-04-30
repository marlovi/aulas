<div class="container">
    <div class="row mt-3">
        <div class="col-md-2">
            <ul class="nav flex-column">
            <li class="nav-item">
                <h5>Categorias</h5>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#">Link</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#">Link</a>
            </li>
            </ul>
        </div>
        
        <div class="col-md-10">
            <div class="row mb-3">
                <?php
                //  var_dump(unserialize($_SESSION['logado']));
                    $dao = new DaoProduto();
                    $result = $dao->readAll();
                    if($result != NULL){

                        foreach ($result as $key => $pro) {
                            
                            echo '<div class="card ml-auto mr-auto mt-2" style="width: 15rem;">
                                <a href="?p=produto&id= ' . $pro->getId()  . '">
                                    <img src="teste.jpg" class="card-img-top" alt="...">
                                </a>
                                <div class="card-body text-center">
                                    <h5 class="card-title"> ' . $pro->getNome()  . '</h5>
                                    <p class="card-text small"> ' . $pro->getDescricao()  . '</p>
                                    <a href="#" class="text-danger text-wrap"><del>R$ 300,00</del></a>
                                    <a href="?p=produto&id= ' . $pro->getId()  . '" class="text-success ml-3"> ' . $pro->getValor()  . '</a>
                                </div>';
                            echo '</div>';
                        }
                    }
                ?>
            </div>
        </div>
    </div>
</div>