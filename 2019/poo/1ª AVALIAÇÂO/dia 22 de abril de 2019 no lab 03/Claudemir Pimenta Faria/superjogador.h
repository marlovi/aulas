#ifndef SUPER_JOGADOR_H
#define SUPER_JOGADOR_H
#include "jogador.h"

class Super_Jogador : public Jogador{
    private:
        int especialista;
    public:
        Super_Jogador();
        int getEspecialista();
        void  setEspecialista(const int &especialista);
        int Eficiencia();
};

#endif