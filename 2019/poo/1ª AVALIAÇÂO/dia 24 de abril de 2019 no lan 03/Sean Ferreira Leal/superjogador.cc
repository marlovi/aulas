#include "superjogador.h"
#include <iostream>


void SuperJogador::setEspecialista(const int &especialista){
    this->especialista = especialista;
}

int SuperJogador::getEspecialista(){
    return this->especialista;
}

int SuperJogador::calcular_eficiencia(){
    int aux = Jogador::calcular_eficiencia();

    return aux * (this->especialista);
}

SuperJogador::SuperJogador(const string &nome) : Jogador(nome){
}