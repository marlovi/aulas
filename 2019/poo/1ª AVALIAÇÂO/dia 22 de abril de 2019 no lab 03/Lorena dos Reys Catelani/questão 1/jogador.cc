#include "jogador.h"
#include <cstdlib>

double Jogador::getOverall(){
	return this->overall;
}
string Jogador::getNome(){
	return this->nome;
}

double Jogador::getEficiencia(){
	return this->overall*(rand()%(100-1+1)+1);
}

void Jogador::setOverall(const double &overall){
	this->overall = overall;
}

void Jogador::setNome(const string &nome){
	this->nome = nome;
}

Jogador::Jogador(const double &overall, const string &nome){
	this->overall = overall;
	this->nome = nome;
}