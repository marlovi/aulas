#include "pessoa.h"


Pessoa::Pessoa(){

}
Pessoa::Pessoa(const string &nome){
    this->nome = nome;
}
Pessoa::Pessoa(const string &nome,const string &telefone, const string &rg){
    this->nome = nome;
    this->telefone = telefone;
    this->rg = rg;
}

Pessoa::~Pessoa(){

}

//métodos de encapsulamento