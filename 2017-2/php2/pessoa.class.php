<?php

class Pessoa{
    // - private 
    //+ public 
    //# protected últizado quando estudarmos mecanismos de herança
    private $nome;
    private $cpf;
    public function setCpf($cpf){
        $this->cpf = $cpf;
    }
    public function getCpf(){
        return $this->cpf;
    }
    public function getNome(){//obter uma informação que esteja no atributo nome
        return $this->nome;
    }
    public function setNome($nome){//incluir uma informação no atributo nome
        $this->nome/*atributo nome*/ = $nome;//parâmetro
    }

    function __construct(){ //construtor é a primeira função que é chamada quando cria-se uma instância de uma classe na memória do computador (objeto)
      //  echo "Contrutor da classe pessoa invocado/chamado";
    }
}

?>