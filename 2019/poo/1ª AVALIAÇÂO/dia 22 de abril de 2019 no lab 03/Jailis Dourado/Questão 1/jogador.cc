#include "jogador.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Jogador
{
    private:
        string nome;
        int superJogador;
        int eficiencia;

    public:
        void setNome(const string &);
        string getNome();
        void setSuperJogador(const int &);
        int getSuperJogador();
        void setEficiencia(const int &);
        int getEficiencia();

        Jogador();
        ~Jogador();

};