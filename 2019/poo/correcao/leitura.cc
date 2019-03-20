#include "leitura.h"


int Leitura::getInt(){
    int valor;
    cin >> valor;
    return valor;      
}
float Leitura::getFloat(){
    float valor;
    cin >> valor;
    return valor;
}
string Leitura::getString(){
    string linha;
    getline( cin , linha); //2 parametros 1 de onde vem o fluxo
    return linha;
}
char Leitura::getChar(){
    char v;
    cin >> v;
    return v;
}

long int Leitura::getLongInt(){
    long int n;
    cin >> n;
    return n;
}