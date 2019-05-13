#include "animal.h"


void Animal::setNome(const string & nome){
    this->nome = nome;
}
string Animal::getNome(){
    return this->nome;
}

//Nõa há codificação do método virtual na superclasse