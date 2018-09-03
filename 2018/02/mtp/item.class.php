<?php 
    class Item{
        public $produto; 
        public $vendedor;
    }

    $arroz  = new Item();
    $arroz->produto="Arroz tio joão";
    $arroz->vendedor = "Atacadão";
    $feijao = new Item();
    $feijao->produto = "Feijão";
    $feijao->vendedor="Assaí";
    
    



    $_SESSION['itens'] = array();

    $x = $_SESSION['itens']; 

    $x[0] = $arroz;
    $x[1] = $feijao;


    $_SESSION['itens'] = $x;



    var_dump($_SESSION['itens']);

    unset($_SESSION['itens'][1]);

    var_dump($_SESSION['itens']);
    

?>