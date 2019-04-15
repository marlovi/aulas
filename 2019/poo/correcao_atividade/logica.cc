#include "logica.h"

#include <iostream>
#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;

Logica::Logica(){};

Logica::~Logica(){};

void Logica::iniciar()
{
    int op;
    do
    {
        op = this->menuPrincipal();
        this->procMenuPrincipal(op);
    } while (op != 0);
}

int Logica::menuPrincipal()
{
    Leitura *l = new Leitura();
    cout << "Opcao 1:..................Jogo de Computador" << endl;
    cout << "Opcao 2:......................Jogo Esportivo" << endl;
    cout << "Opcao 3:......................Jogo Tabuleiro" << endl;
    cout << "Opcao 4:.................Relatorio dos jogos" << endl;
    cout << "Opcao 5:.........................Buscar Jogo" << endl;
    cout << "Opcao 6:...............Deletar jogo por nome" << endl;
    cout << "Opcao 7:...............Alterar jogo por nome" << endl;
    cout << "Opcao 0:................................Sair" << endl;
    cout << "Informe a opcao desejada: ";
    return l->getInt();
}

void Logica::procMenuPrincipal(const int &op)
{
    switch (op)
    {
    case 0:
    {
        cout << "Saindo" << endl;
        break;
    }

    case 1:
    {
        // Inserir jogo de PC
        GamePc *game = new GamePc();
        inserirGame((Game *)game);
        inserirGame(game);
        jogos.push_back(game);
        break;
    }

    case 2:
    {
        // Inserir jogo de esportivo
        GameEsportivo *game = new GameEsportivo();
        inserirGame((Game *)game);
        inserirGame(game);
        jogos.push_back(game);
        break;
    }

    case 3:
    {
        // Inserir jogo de tabuleiro
        GameTabuleiro *game = new GameTabuleiro();
        inserirGame((Game *)game);
        inserirGame(game);
        jogos.push_back(game);
        break;
    }

    case 4:
    {
        relatorio();
        break;
    }

    case 5:
    {
        Leitura *l = new Leitura();
        cin.ignore();
        cout << "Informe o nome do jogo: ";
        string nome = l->getString();
        Game *g = busca(nome);
        if (g != NULL)
        {
            ((Game *)(g))->imprimir();
            cout << endl
                 << "\033[1;31m=========================================================================\033[0m"
                 << endl
                 << endl;
        }
        else
        {
            cout << "Jogo não encontrado" << endl;
        }
        break;
    }
    case 6:
    {
        Leitura *l = new Leitura();
        cout << "Informe um nome para apagar: ";
        cin.ignore();
        string nome = l->getString();
        deletar(nome);
        break;
    }
    case 7:
    {
        Leitura *l = new Leitura();
        cout << "Informe um nome para alterar: ";
        cin.ignore();
        string nome = l->getString();
        alterar(nome);
        break;
    }

    default:
        break;
    }
}

void Logica::inserirGame(Game *game)
{
    cout << "Inserir game" << endl;
    Leitura *l = new Leitura();
    cout << "Infome o nome do jogo: ";
    cin.ignore();
    game->setNome(l->getString());
    cout << "Informe a faixa etaria: ";
    game->setFaixaEtariaIndicada(l->getInt());
    cout << "Informe a produtora: ";
    cin.ignore();
    game->setProdutora(l->getString());
    cout << "Informe o estilo: ";
    game->setEstilo(l->getString());
    cout << "Informe o valor: ";
    game->setValor(l->getLongDouble());
    cout << "Informe a data de lancamento: ";
    cin.ignore();
    game->setDataLancamento(l->getString());
    delete l;
}

void Logica::inserirGame(GamePc *game)
{
    cout << "Inserir game PC" << endl;

    Leitura *l = new Leitura();
    cout << "Informe o tamanho em megabytes: ";
    game->setTamMegaBytes(l->getDouble());
    cout << "Informe a ram necessaria: ";
    cin.ignore();
    game->setTamRam(l->getInt());
    cout << "Informe o clock do processador: ";
    game->setClockProcessador(l->getDouble());
    cin.ignore();
    delete l;
}

void Logica::inserirGame(GameTabuleiro *game)
{
    cout << "Inserir game Tabuleiro" << endl;

    Leitura *l = new Leitura();
    cout << "Numero de jogadores: ";
    game->setNumeroJogadores(l->getInt());
    cout << "Empate: ";
    game->setEmpate(l->getBool());
    cin.ignore();
    delete l;
}

void Logica::inserirGame(GameEsportivo *game)
{
    cout << "Inserir game Esportivo" << endl;

    Leitura *l = new Leitura();
    cout << "Individual?: ";
    game->setIndividual(l->getBool());
    cout << "Empate?: ";
    game->setEmpate(l->getBool());
    cin.ignore();
    delete l;
}

void Logica::relatorio()
{
    for (vector<Game *>::iterator it = jogos.begin(); it != jogos.end(); it++)
    {
        (*it)->imprimir();
        cout << endl
             << "\033[1;31m=========================================================================\033[0m"
             << endl
             << endl;
    }
}

Game *Logica::busca(const string &nome)
{
    for (vector<Game *>::iterator it = jogos.begin(); it != jogos.end(); it++)
    {
        if ((*it)->getNome().compare(nome) == 0)
        {
            return *it;
        }
    }
    return NULL;
}

void Logica::deletar(const string &nome)
{
    for (vector<Game *>::iterator it = jogos.begin(); it != jogos.end(); it++)
    {
        if ((*it)->getNome().compare(nome) == 0)
        {
            jogos.erase(it);
            cout << "jogo removido" << endl;
            it = jogos.end();
            break;
        }
    }
}

void Logica::alterar(const string &nome)
{
    for (vector<Game *>::iterator it = jogos.begin(); it != jogos.end(); it++)
    {
        if ((*it)->getNome().compare(nome) == 0)
        {
            cout << "Inserir game" << endl;
            Leitura *l = new Leitura();
            cout << "Infome o nome do jogo: ";
            ((Game *)(*it))->setNome(l->getString());
            cout << "Informe a faixa etaria: ";
            ((Game *)(*it))->setFaixaEtariaIndicada(l->getInt());
            cout << "Informe a produtora: ";
            cin.ignore();
            ((Game *)(*it))->setProdutora(l->getString());
            cout << "Informe o estilo: ";
            ((Game *)(*it))->setEstilo(l->getString());
            cout << "Informe o valor: ";
            ((Game *)(*it))->setValor(l->getLongDouble());
            cout << "Informe a data de lancamento: ";
            cin.ignore();
            ((Game *)(*it))->setDataLancamento(l->getString());

            if (dynamic_cast<GamePc *>(*it) != 0)
            {
                GamePc *game = reinterpret_cast<GamePc *>(*it);
                cout << "Informe o tamanho em megabytes: ";
                game->setTamMegaBytes(l->getDouble());
                cout << "Informe a ram necessaria: ";
                cin.ignore();
                game->setTamRam(l->getInt());
                cout << "Informe o clock do processador: ";
                game->setClockProcessador(l->getDouble());
                cin.ignore();
            }
            else if (dynamic_cast<GameEsportivo *>(*it) != 0)
            {
                GameEsportivo *game = reinterpret_cast<GameEsportivo *>(*it);

                Leitura *l = new Leitura();
                cout << "Individual?: ";
                game->setIndividual(l->getBool());
                cout << "Empate?: ";
                game->setEmpate(l->getBool());
                cin.ignore();
            }
            else if (dynamic_cast<GameTabuleiro *>(*it) != 0)
            {
                GameTabuleiro *game = reinterpret_cast<GameTabuleiro *>(*it);
                Leitura *l = new Leitura();
                cout << "Numero de jogadores: ";
                game->setNumeroJogadores(l->getInt());
                cout << "Empate: ";
                game->setEmpate(l->getBool());
                cin.ignore();
            }
            it = jogos.end();
            break;
        }
    }
}