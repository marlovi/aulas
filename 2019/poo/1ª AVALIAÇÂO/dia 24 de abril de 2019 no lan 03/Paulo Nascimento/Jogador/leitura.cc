#include "leitura.h"
#include <string>

int Leitura::get_int(){
    int x;
    cin >> x;
    return x;
}

float Leitura::get_float(){
    float x;
    cin >> x;
    return x;
}

string Leitura::get_string(){
    string linha;
    getline(cin,linha);
    return linha;
}