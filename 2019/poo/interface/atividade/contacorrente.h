#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H 
#include "contabancaria.h"
#include "imprimir.h"
#include <iostream>
using namespace std;

class ContaCorrente : public ContaBancaria, Imprimir{
		private:
			double taxaDeOperacao;
		public:
			double getTaxaDeOperacao();
			void setTaxaDeOperacao(const double &); 
			void sacar(const double &); 
			void depositar(const double &);
                        void mostrarDados();
  
	};

#endif
