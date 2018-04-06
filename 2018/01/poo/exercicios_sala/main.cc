#include "invoice.h"
#include <iostream>

using namespace std;

int main(){
	//Instância , o qué uma função ?? 
	//O que é um Objeto ???? 
	// o que é uma instancia ??? 
	//Classe, é uma abstração para representar algo que existe ou não 
	Invoice* itemBarato = new Invoice("Caneta",203, 600, 5.60);
	cout << itemBarato->getDescricao() <<endl;
	itemBarato->setDescricao("Caneta big ");
	cout << itemBarato->getDescricao() <<endl;


	Invoice* compactor = new Invoice("Compactor",20,50,6.00);

	cout << itemBarato->getDescricao() <<endl << compactor->getDescricao() << endl;
  return 0;
}
