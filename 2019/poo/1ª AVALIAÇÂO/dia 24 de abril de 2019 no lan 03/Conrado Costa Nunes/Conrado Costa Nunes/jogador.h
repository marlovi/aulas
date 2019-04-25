#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
#include <vector>
using namespace std;
class Jogador{
    private: 
        
        char nome;
        int overall;
        int eficiencia;
    public:
        char getNome();
        void setNome(const char &);
        void jogador(const char &);
        int getEficienciaA();
        void setEficienciaA(const int &);
        int getEficienciaB();
        void setEficienciaB(const int &);
        
};
#endif