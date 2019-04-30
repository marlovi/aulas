#ifndef SUPERPODER_H
#define SUPERPODER_H

#include <string>
#include <iostream>

using namespace std;
class SuperPoder{
    private:
        string nome;
        double valor;
    public:
        void setNome(const string &);
        string getNome();
        void setValor(const double &);
        double getValor(); 
        SuperPoder();
        ~SuperPoder();

};  


#endif