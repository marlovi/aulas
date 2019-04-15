#ifndef GAMEPC_H
#define GAMEPC_H
#include "game.h"

class GamePc : public Game
{
private:
  double tamMegaBytes;
  int tamRam;
  double clockProcessador;

public:
  void setTamMegaBytes(const double &);
  double getTamMegaBytes();
  void setTamRam(const int &);
  int getTamRam();
  void setClockProcessador(const double &);
  double getClockProcessador();
  void imprimir();
};

#endif