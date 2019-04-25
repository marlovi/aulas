#ifndef LOGICA_H
#define LOGICA_H
#include "superjog.h"
#include "jog.h"
#include <vector>

using namespace std;

class Logica{
    vector<Jogador* > vetA;

    vector<SuperJogador* > vetB;

  public:
    void iniciar();
    void cadastro1(Jogador* jog, string nome);
    void cadastro2(SuperJogador* s, string nome);
    void TimeEfic();
    void imprimir();
    int menu1();
    int menu2();
};

#endif