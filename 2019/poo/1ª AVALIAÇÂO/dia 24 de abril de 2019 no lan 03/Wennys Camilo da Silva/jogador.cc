#include "jogador.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


void Jogador::setNome(const string &nome){
    this->nome = nome;
}
string Jogador::getNome(){
    return this->nome;
}
void Jogador::setOverall(const int &overall){
    this->overall = overall;
}
int Jogador::getOverall(){
    return this->overall;
}
