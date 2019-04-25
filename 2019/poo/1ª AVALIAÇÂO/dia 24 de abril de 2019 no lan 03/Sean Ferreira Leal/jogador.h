#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Jogador{
    private:
        string nome;
        int overall;
        int eficiencia;

    public:
        void setNome(const string &);
        string getNome();

        void setOverall(const int &);
        int getOverrall();

        void setEficiencia(const int &);
        int getEficiencia();

        int calcular_eficiencia();
        Jogador(const string &);
};

#endif