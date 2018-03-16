#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <iostream>

using namespace std;


class Carro{
 private:
  string cor;
  string placa;
  string modelo;
  float preco;
  bool flex;
 public:
  Carro(); // Construtor
  ~Carro(); // Destrutor   kd lógica ????
  string getCor();
  void setCor(const string & cor);
  float precoVenda();
  //$ default :( 
};


#endif
