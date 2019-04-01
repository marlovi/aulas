<?php 
   
   
   
   
   
   require_once("database/daoproduto.class.php");
    require_once("database/beans/produto.class.php");


$produto = NULL; 

    if(isset($_GET['id'])){
        echo $_GET['id'];   
        $dao = new DaoProduto();
        $produto  = $dao->getProduto($_GET['id']);
    }
    var_dump($produto);

?>



<!doctype html>
<html lang="en">
 
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
  </head>
  <body>
    <div class="container">
        <div class="row">
            <div class="col">
                <form method="POST">
                    <center><h1 class = "my-4 font-italic" style="color: #4682B4;">Cadastro de Produto</h1></center>
                    <div class="form-row">
                        <div class="form-group col-md-8">
                            <label for="nome">Nome</label>
                            <input  value="<?php  echo $produto->getNome(); ?>" type="text" class="form-control" id="nome" name="nome" placeholder="Informe o nome do Produto">
                        </div>

                        <div class="for-group col-md-4">
                            <label class="codigo">Código</label>
                            <input value="<?php  echo $produto->getCodigo(); ?>" class="form-control" type="text" id="codigo" name="codigo" placeholder="***.***.**">
                        </div>
                    </div>
                    <div class="form-row">
                        <div class="form-group col-md-4">
                        <label class="estoque">Estoque</label>
                        <input value="<?php echo $produto->getEstoque(); ?>"class="form-control" type="number" id="estoque" name="estoque" placeholder="">
                        </div>
                   
                        <div class="form-group col-md-4">
                            <label class="preco_venda">Preço de Venda</label>
                            <input value="<?php echo $produto->getPrecoVenda()?>" pattern="[0.9]*" step="any" class="form-control" type="number" id="preco_venda" name="preco_venda" placeholder="$$$">  
                        </div>
                        <div class="for-group col-md-4">
                            <label class="preco_compra">Preço de Compra</label>
                            <input value ="<?php   echo $produto->getPrecoCompra()  ?>"pattern="[0-9]+$" step="any" class="form-control" type="number" id="preco_compra" name="preco_compra" placeholder="$$$">
                        </div>
                    </div>    
                        <div class="form-row">
                           
                            <?php 
                            echo " <div class='form-check form-check-inline col-md-4'>";
                                if($produto->isPerecivel()==TRUE){
                                    echo "<label class='form-check-label '>Perecível</label>";
                                    echo "<input checked='checked' class='form-check-input' type='checkbox' id='perecivel' name='perecivel' placeholder='Sim ou Não'>  ";
                                }else{
                                    echo "<label  class='form-check-label '>Perecível</label>";
                                    echo "<input  class='form-check-input' type='checkbox' id='perecivel' name='perecivel' placeholder='Sim ou Não'>  ";
                                }

                                echo "</div>";
                            ?>
                                
                                
                            
                            <div class="form-group col md-4">
                                <label class="data">Data De Validade</label>
                                <input value="<?php echo $produto->getDataValidade() ;  ?>"class="form-control" type="date" id="data" name="data" placeholder="">
                            </div>
                            <div class="form-group col-md-4">
                                <label class="ativo">Ativo</label>
                                <input value="<?php  echo (($produto->isAtivo()==TRUE)?"sim":"não");   ?>"class="form-control" type="text" id="ativo" name="ativo" placeholder="Sim ou Não">
                            </div>
                        </div>
                        
                            <div class="form-group">
                                <label class="descricao">Descrição</label>
                                <input value="<?php  echo $produto->getDescricao(); ?>"class="form-control" type="text" id="descricao" name="descricao" placeholder="informe a descrição do produto">             
                            </div>
                        <p class="text-center">  
                            <button type="submit" name="enviar" class="btn btn-outline-primary">Cadastra Produto</button>
                        </p>
                    </div>


                   
                </form>
                <?php
                if(isset($_POST['enviar'])){
                    //como instarciar um objeto em php
                    $produto = new Produto();
                    $produto->setNome($_POST["nome"]);
                    $produto->setCodigo($_POST["codigo"]);
                    $produto->setEstoque($_POST["estoque"]);
                    $produto->setPrecoVenda($_POST["preco_venda"]);
                    $produto->setPrecoCompra($_POST["preco_compra"]);
                    $produto->setPerecivel($_POST["perecivel"]);
                    $produto->setDataValidade($_POST["data"]);
                    $produto->setAtivo($_POST["ativo"]);
                    $produto->setDescricao($_POST["descricao"]);
                    
                    $dao = new DaoProduto();
                    if($dao->salvar($produto)>0){
                        echo "<script> alert('produto cadastrado com sucesso ')</script>";
                    }
                }
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