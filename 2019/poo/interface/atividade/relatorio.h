#ifndef RELATORIO_H
#define RELATORIO_H
#include "imprimir.h"
class Relatorio{
 public:
  virtual void gerarRelatorio(Imprimir* imprimir) =0;
};

#endif
