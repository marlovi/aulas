<?php 
    require_once "../beans/cliente.class.php";
    require_once "conexao.class.php";
    require_once "../beans/itensvenda.class.php";
    class DaoItensVenda{
        public function save($arrayItens){
            $resultado = false;
            try{
                $resultado = NULL;
            $conexao  = new Conexao();
            $conectado = $conexao->getConnection();

            $sql = "INSERT INTO `itens_venda`( `venda`, `cliente_idcliente`, `produto_idproduto`) VALUES (?,?,?)";
            $stmt = $conectado->prepare($sql);
            $stmt->bind_param("dii",$valor,$cliente,$produto);
            foreach ($arrayItens as $key => $value) {
                # code...
                
                $valor = $value->getVenda();
                $cliente = $value->getClienteIdCliente();
                $produto = $value->getProdutoIdProduto();
                $stmt->execute();
                
            }
            $stmt->close();
            $conectado->close();
            $resultado = true;
            }catch(Exception $e){
                die($e->getMessage());
            }
            return $resultado;
        }

       
    }
?>