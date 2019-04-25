#ifndef JOGADOR_H
#define JOGADOR_H
#include<cstdlib>
#include<ctime>
#include <string>

using namespace std;
class Jogador{
    private:
        string nome;
        float overall;
    public:

        float eficiencia();
        void setNome(const string &nome);
        string getNome();
        void setOverall(const float &overall);
        float getOverall();               
        Jogador(string);
        ~Jogador();
};

#endif