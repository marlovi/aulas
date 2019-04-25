#include "jogador.h"

Jogador::Jogador(const string &nome)
{
    setNome(nome);
}

void Jogador::setNome(const string &nome)
{
    this->nome = nome;
}

string Jogador::getNome()
{
    return this->nome;
}

void Jogador::setOverall(const float &overall)
{
    this->overall = overall;
}

float Jogador::getOverall()
{
    return this->overall;
}

float Jogador::getEficiencia()
{
    return (rand()%100 + 1)*getOverall();
}