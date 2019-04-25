#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>


using namespace std;

class Jogador{

    private:
        int overall;
        string nome;
    public:
        Jogador(const string &);
        ~Jogador();
        void setOverall(const int &);
        int getEficiencia();
        string getNome();

};

#endif