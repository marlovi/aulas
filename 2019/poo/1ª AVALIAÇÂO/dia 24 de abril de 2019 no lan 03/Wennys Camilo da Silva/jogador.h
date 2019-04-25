#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
#include <iostream>

using namespace std;

class Jogador{

    public:
    string nome;
    int overall;

    private:
    void setNome(const string &);
    string getNome();

    void setOverall(const int &);
    int getOverall();

};

#endif