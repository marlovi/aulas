#include "jogador.h"

Jogador::Jogador(){

}

Jogador::~Jogador(){

}

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

void Jogador::setHabilidade(const int &habilidade){
    this->habilidade = habilidade;
}

int Jogador::getHabilidade(){
    return this->habilidade;
}