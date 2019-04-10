#ifndef LOGICA_H
#define LOGICA_H

#include <iostream>
#include <vector>
#include "game.h"
#include "jogopc.h"
#include "leitura.h"
using namespace std;
class Logica{
    private:
        vector<Game*> vetor;
    public:
        void cadastro(JogoPc* j);
        void cadastro(Game* g);
        void iniciar(); 
        int menu();
        Game* pesquisar(const string &);
        void imprimir(Game* g);
        void imprimir(JogoPc* g);

};

#endif