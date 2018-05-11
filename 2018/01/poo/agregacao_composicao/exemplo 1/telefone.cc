#include "telefone.h"

int Telefone::getDdd(){
    return ddd;
}
string Telefone::getNumero(){
    return numero;
}
void  Telefone::setDdd(const int & ddd){
    this->ddd = ddd;
}
void  Telefone::setNumero(const string &numero){
    this->numero = numero;
}