#include "veiculo.h"


Veiculo::Veiculo(){

  cout <<" Veiculo Instânciado " << endl;  
}
Veiculo::~Veiculo(){
  cout << " Destrutor Veiculo "<<endl;
}
void Veiculo::setNome(const string &nome)
{
  this->nome = nome;
}

string Veiculo::getNome(){
  return this->nome;
}
