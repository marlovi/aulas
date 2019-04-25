#ifndef SUPERJOGADOR_H
#define SUPERJOGADOR_H
#include "jogador.h"

using namespace std;

class Superjogador: public Jogador{
    private:
        int especialista;
    public:
        void setEspecialista(const int &);
        int getEspecialista();
        float eficiencia();

};
#endif