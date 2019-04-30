<?php
    require_once "model/produto.class.php";
    require_once "db/conexao.php";
    class DaoProduto{
        public function create($pro){
            $sql = "INSERT INTO produto(nome, valor, codigo_barras, descricao, data_validade, perecivel)
                 VALUES (?,?,?,?,?,?)";
            $con = new Conexao();
            $con = $con->getConnection();
            $stmt = $con->prepare($sql);
            $stmt->bind_param("sdsssi", $nome, $valor, $codigoBarras, $descricao, $dataValidade, $perecivel);
            $nome = $pro->getNome();
            $valor = $pro->getValor();
            $codigoBarras = $pro->getCodigoBarras();
            $descricao = $pro->getDescricao();
            $dataValidade  = $pro->getDataValidade();
            $perecivel = $pro->isPerecivel();

            if($stmt->execute()){
                echo '<script>alert("Adicionado!");</script>';
                echo "<script> window.location.href='index.php'</script>";
                $stmt->close();
                $con->close();
            }else{
                echo "error  " . $con->error;
            }
        }

        public function readAll(){
            $sql = 'SELECT * from produto;';
            $con = new Conexao();
            $con = $con->getConnection();
            $result = $con->query($sql);

            if($result->num_rows > 0){
                $retorno = array();
                while($row = $result->fetch_assoc()){
                    $pro = new Produto($con);
                    $pro->setId($row['id_produto']);
                    $pro->setNome($row['nome']);
                    $pro->setDescricao($row['descricao']);
                    $pro->setValor($row['valor']);
                    $pro->setCodigoBarras($row['codigo_barras']);
                    $pro->setDataValidade($row['data_validade']);
                    $pro->setPerecivel($row['perecivel']);

                    array_push($retorno, $pro);
                }
            }
            return $retorno;
            // echo '<pre>';
            //     print_r($retorno);
            // echo "</pre>";
        }

        public function read($id){
            $retorno = NULL;
            $sql = 'SELECT * FROM produto where id_produto = ' . $id;
            $con = new Conexao();
            $con = $con->getConnection();
            $result = $con->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    $pro = new Produto($con);
                    $pro->setId($row['id_produto']);
                    $pro->setNome($row['nome']);
                    $pro->setValor($row['valor']);
                    $pro->setCodigoBarras($row['codigo_barras']);
                    $pro->setDataValidade($row['data_validade']);
                    $pro->setPerecivel($row['perecivel']);
                    $pro->setDescricao($row['descricao']);
                    $retorno = $pro;
                }
            }
            return $retorno;
        }

        public function update($pro){
            $sql = "UPDATE produto SET nome = '{$pro->getNome()}', valor = '{$pro->getValor()}', codigo_barras = '{$pro->getCodigoBarras()}', descricao = '{$pro->getDescricao()}', data_validade = '{$pro->getDataValidade()}', perecivel = '{$pro->isPerecivel()}' WHERE id_produto = " . $pro->getId();
            $con = new Conexao();
            $con = $con->getConnection();
            $result = $con->query($sql);
            if($result ==  FALSE){
                echo "erro ". $con->error;
            }else{
                echo '<script>alert("OK!");</script>';
                echo "<script> window.location.href='index.php'</script>";
            }
            $con->close();
            return $result;
        }
        
        public function delete($id){
            $sql = "DELETE FROM produto WHERE id_produto = " . $id;
            $con = new Conexao();
            $con = $con->getConnection();
            $result = $con->query($sql);
            if($result == TRUE){
                echo '<script>alert("Removido!");</script>';
                echo "<script> window.location.href='?p=listar'</script>";
            }else{
                echo 'Error : ' . $con->error;
            }
            //return $result;
        }
    }
?>