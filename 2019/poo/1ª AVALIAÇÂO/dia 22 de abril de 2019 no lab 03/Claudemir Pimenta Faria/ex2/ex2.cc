#include "ex2.h"

// ##### Funcionamento dos metodos de encapsulamento ######

int Classe::getAtriburo(){
    return this->atributo;
}
bool Classe::isClasse(){
    return this->classe;
}
void Classe::setAtributo(const int &atributo){
    this->atributo = atributo;
}
void Classe::setClasse(const bool &classe){
    this->classe = classe;
}