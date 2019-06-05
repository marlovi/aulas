#ifndef EMPREGADO_H
#define EMPREGADO_H
#include "pessoa.h"
class Empregado : public Pessoa{
    private:
        string registro;
        double salario_base;
        int dias_trabalhados;
        bool estagiario;
    public:
        Empregado(const string &,const string &);
        ~Empregado();
        virtual double quantidadeDeCombustivelGasto() = 0;
        virtual double remuneracaoBruta() = 0;
};

#endif