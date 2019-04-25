#include "Jogador.h"
#include <iostream>
#include <string>

using namespace std;

void Jogador::setnome(const string &nome){
    this->nome = nome;
}

void Jogador::setover(const int &over){
    this->over = over;
}

string Jogador::getnome(){
    return this->nome;
}

int Jogador::getover(){
    return this->over;
}