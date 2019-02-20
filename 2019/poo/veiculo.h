#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include <iostream>

using namespace std;
class Veiculo{
    public:
       string marca; 
       int ano;
       bool flex;
       void imprimir();
};

#endif