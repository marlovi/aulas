#include "./game.h"
#include <iostream>

Game::Game(){};

Game::Game(const string &nome)
{
    this->setNome(nome);
}

void Game::setNome(const string &nome)
{
    this->nome = nome;
}

string Game::getNome()
{
    return this->nome;
}

void Game::setFaixaEtariaIndicada(const int &idade)
{
    this->faixaEtariaIndicada = idade;
}

int Game::getFaixaEtariaIndicada()
{
    return this->faixaEtariaIndicada;
}

void Game::setProdutora(const string &produtora)
{
    this->produtora = produtora;
}

string Game::getProdutora()
{
    return this->produtora;
}

void Game::setEstilo(const string &estilo)
{
    this->estilo = estilo;
}

string Game::getEstilo()
{
    return this->estilo;
}

void Game::setValor(const long double &valor)
{
    this->valor = valor;
}

long double Game::getValor()
{
    return this->valor;
}

void Game::setDataLancamento(const string &lancamento)
{
    this->dataLancamento = lancamento;
}

string Game::getDataLancamento()
{
    return this->dataLancamento;
}

void Game::imprimir()
{
    cout << endl
         << "\033[1;33mNome: \033[0m" << this->getNome() << endl
         << "\033[1;33mFaixa Etaria:\033[0m" << this->getFaixaEtariaIndicada() << endl
         << "\033[1;33mProdutora: \033[0m" << this->getProdutora() << endl
         << "\033[1;33mEstilo: \033[0m" << this->getEstilo() << endl
         << "\033[1;33mValor: \033[0m" << this->getValor() << endl
         << "\033[1;33mData lancamento: \033[0m" << this->getDataLancamento() << endl;
}