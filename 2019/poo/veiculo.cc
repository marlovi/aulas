#include "veiculo.h"

void Veiculo::imprimir(){
    cout << "A Marca é " << this->marca << endl
         << "O Ano do  é " << this->ano << endl
         << "O veiculo é flex "<<  ((this->flex)?" SIM ":" NÂO ")  << endl;

}
Veiculo::Veiculo(){
 
  // cout << " o método construtor está sendo invocado "<<endl;
}
Veiculo::~Veiculo(){
  cout << "Método destrutor de veículo sendo invocado "<<endl;
}

string Veiculo::getMarca(){
  return this->marca;
}
bool Veiculo::isFlex(){
  return this->flex;
}
void Veiculo::setFlex(const bool &flex){
  this->flex = flex;
}
void Veiculo::setAno(const int &ano){
  this->ano = ano;
}
int Veiculo::getAno(){
  return this->ano;
}
void Veiculo::setMarca(const string &marca){
  this->marca = marca;
}
