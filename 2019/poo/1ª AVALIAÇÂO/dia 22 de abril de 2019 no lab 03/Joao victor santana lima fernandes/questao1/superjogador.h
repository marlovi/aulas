#ifndef SUPERJOGADOR_H
#define SUPERJOGADOR_H
#include "jogador.h"

using namespace std;

class Superjogador : public Jogador
{
private:
    int especialidade;
public:
    void setEspecialidade(const int &);
    int getEspecialidade();
    float getEficiencia();
    Superjogador(const string &);
};

#endif