#include "pessoa.h"



string Pessoa::getNome(){
    return nome;
}
void Pessoa::setNome(const string &nome){
    this->nome = nome;
} 

void Pessoa::setTelefones(const vector<Telefone*> &telefones){
    this->telefones = telefones;
}

vector<Telefone*> Pessoa::getTelefones(){
    return this->telefones;
}

Endereco* Pessoa::getEndereco(){
    return endereco;
}
void Pessoa::setEndereco(Endereco* endereco){
    this->endereco = endereco;
}