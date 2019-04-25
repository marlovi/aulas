#ifndef SUPERJOG_H
#define SUPERJOG_H
#include <iostream>
#include "jogador.h"

using namespace std;

class SuperJogador : public Jogador{
    private:
        int especialista;
    public:
        int getEspecialista();
        void setEspecialista(const int &);
        void imprimir();
        SuperJogador();
        SuperJogador(const int &);

};

#endif 