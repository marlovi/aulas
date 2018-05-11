#ifndef NEGOCIO_H
#define NEGOCIO_H

#include<vector>
#include <iostream>
#include "pessoa.h"
#include "telefone.h"
#include "endereco.h"
#include "professor.h"
using namespace std;
    class Negocio{
      private:
        vector<Pessoa*> colecao;
      public:
        void inicio();
        int menu();
        Endereco* criarEndereco();
        Pessoa* criarPessoa();
        vector<Telefone*> criarTelefones();
        void imprimir(Pessoa* p);
        void imprimir(Endereco* e);
        void imprimir(Telefone* t);
        void imprimir();


    };

#endif