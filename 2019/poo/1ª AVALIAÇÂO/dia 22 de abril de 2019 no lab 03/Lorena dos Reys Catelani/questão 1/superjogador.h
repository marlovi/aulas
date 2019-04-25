#ifndef SUPERJOGADOR_H
#define SUPERJOGADOR_H
#include <string>
#include <iostream>
#include <cstdlib>
#include "jogador.h"

using namespace std;

class Superjogador : public Jogador 
{	private: 
		int especialista;

	public:
		int getEspecialista();
		void setEspecialista(const int &);

};

#endif