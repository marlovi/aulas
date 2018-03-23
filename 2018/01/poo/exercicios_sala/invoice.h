#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice{
 private:
  string descricao;
 public:
  Invoice(const string &  descricao);
  string getDescricao();
  void setDescricao(const string & descricao);
  
};


#endif
