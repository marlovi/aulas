#ifndef TIME_H
#define TIME_H

using namespace std;

#include<string>
#include <iostream>

class Time{

    private:
        string nome;
        int overall;
        int eficiencia;
        
    public:
        Time(); //construtor
        ~Time(); //destrutor
        string getNome();
        void setNome(const string &);

        int getOverall();
        void setOverall(const int &);

        int getEficiencia();
        void setEficiencia(const int &);
        

       // virtual void imprimir()=0;


};
#endif