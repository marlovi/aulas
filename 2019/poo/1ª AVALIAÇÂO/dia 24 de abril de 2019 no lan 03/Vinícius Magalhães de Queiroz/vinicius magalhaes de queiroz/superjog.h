#ifndef SUPERJOG_H
#define SUPERJOG_H
#include <iostream>
#include "jog.h"
using namespace std;

class SuperJogador : public Jogador{
  private:
    int especialidade;

  public:
    SuperJogador();
    ~SuperJogador();

    int getEspecialidade();
    void setEspecialidade(const int &);
};

#endif