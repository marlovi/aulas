#ifndef JOG_H
#define JOG_H 
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Jogador{
    private:
        string nome;
        int overall;
        long int efic;
        long int time;

    public:
        Jogador();
        ~Jogador();

        string getNome();
        void setNome(const string &);

        int getOverall();
        void setOverall(const int &);

        long int getEfic();
        void setEfic(const long int &);

        long int getTime();
        void setTime(const long int &);

};



#endif