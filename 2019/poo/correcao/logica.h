#ifndef LOGICA_H
#define LOGICA_H

#include <iostream>
#include "aluno.h"
#include "leitura.h"
#include <vector>
using namespace std;

class Logica{
    private:
        vector<Aluno*> vetor; 
        int menu();
        Aluno* criarAluno();
        void imprimirAluno(Aluno* a);
       
    public:
        void iniciar();
        
};


#endif