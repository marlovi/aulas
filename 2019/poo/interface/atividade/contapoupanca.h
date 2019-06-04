#ifndef POUPANCA_H
#define POUPANCA_H

#include "contabancaria.h"
class ContaPoupanca : public ContaBancaria, Imprimir {
 private:
  double limite;
 public:
  void setLimite(const double &);
  double getLimite();
  void sacar(const double &valor);
  void depositar(const double &valor);
  void mostrarDados();
};

#endif
