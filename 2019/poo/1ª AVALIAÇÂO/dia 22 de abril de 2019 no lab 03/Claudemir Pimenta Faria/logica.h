#ifndef LOGICA_H
#define LOGICA_H
#include "superjogador.h"
#include <vector>

class Logica{
    private:
        vector <Super_Jogador*> timeA;
        vector <Super_Jogador*> timeB;
        
        void CriarJogador();
        Super_Jogador* NovoJogador();
        int menu();
    public:
        void inicio();
        void resultado();



};

#endif 