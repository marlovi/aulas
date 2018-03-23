#include "invoice.h"
#include <iostream>

using namespace std;

int main(){
  Invoice* x;
  x = new Invoice("Fatura venceu a um ano e o juro é de 382%");

  cout << x->getDescricao() << endl; 
  return 0;
}
