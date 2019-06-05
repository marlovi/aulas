#include "empregado.h"


Empregado::Empregado(const string &nome, const string &registro):Pessoa(nome){
    this->registro = registro;
}
Empregado::~Empregado(){

}

