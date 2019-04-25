#ifndef LOGICA_H
#define LOGICA_H
#include "superjog.h"
#include "jogador.h"
#include "leitura.h"
#include <vector>

using namespace std;

class Logica{
    private:
        vector<Jogador*> jogos;
    public:
        int iniciar();
        int menu();
        void menu1(const int &);
        void InserirJogador(Jogador* jogador);
        void InserirA(Jogador* jogador);
        Logica();

};

#endif