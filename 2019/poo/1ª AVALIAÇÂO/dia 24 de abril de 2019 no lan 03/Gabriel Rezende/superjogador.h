#ifndef SUPERJOGADOR_H
#define SUPERJOGADOR_H
#include "jogador.h"
    class Jogador:class SuperJogador{
       public:
       int especialista;
       SuperJogador(const string nome);
       private:
       void setEspecialista();
       int getEspecialista(const int & especialista);
    };


#endif