#include "jogador.h"
#include <iostream>


void Jogador::imprimir(){
    cout << "Nome:" << this->getNome() << endl
         << "Overall:" << this->getOverall() << endl
         << "Eficiencia" << this->getEficiencia() << endl;         
}

Jogador::Jogador(){}

Jogador::Jogador(const string &nome){
    this->setNome(nome);
}

Jogador::Jogador(const int &especialista){
    this->setEficiencia(eficiencia);
}

int Jogador::getOverall(){
    return this->overall = overall;
}
string Jogador::getNome(){
    return this->nome = nome;
}
int Jogador::getEficiencia(){
    return this->eficiencia = eficiencia;
}

void Jogador::setOverall(const int &overall){
    this->overall;
}
void Jogador::setNome(const string &nome){
    this->nome;
}
void Jogador::setEficiencia(const int &eficiencia){
    this->eficiencia;
}