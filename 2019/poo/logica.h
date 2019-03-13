#ifndef LOGICA_H
#define LOGICA_H
#include "leitura.h"
#include <string>
#include "veiculo.h"
#include "vector"
using namespace std;
class Logica{

    private:
        vector<Veiculo*> vetor;
        int menu();
        Veiculo* criarVeiculo();
        void relatorioVeiculo();
    public:
        void iniciar();
}; 
#endif