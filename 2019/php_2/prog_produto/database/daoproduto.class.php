<?php 
    require_once ("beans/produto.class.php");
    require_once ("conexao.class.php");
    class DaoProduto{

public function delete($produto){
    $sql = "DELETE FROM produto WHERE id =".$produto->getId(); 
    $resultado = FALSE; 
    $conexao = new Conexao();
    $con  = $conexao->getConnection();

    if($con->query($sql) == TRUE){
        $resultado = TRUE;
    }else{
        die("erro  ".$con->error);
    }
    return $resultado;
}


public function update($produto){
    $sql = "UPDATE `produto` SET `nome`= '{$produto->getNome()}',`descricao`='{$produto->getDescricao()}',`codigo_barras`='{$produto->getCodigo()}',`preco_compra`={$produto->getPrecoCompra()},`preco_venda`={$produto->getPrecoVenda()},`data_validade`='{$produto->getDataValidade()}',`ativo`={$produto->isAtivo()},`perecivel`={$produto->isPerecivel()},`qnt_estoque`={$produto->getEstoque()} WHERE id = ".$produto->getId();
    $conexao  = new Conexao();
    $con = $conexao->getConnection();
   
    $result  = $con->query($sql);

    if($result == FALSE) echo "erro   {$con->error} ";
    $con->close();
    return $result;
}


        public function getProduto($id){
            $retorno  = NULL;
            $sql = "SELECT id, nome, descricao, codigo_barras, preco_compra, preco_venda, data_validade, ativo, perecivel, qnt_estoque FROM produto WHERE id = ".$id; 
            $conexao  = new Conexao();
            $con = $conexao->getConnection();

            $result  = $con->query($sql);
            

            if($result->num_rows > 0 ){
               
                while($linha = $result->fetch_assoc()){
                    $p = new Produto();
                    $p->setId($linha['id']);
                    $p->setNome($linha['nome']);
                    $p->setCodigo($linha['codigo_barras']);
                    $p->setPrecoCompra($linha['preco_compra']);
                    $p->setPrecoVenda($linha['preco_venda']);
                    $p->setDataValidade($linha['data_validade']);
                    $p->setAtivo($linha['ativo']);
                    $p->setPerecivel($linha['perecivel']);
                    $p->setEstoque($linha['qnt_estoque']);
                    $p->setDescricao($linha['descricao']);
                   

                    $retorno = $p;
                }
            }

           return $retorno;
        }

        public function getAll() {//obter todos os registros de produtos
            $retorno  = NULL;
            $sql = "SELECT id, nome, descricao, codigo_barras, preco_compra, preco_venda, data_validade, ativo, perecivel, qnt_estoque FROM produto"; 
            $conexao  = new Conexao();
            $con = $conexao->getConnection();

            $result  = $con->query($sql);
            

            if($result->num_rows > 0 ){
                $retorno = array();
                while($linha = $result->fetch_assoc()){
                    $p = new Produto();
                    $p->setId($linha['id']);
                    $p->setNome($linha['nome']);
                    $p->setCodigo($linha['codigo_barras']);
                    $p->setPrecoCompra($linha['preco_compra']);
                    $p->setPrecoVenda($linha['preco_venda']);
                    $p->setDataValidade($linha['data_validade']);
                    $p->setAtivo($linha['ativo']);
                    $p->setPerecivel($linha['perecivel']);
                    $p->setEstoque($linha['qnt_estoque']);
                    $p->setDescricao($linha['descricao']);
                   

                    array_push($retorno,$p);
                }
            }

           // print_r($retorno);
           return $retorno;
        }


        public function salvar($produto){
           $sql ="INSERT INTO produto (nome, descricao, 
                 codigo_barras, preco_compra, preco_venda, 
                 data_validade, ativo, perecivel, qnt_estoque) VALUES(?,?,?,?,?,?,?,?,?)";
            
            
            $conexao = new Conexao();
            $con = $conexao->getConnection();

            $stmt = $con->prepare($sql);
            $stmt->bind_param("sssddsiii",$nome,
                        $descricao,$codigo_barras,
                        $preco_compra, $preco_venda,
                        $data_validade,$ativo,$perecivel,$qnt_estoque);
        
            $nome = $produto->getNome();
            $descricao = $produto->getDescricao();
            $codigo_barras = $produto->getCodigo();
            $preco_compra = $produto->getPrecoCompra();
            $preco_venda = $produto->getPrecoVenda();
            $data_validade= $produto->getDataValidade();
            $ativo = $produto->isAtivo();
            $perecivel = $produto->isPerecivel();
            $qnt_estoque = $produto->getEstoque();


            $stmt->execute();

           // echo "o produto foi salvo no id = {$con->insert_id}";
            $id_salvo = $con->insert_id;
            $stmt->close();
            $con->close();
            return $id_salvo;
        }
    }
   /* $produto = new Produto();
    $produto->setNome("Livro");
    $produto->setDescricao("Políticas públicas");
    $produto->setCodigo("anbd21254658877as");
    $produto->setPrecoCompra(120.00);
    $produto->setPrecoVenda(200.00);
    $produto->setDataValidade("2019/10/10");
    $produto->setAtivo(true);
    $produto->setPerecivel(false);
    $produto->setEstoque(10);

   // var_dump($produto);

   $dao = new DaoProduto();
   $dao->salvar($produto);

   $dao = new DaoProduto();
   $dao->getAll();*/

?>