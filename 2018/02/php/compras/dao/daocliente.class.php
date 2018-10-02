<?php
    require_once "../beans/cliente.class.php";
    require_once "conexao.class.php";
    
class DaoCliente{
 
    public function getCliente($codigo){
        $resultado = NULL;
        $conexao  = new Conexao();
        $conectado = $conexao->getConnection();

    $sql = "SELECT `idcliente`, `nome`, `email` FROM `cliente` WHERE `idcliente` = {$codigo}";

        $result  = $conectado->query($sql);

        if($result->num_rows > 0 ){
          
            while($row  = $result->fetch_assoc()){
                $cliente = new Cliente();
                $cliente->setIdCliente($row['idcliente']);
                $cliente->setNome($row['nome']);
                $cliente->setEmail($row['email']);
                $resultado = $cliente;
            }
        }

        $conectado->close(); 

        return $resultado;
    }
}
/*
$dao = new DaoCliente();

var_dump($dao->getCliente(1));*/
?>