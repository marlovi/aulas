#ifndef ENFERMEIRO_H
#define ENFERMEIRO_H
#include "acoes.h"
class Enfermeiro : public Acoes{
 public:
  float receberSalario();
  bool baterPonto();
}; 

#endif
