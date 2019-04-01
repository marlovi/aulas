#ifndef MOTO_H
#define MOTO_H

#include "veiculo.h"

class Moto : public Veiculo {
 private:
 public:
  Moto();
  ~Moto();
  void setNome(const string &);
  string getNome();//sobreescrita 
 protected:
};

#endif
