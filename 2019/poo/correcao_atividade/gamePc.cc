#include "gamePc.h"
#include <iostream>

using namespace std;


void GamePc::setTamMegaBytes(const double &tam)
{
    this->tamMegaBytes = tam;
}

double GamePc::getTamMegaBytes()
{
    return this->tamMegaBytes;
}

void GamePc::setTamRam(const int &tam)
{
    this->tamRam = tam;
}

int GamePc::getTamRam()
{
    return this->tamRam;
}

void GamePc::setClockProcessador(const double &clock)
{
    this->clockProcessador = clock;
}

double GamePc::getClockProcessador()
{
    return this->clockProcessador;
}

void GamePc::imprimir()
{
    Game::imprimir();
    cout << "\033[1;34mTamanho em disco: \033[0m" << this->getTamMegaBytes() << endl
         << "\033[1;34mRam necessaria: \033[0m" << this->getTamRam() << endl
         << "\033[1;34mClock Processador: \033[0m" << this->getClockProcessador() << endl;
}