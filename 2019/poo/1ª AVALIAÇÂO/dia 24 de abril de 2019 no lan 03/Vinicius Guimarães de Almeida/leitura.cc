#include "leitura.h"

Leitura::Leitura(){

}

Leitura::~Leitura(){

}

int Leitura::getInt(){
    int val;
    cin >> val;
    return val;
}

string Leitura::getString(){
    string linha;
    cin >> (cin,linha);
    return linha;
}