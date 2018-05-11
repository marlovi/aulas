#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "pessoa.h"

class Professor : public Pessoa{
    private: 
        int codigo;
        string cpf;
        string siape;
    public:
        int getCodigo();
        string getCpf();
        string getSiape();
        void setCodigo(const int &);
        void setCpf(const string &);
        void setSiape(const string &);
};

#endif