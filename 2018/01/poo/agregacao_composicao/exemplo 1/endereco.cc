#include "endereco.h"

void Endereco::setLogradouro(const string & logradouro){
    this->logradouro = logradouro;
}
void Endereco::setCidade(const string & cidade){
    this->cidade = cidade;
}
void Endereco::setNumero( const int & numero){
    this->numero = numero;
}

int Endereco::getNumero(){
    return numero;
}
string Endereco::getLogradouro(){
    return logradouro;
}
string Endereco::getCidade(){
    return cidade;
}