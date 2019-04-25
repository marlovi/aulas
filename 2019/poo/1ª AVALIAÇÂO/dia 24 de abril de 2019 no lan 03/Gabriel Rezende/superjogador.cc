#include "superjogador.h"

SuperJogador::SuperJogador(const string & nome){
    this->nome = nome;
}
void SuperJogador::setEspecialista(){
    this->especialista=especialista;
}
int SuperJogador::getEspecialista(const int & especialista){
    return (rand(especialista)%(100-1+1) + 1) * overall);
}