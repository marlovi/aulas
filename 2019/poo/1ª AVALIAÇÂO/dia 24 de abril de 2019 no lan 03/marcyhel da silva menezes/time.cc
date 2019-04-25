#include "time.h"

string Time::getNome(){
    return this->nome;
}
void Time::setNome(const string &nome){
    this->nome=nome;

}

int Time::getOverall(){
    return this->overall;
}

void Time::setOverall(const int &overall){
    this->overall=overall;
}

int Time::getEficiencia(){
    return this->eficiencia;
}

void Time::setEficiencia(const int &eficiencia){
    this->eficiencia=eficiencia;
}