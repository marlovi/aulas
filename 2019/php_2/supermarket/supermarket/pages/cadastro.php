<div class="container col-md-10 m-5 p-5 border border-primary rounded">
    <div class=" justify-content-center">
        <h2 class=" text-center text-bold">Cadastre-se !</h2>
    </div>
    <form method="post" class="mb-5 small" action="#" enctype="multipart/form-data" id="form_cidade">
        <div class="form-row">
            <div class="col-md-4 mb-3">
                <label for="nome">Nome</label>
                <input type="text" class="form-control  form-control-sm" name="nome" id="nome" placeholder="Nome" value="" required>
            </div>
            <div class="col-md-4 mb-3">
                <label for="validationDefault02">E-mail</label>
                <input type="text" class="form-control  form-control-sm" name="email" id="email" placeholder="E-mail" value="" required>
            </div>
            <div class="col-md-4 mb-3">
                <label for="senha small">Senha :</label>
                <input type="password" class="form-control  form-control-sm" name="senha" id="senha" placeholder="Senha" required>
            </div>
        </div>
        <div class="form-row">
            <div class="col-md-4 mb-3">
                <label for="cpf">CPF :</label>
                <input type="number" class="form-control form-control-sm" name="cpf" id="cpf" placeholder="CPF" value="" required>
            </div>
            <div class="col-md-4 mb-2">
                <label for="rg">RG :</label>
                <input type="number" class="form-control form-control-sm" name="rg" id="rg" placeholder="RG" value="" required>
            </div>
            <div class="col-md-1 mb-2">
                <label for="ddd">DDD :</label>
                <input type="number" class="form-control form-control-sm" name="ddd" id="ddd" placeholder="(XX)" value="" required>
            </div>
            <div class="col-md-3 mb-2">
                <label for="senha">Telefone:</label>
                <input type="number" class="form-control form-control-sm" name="telefone" id="telefone" placeholder="9 9999 - 9999" value="" required>
            </div>
        </div>
        <div class="text-center">
            <button class="btn btn-primary mt-5" type="submit" name="cadastra">Cadastrar</button>
        </div>
    </form>

</div>
<?php
    if(isset($_POST['cadastra'])){
        $con = new Conexao();
        $usuario = new Usuario($con->getConnection());
        $usuario->setNome($_POST['nome']);
        $usuario->setEmail($_POST['email']);
        $usuario->setSenha($_POST['senha']);
        $usuario->setCpf($_POST['cpf']);
        $usuario->setRg($_POST['rg']);
      


        if(!isset($_SESSION['telefones']))
            $_SESSION['telefones'] = array(); 
        else{
            $tele = new Telefone();
            $tele->setDdd($_POST['ddd']);
            $tele->setTelefone($_POST['telefone']);
            array_push($_SESSION['telefone'],$tele);
            $usuario->setTelefones($_SESSION['telefone']);
        }
        
        $dao = new DaoUsuario();
        $dao->create($usuario, $tele);
        

        // echo "<pre>";
        // var_dump($usuario); 
        // var_dump($tele); 
        // echo "</pre>";
    }

?>