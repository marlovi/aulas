#ifndef LOGICA_H
#define LOGICA_H

#include <iostream>
#include <vector>
#include "game.h"
#include "jogopc.h"
using namespace std;
class Logica{
    private:
        vector<Game*> vetor;
    public:
        void teste(Game* g);
        void teste(JogoPc* p);

        

};

#endif