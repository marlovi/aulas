#ifndef PESSOA_H
#define PESSOA_H

#include <vector>
#include<string>
#include "telefone.h"
#include "endereco.h"
using namespace std;
class Pessoa{
    private:
        string nome;
        //Agregacao com telefone
        vector<Telefone*> telefones;
       // vector<Endereco*> enderecos;//composição
        //Telefone* telefone;   //agregação 
        Endereco* endereco;   //composição

    
    public:
        string getNome();
        void setNome(const string &);
        vector<Telefone*> getTelefones();
        void setTelefones(const vector<Telefone*> &) ;
        Endereco* getEndereco();
        void setEndereco(Endereco* endereco);
};

#endif