#ifndef LOGICA_H
#define LOGICA_H
#include "Jogador.h"
#include <iostream>
#include <string>
#include <vector>
#include "Leitura.h"

using namespace std;

class Logica{
    public:
        vector <Jogador*> t1;
        vector <Jogador*> t2;
        void menu();
        void criaj1();
        void criaj2();
        void dadosj1();
        void dadosj2();
        void vencedor();
};

#endif