#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>

using namespace std;

class Jogador{
    private:
        string nome;
        int overall;    
    public:
    
        void setNome(const string &nome);
        void getNome();

        void setOverall(const int &overall);
        void getOverall();

        Jogador();
        void Iniciar();
};
class Superjogador  : public Jogador{
    private:
        int especialista;
    public:
        void setEspecialista(const int &);
        void getEspecialista();
        Superjogador();
};
#endif