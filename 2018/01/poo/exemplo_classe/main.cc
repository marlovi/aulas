#include "carro.h"
#include <iostream>
int main(){


  string cor;
  cout << "Informe a cor " << endl;
  getline(cin,cor);
  Carro* carro;//reserva o espaço de memória -> nullo 
   
  carro = new Carro();// instância de carro na memória
 carro->setCor(cor);

   cout << carro->getCor() << endl;
 
 
  delete carro;
  return 0;
}
