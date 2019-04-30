#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
#include  "superpoder.h"
#include <iostream>
using namespace std;
class Personagem{
    private:
        string nome;
        SuperPoder* superPoder;
    public:
        Personagem(SuperPoder* sp);
        ~Personagem();
};


#endif