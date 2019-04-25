#include <iostream>
#include "jogador.h"
#include "leitura.h"
#include <string>
#include<cstdlib>
#include<ctime>

int main(int argv, char **argc ){

    Leitura *l = new Leitura();
    Jogador *time_A = new Jogador(l->get_string());  
    Jogador *time_B = new Jogador(l->get_string());
  

   

}