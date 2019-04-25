#ifndef LOGIGA_H
#define LOGIGA_H
#include "jogador.h"
#include "superjogador.h"
#include <vector>
#include <iostream>
#include "leitura.h"

using namespace std;

class Logica
{
private:
    vector<Jogador *> timeA;
    vector<Jogador *> timeB;

public:
    void iniciar();
    int menu();
    void procMenu(const int &);
    void procMenuA(const int &);
    void menuA();
    void procMenuB(const int &);
    void menuB();
    float getTotalA();
    float getTotalB();
    void resultadoFinal();
};

#endif