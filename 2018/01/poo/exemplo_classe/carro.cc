#include "carro.h"


Carro::Carro(){
  //cout << "Carro sendo instânciado" <<endl;
}
Carro::~Carro(){
  //cout << "Destrutor sendo invocado "<<endl;
}

void Carro::setCor(const string & cor){
  this->cor = cor; 
}
string Carro::getCor(){

  //declaracao 
  //parametro 
  //é ao atributo
  return cor;
}

float Carro::precoVenda(){
  return preco +1000; 
}