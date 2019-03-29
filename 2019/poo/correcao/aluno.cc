#include "aluno.h"

Aluno::Aluno(){
       //aqui hahahha sem parâmetros :) 
}

Aluno::Aluno(const string &nome){
    this->nome = nome;
}
void Aluno::setNome(const string &nome){
    this->nome = nome;
}
string Aluno::getNome(){
    return this->nome;
}
string  Aluno::getRg(){
    return this->rg;
}
void Aluno::setRg(const string &rg){
    this->rg =rg;
}
void Aluno::setCpf(const string &cpf){
    this->cpf = cpf;
}
string Aluno::getCpf(){
    return this->cpf;
}
void Aluno::setEmail(const string &email){
    this->email = email;
}
string Aluno::getEmail(){
    return this->email;
}
void Aluno::setEndereco(const string &endereco){
    this->endereco = endereco;
}
string Aluno::getEndereco(){
    return this->endereco;
}

void Aluno::setMatricula(const long int &matricula){
    this->matricula = matricula;
}
long int Aluno::getMatricula(){
    return this->matricula;
}

void Aluno::setTelefone(const string &telefone){
    this->telefone = telefone;
}
string Aluno::getTelefone(){
    return this->telefone;
}