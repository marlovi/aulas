#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include <iostream>

using namespace std;
class Veiculo{
    private:
      string marca;
      int ano;
      bool flex;
    public:
      bool isFlex();//éFlex ou não é flex
      string getMarca();  
      int getAno();
      void setAno(const int &); 
      void setFlex(const bool &);
      void setMarca(const string &);   
       void imprimir();
  Veiculo(); // método construtor da classe
  ~Veiculo(); // método destrutor da classe 
};

#endif
