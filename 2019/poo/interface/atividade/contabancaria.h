#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <string>
using namespace std;
	class ContaBancaria{

		private:
			string numero; // 10.216-258   // 102345  
			double saldo;

		public:
			string getNumero(); 
			double getSaldo(); 
			void setNumero(const string &);
			void setSaldo(const double &); 
			virtual void sacar(const double &) =0;
			virtual void depositar(const double &) = 0;
	};


#endif
