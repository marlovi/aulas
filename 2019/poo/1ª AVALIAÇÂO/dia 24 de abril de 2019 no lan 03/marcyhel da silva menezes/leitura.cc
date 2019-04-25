#include "leitura.h"

char Leitura::getChar(){
    char letra;
    cin >> letra;
    return letra;
}

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
    string palavra;
    setbuf(stdin,NULL);
    getline(cin, palavra);
    return palavra;
}

long int Leitura::getLongint(){
    long int valor;
    cin >> valor;
    return valor;
}

double Leitura::getDouble(){
    double valor;
    cin>>valor;
    return valor;
}

long double Leitura::getLongDouble(){
    long double valor;
    cin>>valor;
    return valor;
}

