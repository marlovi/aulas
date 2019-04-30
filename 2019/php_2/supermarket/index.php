<?php
    require_once "pages/header.php";
    require_once "model/query.class.php";
    require_once "db/conexao.php";
    require_once "dao/daoUsuario.class.php";
    require_once "dao/daoProduto.class.php";
?>

<main>
    <?php
        if(isset($_GET['p'])){
            $p = $_GET['p'];
        }else{
            $p = "home";
        }

        switch ($p) {
        case 'cadastro':
            require_once "pages/cadastro.php";
            break;
        case 'readAll':
            require_once "pages/readAll.php";
            break;
        case 'read':
            require_once "pages/rudUsuario/read.php";
            break;
        case 'update':
            require_once "pages/rudUsuario/update.php";
            break;
        case 'delete':
            require_once "pages/rudUsuario/delete.php";
            break;
        case 'logout':
            require_once "pages/logout.php";
            break;
        case 'createProduto':
            require_once "pages/crudProduto/create.php";
            break;
        case 'deleteProduto':
            require_once  "pages/crudProduto/delete.php";
            break;
        case 'updateProduto':
            require_once "pages/crudProduto/update.php";
            break;
        case 'listar':
            require_once "pages/crudProduto/listar.php";
            break;
        case 'readProduto':
            require_once "pages/crudProduto/read.php";
            break;
        case 'produto':
            require_once "pages/produto.php";
            break;
        case 'pesquisarProduto':
            require_once "pages/pesquisaProdutos.php";
            break;

        default:
            require_once "pages/home.php";
            break;
        }
    ?>
</main>
<?php
    require_once "pages/footer.php";
?>