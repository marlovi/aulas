#include "leitura.h"
#include "iostream"
using namespace std;
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
    getline( cin , linha); 
    return linha;
}
char Leitura::getChar(){
    char v;
    cin >> v;
    return v;
}
