#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include <string>

using namespace std;

class Jogador{
    private:
        string nome;
    public:
        void setNome(const string &);
        string getNome();
};
#endif