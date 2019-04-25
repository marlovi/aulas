#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class Jogador
{	private:
		double overall;
		string nome;
		int especialista;

	public:
		double getOverall();
		double getEficiencia();
		string getNome();
		int getEspecialista();
		void setOverall(const double &);
		void setNome(const string &);
		void setEspecialista(const int &)



Jogador(const double &,const string &);
};

#endif