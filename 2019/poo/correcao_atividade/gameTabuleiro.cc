#include "gameTabuleiro.h"
#include <iostream>

using namespace std;

void GameTabuleiro::setNumeroJogadores(const int &num)
{
    this->numeroJogadores = num;
}

int GameTabuleiro::getNumeroJogadores()
{
    return this->numeroJogadores;
}

void GameTabuleiro::setEmpate(const bool &empate)
{
    this->empate = empate;
}

bool GameTabuleiro::isEmpate()
{
    return this->empate;
}

void GameTabuleiro::imprimir()
{
    Game::imprimir();
    cout << "\033[1;32mNumero Jogadores: \033[0m" << this->getNumeroJogadores() << endl
         << "\033[1;32mEmapate: \033[0m" << this->isEmpate() << endl;
}
