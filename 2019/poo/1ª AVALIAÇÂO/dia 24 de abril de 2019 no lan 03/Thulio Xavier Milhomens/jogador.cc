#include "jogador.h"
#include "iostream"
#include <string>

using namespace std;

void Jogador::setNome(const string &nome)
{
    this->nome = nome;
};
string Jogador::getNome()
{
    return nome;
};
void Jogador::setOverall(const int &overall)
{
    this->overall = overall;
};
int Jogador::setOverall()
{
    return overall;
};
