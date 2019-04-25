#ifndef LOGICA_H
#define LOGICA_H
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "jogador.h"
#include "leitura.h"
#include "superjogador.h"

using namespace std;

class Logica{ 
    private:
        vector<Jogador*>vet;
        vector<Superjogador*>vet1;
    public:
        void iniciar();
        int menu();
        void imprimir();
        Jogador addJogador();
        Superjogador addSuperjogador();
        int resultado();
};
#endif;