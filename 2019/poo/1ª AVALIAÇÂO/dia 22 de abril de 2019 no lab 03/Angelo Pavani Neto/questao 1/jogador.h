#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include <string>

using namespace std;
class Jogador{
private:
	string nome;
	int especialista;
	int overall;
	int jog_eficiencia;

public:
	string getNome();
	int getEspecialista();
	int getjog_eficiencia();
	int getOverall();

	void setNome(string &);
	void setEspecialista(int &);
	void setOverall(int &);
	void eficiencia(Jogador *);






};

#endif