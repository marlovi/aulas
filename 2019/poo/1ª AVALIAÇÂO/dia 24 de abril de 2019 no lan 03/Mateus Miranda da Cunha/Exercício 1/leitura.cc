#include "leitura.h"

int Leitura::getInt(){
    int x;
    cin >> x;
    return x;
}

string Leitura::getString(){
    string x;
    getline(cin,x);
    return x;
}