#include "jogador.h"
#include <cstdlib>
#include <ctime>


string Jogador::getNome(){
	return this->nome;
}
int Jogador::getEspecialista(){
	return this->especialista;
}

int Jogador::getOverall(){
	return this->overall;
}

void Jogador::setNome(string &nome){
	this->nome = nome;
}
void Jogador::setEspecialista(int &especialista){
	this->especialista = especialista;
}
void Jogador::setOverall(int &overall){
	this->overall = overall;
}
void Jogador::eficiencia(Jogador *jogador){
	int aux;
	int overall;
	overall = getOverall();
	aux = (rand()%(100-1+1) + 1) * overall;
	this->jog_eficiencia = aux;
}

int Jogador::getjog_eficiencia(){
	return this->jog_eficiencia;
}


