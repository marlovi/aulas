#include "veiculo.h"
#include "moto.h"

#include <iostream>


int main(int argc, char** argv){
  Moto* m = new Moto();
  m->setNome("CG 150");

  cout <<  m->getNome() <<endl;

  delete m;
  return 0;
}
