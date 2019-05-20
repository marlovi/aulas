<?php
    require_once "model/Endereco.class.php";
    require_once "db/conexao.php";
    class DaoEndereco{
        public function create($end){
            $sql = "INSERT INTO endereco(cep, rua, bairro, num, complemento, cidade_id_cidade) VALUES (?,?,?,?,?,?);";
            $con = new Conexao();
            $con = $con->getConnection();
            $stmt = $con->prepare($sql);
            $stmt->bind_param("issisi", $cep, $rua, $bairro, $num, $complemento, $cidade_id_cidade);

            $cep = $end->getCep();
            $rua = $end->getRua();
            $complemento = $end->getComplemento();
            $num = $end->getNum();
            $bairro = $end->getBairro();
            $cidade_id_cidade = $end->getCidadeIdCidade();

            if($stmt->execute()){
                $endereco_id_endereco = $con->insert_id;
            }else{
                echo "ERROR : " . $con->error;
            }
        }
        public function read(){

        }
        public function update(){

        }
        public function delete(){
            
        }
    }
?>