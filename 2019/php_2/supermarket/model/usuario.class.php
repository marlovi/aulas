<?php
    class Usuario{
        //Tabela usuario;
        private $id_usuario;
        private $nome;
        private $email;
        private $cpf;
        private $rg;
        private $senha;
        // Tabela telefone
        private $id_telefone;
        private $ddd;
        private $telefone;
        //Tabela usuario_Telefone
        private $id_usuario_telefone;
        private $telefone_id_telefone;
        private $usuario_id_usuario;
        //Tabela usuario_Endereco
        private $id_usuario_endereco;
        //private $usuario_id_usuario;
        private $endereco_id_endereco;
        //Tabela Endereco
        private $id_endereco;
        private $cep;
        private $rua;
        private $bairro;
        private $num;
        private $complemento;

        private $cidade_id_cidade;
        private $estado_id_estado;

        public function setEstadoIdEstado($estado_id_estado){
            $this->estado_id_estado = $estado_id_estado;
        }
        public function getEstadoIdEstado(){
            return $this->estado_id_estado;
        }

        public function setCidadeIdCidade($cidade_id_cidade){
            $this->cidade_id_cidade = $cidade_id_cidade;
        }
        public function getCidadeIdCidade(){
            return $this->cidade_id_cidade;
        }

        private $con;

        public function __construct($con)
        {
            $this->con = $con;
        }


        public function setIdUsuario($id_usuario){
            $this->id_usuario = $id_usuario;
        }
        public function getIdUsuario(){
            return $this->id_usuario;
        }

        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getNome(){
            return $this->nome;
        }

        public function setEmail($email){
            $this->email = $email;
        }
        public function getEmail(){
            return $this->email;
        }

        public function setCpf($cpf){
            $this->cpf = $cpf;
        }
        public function getCpf(){
            return $this->cpf;
        }

        public function setRg($rg){
            $this->rg = $rg;
        }
        public function getRg(){
            return $this->rg;
        }

        public function setSenha($senha){
            $this->senha = $senha;
        }
        public function getSenha(){
            return $this->senha;
        }

        public function setIdTelefone($id_telefone){
            $this->id_telefone = $id_telefone;
        }
        public function getIdTelefone(){
            return $this->id_telefone;
        }

        public function setDdd($ddd){
            $this->ddd = $ddd;
        }
        public function getDdd(){
            return $this->ddd;
        }

        public function setTelefone($telefone){
            $this->telefone = $telefone;
        }
        public function getTelefone(){
            return $this->telefone;
        }

        public function setIdUsuarioTelefone($id_usuario_telefone){
            $this->id_usuario_telefone = $id_usuario_telefone;
        }
        public function getIdUsuarioTelefone(){
            return $this->id_usuario_telefone;
        }

        public function setTelefoneIdTelefone($telefone_id_telefone){
            $this->telefone_id_telefone = $telefone_id_telefone;
        }
        public function getTelefoneIdTelefone(){
            return $this->telefone_id_telefone;
        }

        public function setUsuarioIdUsuario($usuario_id_usuario){
            $this->usuario_id_usuario = $usuario_id_usuario;
        }
        public function getUsuarioIdUsuario(){
            return $this->usuario_id_usuario;
        }

        public function setIdUsuarioEndereco($id_usuario_endereco){
            $this->id_usuario_endereco = $id_usuario_endereco;
        }
        public function getIdUsuarioEndereco(){
            return $this->id_usuario_endereco;
        }

        public function setEnderecoIdEndereco($endereco_id_endereco){
            $this->endereco_id_endereco = $endereco_id_endereco;
        }
        public function getEnderecoIdEndereco(){
            return $this->endereco_id_endereco;
        }

        public function setIdEndereco($id_endereco){
            $this->id_endereco = $id_endereco;
        }
        public function getIdEndereco(){
            return $this->id_endereco;
        }

        public function setCep($cep){
            $this->cep = $cep;
        }
        public function getCep(){
            return $this->cep;
        }

        public function setRua($rua){
            $this->rua = $rua;
        }
        public function getRua(){
            return $this->rua;
        }

        public function setBairro($bairro){
            $this->bairro = $bairro;
        }
        public function getBairro(){
            return $this->bairro;
        }

        public function setNum($num){
            $this->num = $num;
        }
        public function getNum(){
            return $this->num;
        }

        public function setComplemento($complemento){
            $this->complemento = $complemento;
        }

        public function getComplemento(){
            return $this->complemento;
        }
    }
?>