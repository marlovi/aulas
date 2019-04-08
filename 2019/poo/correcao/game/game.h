#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
using namespace std;
class Game{

    private:
        string nome;
        int faixaEtaria;
        string produtora;
        string estilo;
        long double valor;
        string dataLancamento; 
    public:
        void setNome(const string &);
        string getNome();
        void setFaixaEtaria(const int &);
        int getFaixaEtaria();
        void setProdutora(const string &);
        string getProdutora();
        void setEstilo(const string &);
        string getEstilo();
        void setValor(const long double &);
        long double  getValor();
        void  setDataLancamento(const string &);
        string getDataLancamento();
        void imprimir(); 

        //gets sets para os atributos, encapsulamento; 
};

#endif