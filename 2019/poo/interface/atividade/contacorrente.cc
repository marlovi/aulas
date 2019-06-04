#include "contacorrente.h"

double ContaCorrente::getTaxaDeOperacao(){
	return this->taxaDeOperacao;
}
void ContaCorrente::setTaxaDeOperacao(const double &taxaDeOperacao){
	this->taxaDeOperacao = taxaDeOperacao;
}
void ContaCorrente::sacar(const double &saque){
	setSaldo(getSaldo() - (saque+taxaDeOperacao));
}
void ContaCorrente::depositar(const double &valor){
	setSaldo( getSaldo() + (valor-taxaDeOperacao) );
}	

void ContaCorrente::mostrarDados(){
  cout << "Número da Conta"<< getNumero() <<endl
       << "Saldo " << getSaldo() <<endl
       << "Taxa de Operação " << getTaxaDeOperacao() <<endl;
     
}
