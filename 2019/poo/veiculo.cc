#include "veiculo.h"

void Veiculo::imprimir(){
    cout << "A Marca é " << this->marca << endl
         << "O Ano do  é " << this->ano << endl
         << "O veiculo é flex "<<  ((this->flex)?" SIM ":" NÂO ")  << endl;

}