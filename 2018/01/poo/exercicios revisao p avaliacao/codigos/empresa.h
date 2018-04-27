#ifndef EMPRESA_H
#define EMPRESA_H
#include<string>
#include<iostream>
using namespace std;
class Empresa{
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;
    public:
        Empresa();
        Empresa(const string & nome);
        void setNome(const string & nome);
        string getNome(); 

};
#endif