#include "./leitura.h"
#include <iostream>

using namespace std;

Leitura::Leitura(){};

Leitura::~Leitura(){};

int Leitura::setInt(){
    int a; 
    cin >> a;
    return a;
}

double Leitura::setDouble(){
    double a;
    cin >> a;
    return a;
}

float Leitura::setFloat(){
    float a;
    cin >> a;
    return a;
}
