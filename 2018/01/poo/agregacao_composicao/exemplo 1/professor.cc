#include "professor.h"


void Professor::setCodigo(const int &codigo){
    this->codigo = codigo;
}
void Professor::setCpf(const string &cpf){
    this->cpf = cpf;
}
void Professor::setSiape(const string & siape){
    this->siape = siape;
}
int Professor::getCodigo(){
    return codigo;
}
string Professor::getCpf(){
    return cpf;
}
string Professor::getSiape(){
    return siape;
}