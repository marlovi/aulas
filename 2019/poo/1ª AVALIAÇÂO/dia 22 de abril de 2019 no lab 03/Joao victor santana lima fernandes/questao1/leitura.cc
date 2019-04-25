#include "leitura.h"

int Leitura::getInt()
{
    int a;
    cin >> a;
    return a;
}

float Leitura::getFloat()
{
    float a;
    cin >> a;
    return a;
} 

string Leitura::getString()
{
    string a; 
    getline(cin, a);
    return a;
}