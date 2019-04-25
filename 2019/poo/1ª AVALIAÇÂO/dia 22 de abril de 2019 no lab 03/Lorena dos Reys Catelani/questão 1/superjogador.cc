#include "superjogador.h"

int Superjogador::getEspecialista(){
	return this->especialista;
}

void Superjogador::setEspecialista(const int &especialista){
	this->especialista = this->overall*this->especialista;
}