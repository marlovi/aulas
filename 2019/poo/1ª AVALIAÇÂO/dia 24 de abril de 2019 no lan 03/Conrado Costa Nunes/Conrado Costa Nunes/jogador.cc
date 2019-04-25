#include "jogador.h"
#include "leitura.h"
#include "iostream"

void Jogador::jogador(const char &nome){
    this->nome = nome;
} 

char Jogador::getNome(){
    return this->nome;
}
void Jogador::setNome(const char &nome){
    this->nome = nome;
}

int Jogador::getEficienciaA(){
    Leitura* l = new Leitura();
    return this->eficiencia = ( rand()%(100-1+1) + 1) * (l->getInt());
}
void Jogador::setEficienciaA(const int &eficiencia){
   
    this->eficiencia = eficiencia;;
}
int Jogador::getEficienciaB(){
    Leitura* l = new Leitura();
    return this->eficiencia = ( rand()%(100-1+1) + 1) * (l->getInt());
}
void Jogador::setEficienciaB(const int &eficiencia){
   
    this->eficiencia = eficiencia;
}