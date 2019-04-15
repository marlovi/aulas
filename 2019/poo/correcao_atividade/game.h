#ifndef GAME_H
#define GAME_H

#include <string>

using namespace std;

class Game
{
private:
  string nome;
  int faixaEtariaIndicada;
  string produtora;
  string estilo;
  long double valor;
  string dataLancamento;

public:
  void setNome(const string &);
  string getNome();
  void setFaixaEtariaIndicada(const int &);
  int getFaixaEtariaIndicada();
  void setProdutora(const string &);
  string getProdutora();
  void setEstilo(const string &);
  string getEstilo();
  void setValor(const long double &);
  long double getValor();
  void setDataLancamento(const string &);
  string getDataLancamento();
  virtual void imprimir() = 0;
  Game();
  Game(const string &);
};

#endif