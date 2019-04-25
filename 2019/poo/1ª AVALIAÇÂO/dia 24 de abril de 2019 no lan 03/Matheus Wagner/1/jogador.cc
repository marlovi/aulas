#include "jogador.h"
#include <cstdlib>
#include <ctime>

Jogador::Jogador(const string &nome){
    this->nome = nome;
}

Jogador::~Jogador(){}

void Jogador::setOverall(const int &overall){
    this->overall = overall;
}

int Jogador::getEficiencia(){

    srand((unsigned)time(0));
    return ((rand()%(100-1+1) + 1) * (this->overall));

}

string Jogador::getNome(){
    return this->nome;
}