#ifndef LOGICA_H
#define LOGICA_H
#include "leitura.h"
#include <string>
#include "jogador.h"
#include "vector"

using namespace std;
class Logica{

    private:
        vector<Jogador*>vetor;
        int menu();
        
    public:
        void iniciar();
        Jogador* criarTimeA();
        Jogador* criarTimeB();
        void ler_overall();
        void TimeCampeao();
        
        
}; 
#endif