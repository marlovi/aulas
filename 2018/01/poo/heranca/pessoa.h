#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>
using namespace std;
class Pessoa{
 private:
  string nome;
 public:
  //construtor Pessoa()
  Pessoa();
  virtual string getNome();
  void setNome(const string &);
};


#endif
