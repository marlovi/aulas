#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>


using namespace std;

class Animal{
    public:
        string getNome();
        void setNome(const string &);
        virtual void comer() =0 ; // itálico
    private:
        string nome;

};

#endif