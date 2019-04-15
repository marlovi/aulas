#include "gameEsportivo.h"
#include <iostream>

using namespace std;

void GameEsportivo::setIndividual(const bool &is)
{
    this->individual = is;
}

bool GameEsportivo::isIndividual()
{
    return this->individual;
}


void GameEsportivo::setEmpate(const bool &is)
{
    this->empate = is;
}

bool GameEsportivo::isEmpate()
{
    return this->empate;
}

void GameEsportivo::imprimir()
{
    Game::imprimir();
    cout << "\033[1;35mIndividual: \033[0m" << this->isIndividual() << endl
         << "\033[1;35mEmpate: \033[0m" << this->isEmpate() << endl;
}