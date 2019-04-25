#include "leitura.h"
#include <iostream>

int Leitura::getInt(){
    int val;
    cin >> val;
    return val;
}

string Leitura::getString(){
    string linha;
    getline (cin,linha);
    return linha;
}