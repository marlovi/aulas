<?php
    $id = $_SESSION['id_user'];
    $dao = new DaoUsuario();
    $usu = $dao->read($id);
?>
<div class="container border border-dark p-5 rounded mt-5">
    <div class="row">
        <div class="col-3">
            <ul class="list-group list-group-item">
                <h6 class="">Informações</h6>
                <div class=" list-group">
                    <a class="" href="?p=endereco">Alterar Endereço</a>
                    <a href="">Alterar Senha</a>
                </div>
                <hr>
                <h6>Compras</h6>
                <div class=" list-group">
                    <a href="">Carrinho</a>
                    <a class="" href="">Historico de Compras</a>
                    <a class="" href="">Vendas</a>
                    <a class="" href="">Meus Produtos</a>
                    <a class="" href="?p=createProduto">Adicionar Produto</a>
                </div>
                <hr>
                <a class="text-danger" href="?p=delete&id=<?php echo $usu->getIdUsuario(); ?>">Deletar Conta</a>
            </ul>
        </div>
        <div class="col-9 border border-primary rounded">
            <fieldset disabled>
                <div class="justify-content-center mt-3">
                    <h2 class=" text-center text-bold">Olá <?php echo $_SESSION["nome"]; ?></h2>
                </div>
                <hr>
                <h5>Informações Pessoais</h5>
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
                            <input type="number" class="form-control form-control-sm" name="ddd" id="ddd" placeholder="(XX)" value="<?php  ?>" required>
                        </div>
                        <div class="col-md-3 mb-2">
                            <label for="senha">Telefone:</label>
                            <input type="number" class="form-control form-control-sm" name="telefone" id="telefone" placeholder="9 9999 - 9999" value="<?php  ?>" required>
                        </div>
                    </div>
                    <h6>Endereço</h6>
                    <div class="form-row">
                        <div class="col-md-6 mb-2">
                                <label for="Estado">Estado</label>
                                <select name="estado" id="estado" class="custom-select custom-select-sm">
                                    <?php
                                        $con = new Conexao();
                                        $sele = new Query($con->getConnection());
                                        //$sele->readEstado($usu->getEstadoIdEstado());
                                    ?>
                                    <option >Selecione ..</option>
                                </select>
                            </div>
                            <div class="col-md-6 mb-2">
                                <label for="Cidade">Cidade</label>
                                <select name="cidade" id="cidade" class="custom-select custom-select-sm" >
                                    <?php
                                        $con = new Conexao();
                                        $sele = new Query($con->getConnection());
                                        //$sele->readCidade($usu->getCidadeIdCidade());
                                    ?>
                                    <option value="">Selecione .. </option>
                                </select>
                            </div>
                        </div>
                    <div class="form-row">
                        <div class="col-md-2 mb-2">
                            <label for="cep">CEP :</label>
                            <input type="number" class="form-control form-control-sm" name="cep" id="cep" placeholder="CEP " value="<?php  ?>" required>
                        </div>
                        <div class="col-md-3 mb-2">
                            <label for="rua">Rua :</label>
                            <input type="text" class="form-control form-control-sm" name="rua" id="rua" placeholder="Rua" value="<?php ?>" required>
                        </div>
                        <div class="col-md-2 mb-2">
                            <label for="cep">Bairro :</label>
                            <input type="text" class="form-control form-control-sm" name="bairro" id="bairro" placeholder="Bairro" value="<?php  ?>" required>
                        </div>
                        <div class="col-md-3 mb-2">
                            <label for="complemento">Complemento :</label>
                            <input type="text" class="form-control form-control-sm" name="complemento" id="complemento" value="<?php   ?>">
                        </div>
                        <div class="col-md-2 mb-2">
                            <label for="num">Número :</label>
                            <input type="number" class="form-control form-control-sm" name="num" id="num" placeholder="Número" value="<?php  ?>" required>
                        </div>
                    </div>
                </form>
            </fieldset>
        </div>
    </div>
</div>