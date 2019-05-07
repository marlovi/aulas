<?php
    session_start();
    require_once('produto.class.php');
    require_once('item.class.php');

    if(isset($_GET['add_item'])){

        if(!isset($_SESSION['itens']))
            $_SESSION['itens'] = array();
        $i = new Item();
        $i->setIdCliente($_GET['cliente']);
        $i->setIdProduto($_GET['produto']);
        $i->setValor($_GET['valor']);


        array_push($_SESSION['itens'],serialize($i));
        foreach ($_SESSION['itens'] as $key => $value) {
            # code...
            //Dao -> item a item
            var_dump(unserialize($value));
        }

    }
    if(isset($_GET['add_produto'])){



        if(!isset($_SESSION['produtos']))
            $_SESSION['produtos'] = array();
        $p = new Produto(); 
        $p->setId($_GET['id']);
        $p->setNome($_GET['nome']);

        array_push($_SESSION['produtos'],serialize($p));

        var_dump($_SESSION['produtos']);
    }

    if(isset($_GET['limpar'])){
        if(isset($_SESSION['itens'])){
            $_SESSION['itens'] = array();

            var_dump($_SESSION['itens']);
        }
    }

?>