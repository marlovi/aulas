#include "jogador.h"

string Jogador::getNome(){
    return this->nome;
}
int Jogador::getOverall(){
    return this->overall;
}

void Jogador::setNome(const string &nome ){
    this->nome = nome;
}
void Jogador::setOverall(const int &overall ){
    this->overall = overall;
}

int Jogador::Eficiencia(){
    srand((unsigned)time(0));
    return (rand()%(100-1+1) + 1) * this->overall;
}

Jogador::Jogador(){
    Leitura* l = new Leitura();
    string nome;
    cin.ignore();
    cout <<  "Digite o Nome do Jogador" << endl;
    nome = l->getString();
    this->nome = nome;
    //cout << "jogador Instaciado" << endl; 
}