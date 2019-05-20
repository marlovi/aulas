<?php
    session_start();
    // $_SESSION['carrinho'] = array();
    require_once "pages/header.php";
    require_once "model/query.class.php";
    require_once "model/produto.class.php";
    require_once "model/carrinho.class.php";
    require_once "db/conexao.php";
    require_once "dao/daoUsuario.class.php";
    require_once "dao/daoTelefone.class.php";
    require_once "dao/daoUsuarioTelefone.class.php";
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
        case 'painel':
            require_once "pages/painel.php";
            break;
        case 'endereco':
            require_once "pages/endereco.php";
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
        case 'carrinho':
            require_once "pages/carrinho.php";
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