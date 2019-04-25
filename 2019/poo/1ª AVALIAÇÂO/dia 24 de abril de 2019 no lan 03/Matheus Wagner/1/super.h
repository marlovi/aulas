#ifndef SUPER_H
#define SUPER_H

#include "jogador.h"

class Super : public Jogador{

    private:
        int especialista;
    public:
        Super(const string &);
        ~Super();
        void setEspecialista(const int &);
        int getEficiencia(); //Sobreescrita

};


#endif