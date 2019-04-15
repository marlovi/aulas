#include "./leitura.h"
#include <iostream>

Leitura::Leitura(){};

Leitura::~Leitura(){};

int Leitura::getInt()
{
    int val;
    cin >> val;
    return val;
}

long int Leitura::getLongInt()
{
    long int val;
    cin >> val;
    return val;
}

double Leitura::getDouble()
{
    double val;
    cin >> val;
    return val;
}

long double Leitura::getLongDouble()
{
    long double val;
    cin >> val;
    return val;
}

string Leitura::getString()
{
    string val;
    getline(cin,val);
    return val;
}

bool Leitura::getBool()
{
    bool val;
    cin >> val;
    return val;
}