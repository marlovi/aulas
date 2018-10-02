<?php 
 require_once "../beans/produto.class.php";
 require_once "conexao.class.php";
    class DaoProduto{
       
        public function getProduto($codigo){
            $resultado = NULL;
            $conexao  = new Conexao();
            $conectado = $conexao->getConnection();
    
        $sql = "SELECT `idproduto`, `nome`, `codigo_barras`  FROM `produto` WHERE `idproduto` = {$codigo}";
    
            $result  = $conectado->query($sql);
    
            if($result->num_rows > 0 ){
              
                while($row  = $result->fetch_assoc()){
                    $produto = new Produto();
                    $produto->setIdProduto($row['idproduto']);
                    $produto->setNome($row['nome']);
                    $produto->setCodigoBarras($row['codigo_barras']);
                    $resultado = $produto;
                }
            }
    
            $conectado->close(); 
    
            return $resultado;
        }
    }

    /*$dao = new DaoProduto();

    var_dump($dao->getProduto(1));*/
?>