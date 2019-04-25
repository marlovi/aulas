#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include <string>
#include <vector>
#include<cstdlib>
#include<ctime>


/*srand((unsigned)time(0)) */

using namespace std;


class Jogador{
    private:
        string nome;
        int overal;
    public:
        string getNome();
        void setNome(const string &);
        int getOveral();
        void setOveral(const int &);
        Jogador(const string &);        
        vector<Jogador*>vet;
};

#endif