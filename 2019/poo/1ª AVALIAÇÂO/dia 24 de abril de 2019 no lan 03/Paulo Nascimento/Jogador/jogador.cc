#include "jogador.h"

Jogador::Jogador(const string &){

}

string Jogador::getNome(){
    return this->nome;
}

void Jogador::setNome(const string &nome){
    this->nome = nome;
}

int Jogador::getOveral(){
    return this->overal;
}

void Jogador::setOveral(const int &over){
    this->overal = over;
}