#include "pessoafisica.h"


PessoaFisica::PessoaFisica():Pessoa(){
  cout <<"Pessoa Fisica "<<endl;
}

string PessoaFisica::getNome(){
  return Pessoa::getNome()+ " pessoa física ";
}
