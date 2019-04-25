#ifndef LOGICA_H
#define LOGICA_H
#include <iostream>
#include<cstdlib>
#include<ctime>
#include <vector>
#include "leitura.h"
#include "jogador.h"

using namespace std;

class Logica{
    private:
        vector<Jogador *> timea;
        vector<Jogador *> timeb;
    public:
        int menu();
        int subMenu();
        void insereJogador();
        void Logica::insereJogador(Jogador *jogador);


};

#endif