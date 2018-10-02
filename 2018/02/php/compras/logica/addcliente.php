<?php 
  require_once "../beans/cliente.class.php";
  require_once "../dao/daocliente.class.php";
  session_start();
  if(!isset($_SESSION['cliente'])){
     if(isset($_GET['codigo'])){
        $codigo = $_GET['codigo'];
        $dao = new DaoCliente();
        $cliente  = $dao->getCliente($codigo);
        var_dump($cliente);

        $_SESSION['cliente'] = serialize($cliente); 

}
  }else{
    echo "Já existe <br>";
    var_dump( unserialize($_SESSION['cliente']));
  }
  
   

?>