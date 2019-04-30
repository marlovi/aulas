<?php
    $id = $_GET['id'];
    echo $id;
    $dao = new DaoUsuario();
    $usu = $dao->read($id);
    // echo "<pre>";
    // var_dump($usu);
    // echo "</pre>";
    // echo $usu->getEnderecoIdEndereco();
    // echo $usu->getIdTelefone();
    // echo $usu->getIdUsuarioEndereco();

    if(isset($_POST['alterar'])){
        $con = new Conexao();
        $usuario = new Usuario($con->getConnection());
        $usuario->setNome($_POST['nome']);
        $usuario->setEmail($_POST['email']);
        $usuario->setSenha($_POST['senha']);
        $usuario->setCpf($_POST['cpf']);
        $usuario->setRg($_POST['rg']);
        $usuario->setDdd($_POST['ddd']);
        $usuario->setTelefone($_POST['telefone']);
        $usuario->setEstadoIdEstado($_POST['estado']);
        $usuario->setCidadeIdCidade($_POST['cidade']);
        $usuario->setCep($_POST['cep']);
        $usuario->setRua($_POST['rua']);
        $usuario->setBairro($_POST['bairro']);
        $usuario->setEnderecoIdEndereco($usu->getEnderecoIdEndereco());
        $usuario->setIdTelefone($usu->getIdTelefone());
        $usuario->setIdUsuarioEndereco($usu->getIdUsuarioEndereco());
        $usuario->setIdUsuario($_GET['id']);
    
        if(isset($_POST['complemento'])){

            $usuario->setComplemento($_POST['complemento']);
        }
        $usuario->setNum($_POST['num']);
        $dao = new DaoUsuario();
        $dao->update($usuario);

        // echo "<pre>";
        // var_dump($usuario); 
        // echo "</pre>";

    }

?>

    <div class="justify-content-center mt-3">
        <h2 class=" text-center text-bold">Atualizar Dados !</h2>
    </div>
    <form method="post" class="mb-5 small container mt-2" action="#" enctype="multipart/form-data" id="form_cidade">
        <div class="form-row">
            <div class="col-md-4 mb-3">
                <label for="nome">Nome</label>
                <input type="text" class="form-control  form-control-sm" name="nome" id="nome" value="<?php echo $usu->getNome(); ?>" required>
            </div>
            <div class="col-md-4 mb-3">
                <label for="validationDefault02">E-mail</label>
                <input type="text" class="form-control  form-control-sm" name="email" id="email" placeholder="E-mail" value="<?php echo $usu->getEmail(); ?>" required>
            </div>
            <div class="col-md-4 mb-3">
                <label for="senha small">Senha :</label>
                <input type="password" class="form-control  form-control-sm" name="senha" id="senha" placeholder="Senha"  value="<?php echo $usu->getSenha(); ?>"  required>
            </div>
        </div>
        <div class="form-row">
            <div class="col-md-4 mb-3">
                <label for="cpf">CPF :</label>
                <input type="number" class="form-control form-control-sm" name="cpf" id="cpf" placeholder="CPF" value="<?php echo $usu->getCpf(); ?>" required>
            </div>
            <div class="col-md-4 mb-2">
                <label for="rg">RG :</label>
                <input type="number" class="form-control form-control-sm" name="rg" id="rg" placeholder="RG" value="<?php echo $usu->getRg(); ?>" required>
            </div>
            <div class="col-md-1 mb-2">
                <label for="ddd">DDD :</label>
                <input type="number" class="form-control form-control-sm" name="ddd" id="ddd" placeholder="(XX)" value="<?php echo $usu->getDdd() ?>" required>
            </div>
            <div class="col-md-3 mb-2">
                <label for="senha">Telefone:</label>
                <input type="number" class="form-control form-control-sm" name="telefone" id="telefone" placeholder="" value="<?php echo $usu->getTelefone(); ?>" required>
            </div>
        </div>
        <div class="form-row">
            <div class="col-md-6 mb-2">
                    <label for="Estado">Estado</label>
                    <select name="estado" id="estado" class="custom-select custom-select-sm">
                        <option >Selecione ..</option>
                        <?php
                            $con = new Conexao();
                            $sele = new Query($con->getConnection());
                            $sele->readEstado($usu->getEstadoIdEstado());
                            $sele->consulta();
                        ?>
                    </select>
                </div>
                <div class="col-md-6 mb-2">
                    <label for="Cidade">Cidade</label>
                    <select name="cidade" id="cidade" class="custom-select custom-select-sm" >
                        <?php
                            $con = new Conexao();
                            $sele = new Query($con->getConnection());
                            $sele->readCidade($usu->getCidadeIdCidade());
                        ?>
                        <option value="">Selecione .. </option>
                    </select>
                </div>
            </div>
        <div class="form-row">
            <div class="col-md-2 mb-2">
                <label for="cep">CEP :</label>
                <input type="number" class="form-control form-control-sm" name="cep" id="cep" placeholder="CEP " value="<?php echo $usu->getCep(); ?>" required>
            </div>
            <div class="col-md-3 mb-2">
                <label for="rua">Rua :</label>
                <input type="text" class="form-control form-control-sm" name="rua" id="rua" placeholder="Rua" value="<?php echo $usu->getRua(); ?>" required>
            </div>
            <div class="col-md-2 mb-2">
                <label for="cep">Bairro :</label>
                <input type="text" class="form-control form-control-sm" name="bairro" id="bairro" placeholder="Bairro" value="<?php echo $usu->getBairro(); ?>" required>
            </div>
            <div class="col-md-3 mb-2">
                <label for="complemento">Complemento :</label>
                <input type="text" class="form-control form-control-sm" name="complemento" id="complemento" value="<?php echo $usu->getComplemento(); ?>">
            </div>
            <div class="col-md-2 mb-2">
                <label for="num">Número :</label>
                <input type="number" class="form-control form-control-sm" name="num" id="num" placeholder="Número" value="<?php echo $usu->getNum(); ?>" required>
            </div>
        </div>
        <div class="text-center mb-5">
            <span class="">
                <button class="btn btn-primary mt-5" type="submit" name="alterar">Alterar</button>
            </span>
        </div>
    </form>