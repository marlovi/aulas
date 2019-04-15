#ifndef GAMEESPORTIVO_H
#define GAMESPORTIVO_H
#include "game.h"

class GameEsportivo : public Game
{
  private:
    bool individual;
    bool empate;

  public:
    void setIndividual(const bool &);
    bool isIndividual();
    void setEmpate(const bool &);
    bool isEmpate();
    void imprimir();
};

#endif