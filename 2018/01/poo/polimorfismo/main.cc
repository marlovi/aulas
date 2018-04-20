#include <iostream>
#include "calcular.h"

using namespace std;
int main(){

  Calcular* c = new Calcular();

  cout << c->soma(5.f)
       << endl <<
       c->soma(1.f,2.f)
       << endl;
  return 0;

}
