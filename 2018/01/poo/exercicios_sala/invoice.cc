#include "invoice.h"

Invoice::Invoice(const string & descricao){
  this->descricao = descricao;
}


string Invoice::getDescricao(){
  return descricao;
}

void Invoice::setDescricao(const string & descricao){
  this->descricao = descricao;
}


