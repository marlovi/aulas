#ifndef TELEFONE_H
#define TELEFONE_H 

#include <string>
using namespace std;
class Telefone{
    private:
        int ddd;
        string numero; 
    public:
        int getDdd();
        void setDdd(const int &);
        string getNumero();
        void setNumero(const string &);
};

#endif