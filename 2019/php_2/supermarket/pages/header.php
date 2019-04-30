<?php
    session_start();
    if(isset($_POST['login'])){
        require_once "db/conexao.php";
        require_once "model/usuario.class.php";
        require_once "dao/daoUsuario.class.php";

        
        $con = new Conexao();
        $user = new Usuario($con->getConnection());
        $user->setEmail($_POST['email']);
        $user->setSenha($_POST['senha']);
        $dao = new DaoUsuario();
        $dao->login($user);

        $_SESSION['logado'] = serialize($user);

      

        
     
    }
    
    // echo "<pre>";
    // var_dump($_SESSION);
    // echo "</pre>";
?>
<!doctype html>
<html lang="pt-br">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="bootstrap/css/bootstrap.min.css" >
    
    <title>SupermarketOnline</title>
    <script defer src="fontawesome-free-5.8.1/js/all.js"></script>
    <script src="bootstrap/js/jquery-3.3.1.min.js"></script>
    <script src="bootstrap/js/funcao.js"></script>

</head>
  <body>
    <header class="mb-3">
        <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
        <a class="navbar-brand" href="index.php">||</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>

        <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav mr-auto">
            <li class="nav-item active">
                <a class="nav-link" href="#">Home <span class="sr-only">(current)</span></a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#">Link</a>
            </li>
            <li class="nav-item dropdown">
                <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                Dropdown
                </a>
                <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                <a class="dropdown-item" href="?p=pesquisarProduto">Carrinho de Compra</a>
                <a class="dropdown-item" href="#">Another action</a>
                <div class="dropdown-divider"></div>
                <a class="dropdown-item" href="#">Something else here</a>
                </div>
            </li>

            <li class="nav-item">
                <a class="nav-link disabled" href="#" tabindex="-1" aria-disabled="true">Disabled</a>
            </li>
            </ul>
                <form class="form-inline my-2 my-lg-0 float-right">
                    <ul class="navbar-nav mr-auto my-2">
                        <?php
                            if(empty($_SESSION['id_user'])){
                            echo '
                            <li class="nav-item">
                            <button  type="button" class="btn btn-sm btn-outline-primary"  data-toggle="modal" data-target="#modalLogin">Login</button>
                            </li>';
                        }else{
                            echo'
                            <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                            '; echo $_SESSION["nome"];
                            echo '
                            </a>
                            <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                            <a class="dropdown-item" href="?p=readAll">Listar os usuários</a>
                            <a class="dropdown-item" href="?p=listar">Listar os produtos</a>
                            <a class="dropdown-item" href="?p=createProduto">Adicionar Produto</a>
                            <div class="dropdown-divider"></div>
                            <a class="dropdown-item" href="?p=logout">Logout</a>
                            </div>
                            </li>    ';                
                        }
                        ?>
                        <li class="nav-item">
                            <button class="btn btn-outline-primary mx-4 btn-sm"><i class="fas fa-shopping-cart"></i></button>
                        </li>
                    </ul>
                </form> 
        </div>
        </nav>
   
    </header>



