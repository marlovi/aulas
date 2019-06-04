#include "contabancaria.h"


string ContaBancaria::getNumero(){
	return this->numero;
}
double ContaBancaria::getSaldo(){
	return this->saldo;
}

void ContaBancaria::setNumero(const string &numero){
	this->numero = numero;
}
void ContaBancaria::setSaldo(const double &saldo){
	this->saldo = saldo; 
}



