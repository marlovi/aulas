<?php
    $dao = new DaoUsuario;
    $resultado = $dao->readAll();

    if($resultado != NULL){
        echo '
        <table class="table table-dark container text-center">
        <thead>
            <tr>
            <th scope="col">Usuário</th>
            <th scope="col">E-mail</th>
            <th scope="col">CPF</th>
            <th scope="col">RG</th>
            <th scope="col">Telefone</th>
            <th scope="col">Ações</th>
            </tr>
        </thead>
        <tbody>
        ';
        foreach ($resultado as $key => $user) {
                echo'
                    <tr>
                    <td scope="row">'. $user->getNome().'</td>
                    <td> ' . $user->getEmail() .'</td>
                    <td> ' . $user->getCpf() .'</td>
                    <td> ' . $user->getRg() .'</td>
                    <td> ' . $user->getDdd() .' - ' . $user->getTelefone() .'</td>
                    <td><a class="ml-2" href="?p=read&id=' . $user->getIdUsuario() .'"><i class="fas fa-info-circle"></i></a>
                        <a class="ml-2" href="?p=update&id=' . $user->getIdUsuario() .'"><i class="far fa-edit"></i></a>
                        <a class="ml-2" href="?p=delete&id=' . $user->getIdUsuario() .'"><i class="far fa-trash-alt"></i></a>
                    </td>

                    </tr>
                ';
            }
        echo '
            </tbody>
            </table>
        ';
    }
?>
