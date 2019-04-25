#include "super.h"

Super::Super(const string &nome):Jogador(nome){}

Super::~Super(){}

void Super::setEspecialista(const int &especialista){
    if((especialista<=0)||(especialista>10)){ 
        cout << "..Especialidade Inválida.." << endl;
        return;
    }
    this->especialista = especialista;
}

int Super::getEficiencia(){

    return (Jogador::getEficiencia() * (this->especialista));
}