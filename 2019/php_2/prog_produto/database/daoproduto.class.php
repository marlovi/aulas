<?php 
    require_once ("beans/produto.class.php");
    require_once ("conexao.class.php");
    class DaoProduto{

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
   $dao->salvar($produto);*/

?>