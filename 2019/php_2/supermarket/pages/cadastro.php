<div class="container m-5 p-5">
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
        <div class="form-row">
            <div class="col-md-6 mb-2">
                    <label for="Estado">Estado</label>
                    <select name="estado" id="estado" class="custom-select custom-select-sm">
                        <option selected>Selecione ..</option>
                        <?php
                            $con = new Conexao();
                            $sele = new Query($con->getConnection());
                            $sele->consulta();
                        ?>
                    </select>
                </div>
                <div class="col-md-6 mb-2">
                    <label for="Cidade">Cidade</label>
                    <select name="cidade" id="cidade" class="custom-select custom-select-sm" >
                        <option value="">Selecione .. </option>
                    </select>
                </div>
            </div>
        <div class="form-row">
            <div class="col-md-2 mb-2">
                <label for="cep">CEP :</label>
                <input type="number" class="form-control form-control-sm" name="cep" id="cep" placeholder="CEP " value="" required>
            </div>
            <div class="col-md-3 mb-2">
                <label for="rua">Rua :</label>
                <input type="text" class="form-control form-control-sm" name="rua" id="rua" placeholder="Rua" value="" required>
            </div>
            <div class="col-md-2 mb-2">
                <label for="cep">Bairro :</label>
                <input type="text" class="form-control form-control-sm" name="bairro" id="bairro" placeholder="Bairro" value="" required>
            </div>
            <div class="col-md-3 mb-2">
                <label for="complemento">Complemento :</label>
                <input type="text" class="form-control form-control-sm" name="complemento" id="complemento" placeholder="Complemento" value="">
            </div>
            <div class="col-md-2 mb-2">
                <label for="num">Número :</label>
                <input type="number" class="form-control form-control-sm" name="num" id="num" placeholder="Número" value="" required>
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
        $usuario->setDdd($_POST['ddd']);
        $usuario->setTelefone($_POST['telefone']);
        $usuario->setEstadoIdEstado($_POST['estado']);
        $usuario->setCidadeIdCidade($_POST['cidade']);
        $usuario->setCep($_POST['cep']);
        $usuario->setRua($_POST['rua']);
        $usuario->setBairro($_POST['bairro']);
        if(isset($_POST['complemento'])){

            $usuario->setComplemento($_POST['complemento']);
        }else{
            $usuario->setComplemento(' ');
        }
        $usuario->setNum($_POST['num']);
        $dao = new DaoUsuario();
        $dao->create($usuario);//

        echo "<pre>";
        var_dump($usuario); 
        echo "</pre>";

    }

?>