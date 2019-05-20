#include "autonomo.h"
#include <iostream>
#include "enfermeiro.h" 
using namespace std;

void imprimir(Acoes* a){
   cout << a->baterPonto() << endl; 
   cout << a->receberSalario() << endl;
}


int main(int argc, char** argv){
  
  
  imprimir(new Enfermeiro());
 
  imprimir(new Autonomo()); 

  
return 0;
}
