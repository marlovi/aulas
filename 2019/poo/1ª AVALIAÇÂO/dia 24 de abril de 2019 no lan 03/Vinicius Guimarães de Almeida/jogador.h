#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include <string>

using namespace std;

class Jogador{

    private:
        string nome;
        int overall;
        int habilidade;
    public:
        void setNome(const string &);
        string getNome();
        void setOverall(const int &);
        int getOverall();
        void setHabilidade(const int &);
        int getHabilidade();

        Jogador();
        ~Jogador();
};

#endif