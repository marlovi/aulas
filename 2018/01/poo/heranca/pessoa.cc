#include "pessoa.h"

string Pessoa::getNome(){
  return nome;
}
void Pessoa::setNome(const string & nome){
  this->nome = nome;
}

Pessoa::Pessoa(){
  cout << "Instância de Pessoa" << endl;
}
