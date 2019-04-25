#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>

void setNome(const string &nome)
{
    this->nome = nome;
}
string getNome()
{
    return this->nome;
}
void setSuperJogador(const int &superJogador)
{
    this->superJogador = superJogador;
}
int getSuperJogador()
{
    return this->superJogador;
}
void setEficiencia(const int &eficiencia)
{
    this->eficiencia = eficiencia;
}
int getEficiencia()
{
    return this->eficiencia;
}

#endif