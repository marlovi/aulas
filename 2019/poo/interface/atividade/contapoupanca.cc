#include "contapoupanca.h"

void ContaPoupanca::setLimite(const double &limite){
  this->limite = limite;
}
double ContaPoupanca::getLimite(){
  return this->limite;
}
void ContaPoupanca::depositar(const double &valor){
  setSaldo(getSaldo() + valor);
}

void ContaPoupanca::sacar(const double &valor){
  double totalPossivel = getSaldo() + limite;

  if(valor <= totalPossivel)
    setSaldo( getSaldo() - valor);
}

void ContaCorrente::mostrarDados(){
  cout << "Número da Conta"<< getNumero() <<endl
       << "Saldo " << getSaldo() <<endl
       << "Limite" << this->limite <<endl;
