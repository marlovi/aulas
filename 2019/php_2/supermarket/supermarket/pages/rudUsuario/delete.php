<?php
    $id = $_GET['id'];
    $dao = new DaoUsuario();
    $usu = $dao->read($id);
    
    // echo $usu->getIdUsuario();
    // echo $usu->getEnderecoIdEndereco();
    // echo $usu->getIdTelefone();
    if(isset($_POST['deleta'])){
        $ids = array("usu" => $usu->getIdUsuario(),"ende"=> $usu->getEnderecoIdEndereco(), "tele"=>$usu->getIdTelefone());
        echo "<pre>";
        var_dump($ids);
        echo "</pre>";
        $dao->delete($ids);
    }


?>

<form method="post" class=" container p-5 mb-5">
  <h5 class=" jumbotron ">Certeza que deseja Excluir Este Usuário ? </h5>
  <div class="card-body text-center">
    <h5 class="card-title"><?php  echo $usu->getNome();  ?></h5>
    <h5 class="card-title"><?php  echo $usu->getEmail();  ?></h5>
    <h5 class="card-title"><?php  echo $usu->getCpf();  ?></h5>
    <p class="card-text">Está ação não pode ser desfeita</p>
    <button class="btn btn-danger mr-3" name="deleta">Sim !</button>
    <a href="?p=readAll" class="btn btn-primary">Não !, Voltar !</a>
  </div>
</form>