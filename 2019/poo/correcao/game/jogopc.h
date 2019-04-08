#ifndef JOGOPC_H
#define JOGOPC_H
#include "game.h"

class JogoPc : public Game{
    private:
        int qtdMegasHd;
        int ram;
        float clock;
    public:
    float getClock();
    void setClock(const float &);
    int getQtdMegasHd();
    void setQtdMegasHd(const int &);
    void setRam(const int &);
    int getRam();

    void imprimir();
}; //?? foi determinado alguma herança ?

#endif