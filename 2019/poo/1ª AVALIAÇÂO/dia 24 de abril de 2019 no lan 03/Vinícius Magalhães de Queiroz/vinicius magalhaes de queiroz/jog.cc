#include "jog.h"
Jogador::Jogador(){

}
Jogador::~Jogador(){

}
string Jogador::getNome(){
    return this->nome;
}

void Jogador::setNome(const string &nome){
    this->nome = nome;
}

int Jogador::getOverall(){
    return this->overall;

}
void Jogador::setOverall(const int &overall){
    this->overall = overall;
}

long int Jogador::getEfic(){
    return this->efic;
}
void Jogador::setEfic(const long int &efic){
    
    this->efic = efic;
}

long int Jogador::getTime(){
    return this->time;
}
void Jogador::setTime(const long int &t){
    this->time = t;
}