#include "superjogador.h"

Superjogador::Superjogador(const string &nome) : Jogador(nome){};

float Superjogador::getEficiencia()
{
    float x = Jogador::getEficiencia();
    return x*getEspecialidade();
}

void Superjogador::setEspecialidade(const int &e)
{
    this->especialidade = e;
}

int Superjogador::getEspecialidade()
{
    return this->especialidade;
}