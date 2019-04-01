#include "moto.h"

Moto::Moto():Veiculo(){//aqui :)
  this->chassi = "lkajsdhflkajsdhlfkah123";

  
  cout << "Construtor de moto invocado "<< this->chassi  <<endl;
}

Moto::~Moto(){
  cout << "Destrutor Moto "<<endl;
}

void Moto::setNome(const string &nome){
  Veiculo::setNome("MOTO "+ nome);
}
string Moto::getNome(){
  return "O Nome da  "+ Veiculo::getNome() + " :) ";
}



