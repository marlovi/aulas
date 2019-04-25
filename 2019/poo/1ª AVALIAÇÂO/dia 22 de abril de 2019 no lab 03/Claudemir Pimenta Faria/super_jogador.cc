#include "superjogador.h"

int Super_Jogador::getEspecialista(){
    return this->especialista;
}
void Super_Jogador::setEspecialista(const int &especialista){
    this->especialista = especialista;
}
int Super_Jogador::Eficiencia(){
    int x;
    x = Jogador::Eficiencia() * this->especialista;
    return x;
}

Super_Jogador::Super_Jogador(){
    //cout << "Super Jogador instaciando" << endl;
}