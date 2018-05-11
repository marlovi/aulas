#ifndef ENDERECO_H
#define ENDERECO_H

#include<string>
using namespace std;

class Endereco{
    private:
        string logradouro;
        string cidade;
        int numero;
    public:
        string getLogradouro();
        string getCidade();
        int getNumero();
        void setLogradouro(const string &);
        void setCidade(const string &);
        void setNumero(const int &);
};
#endif