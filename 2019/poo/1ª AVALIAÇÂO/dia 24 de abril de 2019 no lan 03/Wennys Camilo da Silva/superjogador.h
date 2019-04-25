#ifndef SUPERJOGADOR_H
#define SUPERJOGADOR_H
#include "jogador.h"
#include <string>
#include <iostream>

class Superjogador: public Jogador{
    public:
    int especialista;

    private:
    void setEspecialista(const int &);
    int getEspecialista();

 };

#endif