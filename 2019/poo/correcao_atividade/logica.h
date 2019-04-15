#ifndef LOGICA_H
#define LOGICA_H
#include <vector>
#include "game.h"
#include "gamePc.h"
#include "leitura.h"
#include "gameEsportivo.h"
#include "gameTabuleiro.h"

using namespace std;

class Logica
{
  private:
    vector<Game *> jogos;

  public:
    void iniciar();
    int menuPrincipal();
    void procMenuPrincipal(const int &);
    void inserirGame(Game *);
    void inserirGame(GamePc *);
    void inserirGame(GameTabuleiro *);
    void inserirGame(GameEsportivo *);
    void relatorio();
    Game* busca(const string &);
    void deletar(const string &);
    void alterar(const string &);
    Logica();
    ~Logica();
};

#endif