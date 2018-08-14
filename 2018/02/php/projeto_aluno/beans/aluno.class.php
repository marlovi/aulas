<?php 
    class Aluno{

        //operadores de visibilidade
        // - privado 
        // + publico
        // #protegido 
        // $ Default - não aplica-se


        private $codigo; 
        private $nome;
        private $telefone;
        private $email; 
        //get => obter  ; set -> incluir; is -> é 

        public function setCodigo($codigo){
            $this->codigo = $codigo;
        }
        public function getCodigo(){
            return $this->codigo;
        }
        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;
        }
        public function setTelefone($telefone){
            $this->telefone = $telefone;
        }
        public function setEmail($email){
            $this->email = $email;
        }
        public function getEmail(){
            return $this->email;
        }
        public function getTelefone(){
            return $this->telefone;
        }        
    }

   /* $joao =  new Aluno();  //operador instanciamento new
    $joao->setNome("João Antônio Nascimento");
    $joao->setTelefone("(62)99999-8877");

    //var_dump($joao);


    $maria = new Aluno();
    $maria->setNome("Maria Joana");
    
    
    echo $maria->getNome();*/
?>