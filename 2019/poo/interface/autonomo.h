#ifndef AUTONOMO_H
#define AUTONOMO_H
#include<string>
#include "acoes.h"
using namespace std;
class Autonomo : public Acoes{
 private:
  string nome;
 public:
  bool baterPonto();
  float receberSalario();
  string getNome();
};
#endif
