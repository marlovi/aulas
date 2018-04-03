<?php 
    class Aluno{
        private $nome; //atributos
        private $telefone;
        private $maiorIdade;
        private $matricula;
        private $esportista;

        public function __construct(){ // método construtor
           // echo "executando o construtor";
        }

        //encapsulamento
        public function setEsportista($esportista){
            $this->esportista = $esportista;
        }
        public function isEsportista(){
            return $this->esportista;
        }
        public function isMaiorIdade(){
            return $this->maiorIdade;
        }
        public function setMaiorIdade($maiorIdade){
            $this->maiorIdade = $maiorIdade;
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
         public function getTelefone(){
             return $this->telefone;
         }
        public function setMatricula($matricula){
            $this->matricula = $matricula;
        }
        public function getMatricula(){
            return $this->matricula;
        }
    }

?>