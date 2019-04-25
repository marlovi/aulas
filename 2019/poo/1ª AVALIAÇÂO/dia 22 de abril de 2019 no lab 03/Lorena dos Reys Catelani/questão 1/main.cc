#include "superjogador.h"
#include <cstdlib>

void Imprimir();
jogador* Escrever();

int main(int argc, char * argv){
	Jogador *jogador = Escrever;
	Superjogador *superjogador = Escrever;

	return 0;
}

jogador* Escrever(){

	cout<<"Digite seu nome"<<endl;
	cout<<"Digite seu overall"<<endl;

Jogador *jogador = new Jogador();

}

superjogador* Escrever(){
	cout<<"Digite seu nome"<<endl;
	cout<<"Digite seu overall"<<endl;
	cout<<"Digite sua especialidade"<<endl;
	cin<<espec_aux;
	this->getEspecialista=espec_aux;

Superjogador *superjogador = new Jogador();
}

void Imprimir(){
	this->getEficiencia=++;
	cout<<"Pontos: "<<this->getEficiencia<<endl;
}



