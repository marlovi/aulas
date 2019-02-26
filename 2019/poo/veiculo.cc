#include "veiculo.h"

void Veiculo::imprimir(){
    cout << "A Marca é " << this->marca << endl
         << "O Ano do  é " << this->ano << endl
         << "O veiculo é flex "<<  ((this->flex)?" SIM ":" NÂO ")  << endl;

}
Veiculo::Veiculo(string marca){
  this->marca  = marca;
  // cout << " o método construtor está sendo invocado "<<endl;
}
Veiculo::~Veiculo(){
  cout << "Método destrutor de veículo sendo invocado "<<endl;
}
