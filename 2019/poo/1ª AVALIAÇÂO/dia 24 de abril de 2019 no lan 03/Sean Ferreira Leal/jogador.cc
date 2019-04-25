#include "jogador.h"

void Jogador::setNome(const string &nome){
    this->nome = nome;
}

string Jogador::getNome(){
    return this->nome;
}

void Jogador::setOverall(const int &overall){
    this->overall = overall;
}

int Jogador::getOverrall(){
    return this->overall;
}

void Jogador::setEficiencia(const int &eficiencia){
    this->eficiencia = eficiencia;
}

int Jogador::getEficiencia(){
    return this->eficiencia;
}

int Jogador::calcular_eficiencia(){
    srand((unsigned)time(0));
    int aux = (rand()%(100-1+1) + 1) * (this->overall);

    return aux;
}

Jogador::Jogador(const string &nome){
    this->nome = nome;
}