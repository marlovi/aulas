#include "superjogador.h"
#include <iostream>

using namespace std;

void Superjogador::setEspecialista(const int &especialista){
    this->especialista = especialista;
}
int Superjogador::getEspecialista(){
    return this->especialista;
}