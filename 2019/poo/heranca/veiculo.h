#ifndef VEICULO_H
#define VEICULO_H


#include <iostream>
#include <string>

using namespace std;


class Veiculo{
 private:
  string nome;
 public:
  void setNome(const string &);
  string getNome();
  Veiculo();
  ~Veiculo();
 protected:
  string chassi;
};



#endif
