#ifndef SUPERJOGADOR_H
#define SUPERJOGADOR_H
#include <iostream>
#include "jogador.h"

using namespace std;

class Superjogador:public Jogador{
    private:
        int overall;
    public:
        void setOverall(const int &);
        int getOverall();
};



#endif