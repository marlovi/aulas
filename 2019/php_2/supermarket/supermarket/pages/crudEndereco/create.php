<div class="container m-5 p-5">
    <div class=" justify-content-center">
        <h2 class=" text-center text-bold">Endereço</h2>
    </div>
    <form method="post" class="mb-5 small" action="#" enctype="multipart/form-data" id="form_cidade">
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
        $end = new Endereco($con->getConnection());
        $end->setEstadoIdEstado($_POST['estado']);
        $end->setCidadeIdCidade($_POST['cidade']);
        $end->setCep($_POST['cep']);
        $end->setRua($_POST['rua']);
        $end->setBairro($_POST['bairro']);
        if(isset($_POST['complemento'])){
            $usuario->setComplemento($_POST['complemento']);
        }else{
            $usuario->setComplemento(' ');
        }
        $usuario->setNum($_POST['num']);
        $dao = new DaoEndereco();
        $dao->create($end);//

        // echo "<pre>";
        // var_dump($end); 
        // echo "</pre>";

    }

?>