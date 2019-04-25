#ifndef SUPERJOGADOR_H
#define SUPERJOGADOR_H
#include "jogador.h"

class SuperJogador : public Jogador{
    private:
        int especialista;

    public:
        void setEspecialista(const int &);
        int getEspecialista();

        int calcular_eficiencia();

        SuperJogador(const string &);
};

#endif
