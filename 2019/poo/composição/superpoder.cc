#include "superpoder.h"

void SuperPoder::setNome(const string & nome){
    this->nome = nome;
}
string SuperPoder::getNome(){
    return this->nome;
}
void SuperPoder::setValor(const double &valor){
    this->valor = valor;
}
double SuperPoder::getValor(){
    return this->valor;
}

SuperPoder::SuperPoder(){
    cout << "Objeto superpoder (^.^) criado " << endl; 
}
SuperPoder::~SuperPoder(){
    cout << " :( O Objeto superpoder está sendo desalocado " << endl; 
}