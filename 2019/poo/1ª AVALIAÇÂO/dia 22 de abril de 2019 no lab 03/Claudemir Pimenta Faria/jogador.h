#ifndef JOGADOR_H
#define JOGADOR_H 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "leitura.h"

using namespace std;

class Jogador{
    private:
        string nome;
        int overall;
    public:
        Jogador(/*const string &nome*/);
        string getNome();
        int getOverall();

        void setNome(const string &nome );
        void setOverall(const int &overall );
        int Eficiencia();
};

#endif