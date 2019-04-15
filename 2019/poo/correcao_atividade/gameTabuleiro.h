#ifndef GAMETABULEIRO_H
#define GAMETABULEIRA_H
#include "game.h"

class GameTabuleiro : public Game
{
  private:
    int numeroJogadores;
    bool empate;

  public:
    void setNumeroJogadores(const int &);
    int getNumeroJogadores();
    void setEmpate(const bool &);
    bool isEmpate();
    void imprimir();
};

#endif