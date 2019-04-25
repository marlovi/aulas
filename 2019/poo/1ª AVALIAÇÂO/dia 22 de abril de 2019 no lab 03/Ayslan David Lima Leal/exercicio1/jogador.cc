#include "jogador.h"

void Jogador::setNome(const string &nome){
    this->nome = nome;
};

string Jogador::getNome(){
    return this->nome;
}

void Jogador::setOverall(const float &overall){
    this->overall = overall;
}

float Jogador::eficiencia(){
    return (rand()%(100-1+1) + 1) * this->overall;
}


