#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include <string>

using namespace std;

class Jogador{
    public:
        void setnome(const string &);
        void setover(const int &);
        string getnome();
        int getover();
    private:
        string nome;
        int over;
};

#endif