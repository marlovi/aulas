#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>

using namespace std;

class Jogador {
    private:
        int overall;
        string nome;
        int eficiencia;
    public:
        int getOverall();
        string getNome();
        int getEficiencia();
        void setOverall(const int &);
        void setNome (const string &);
        void setEficiencia(const int &);
        virtual void imprimir();
        Jogador();
        Jogador(const string &);
        Jogador(const int &);
};

#endif