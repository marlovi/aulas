#include "superjogador.h"

void Superjogador::setEspecialista(const int &especialista){
    this->especialista = especialista;
}

int Superjogador::getEspecialista(){
    return this->especialista;
}

float Superjogador::eficiencia(){
    return Jogador::eficiencia() * this->getEspecialista();
}
