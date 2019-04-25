#include "superjog.h"

SuperJogador::SuperJogador(){}

/*SuperJogador::SuperJogador(const int &eficiencia){
    Jogador: this->setEspecialista * eficiencia;
}*/

void SuperJogador::imprimir(){
    Jogador::imprimir();
    cout << "Especialista: " << this->getEspecialista() << endl;
}

int SuperJogador::getEspecialista(){
    return this->especialista = especialista;
}

void SuperJogador::setEspecialista(const int &especialista){
    this->especialista;
}

