#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice{
 private:
  string descricao;
  int numero;
  float quantidade;
  float preco;
 public:
  Invoice(const string & descricao,
         const int & numero, 
         const float & quantidade,
         const float & preco);
  string getDescricao();
  void setDescricao(const string & descricao);
  void setNumero(const int & numero);
  int getNumero();
  void setQuantidade(const float & quantidade);
  float getQuantidade();
  void setPreco(const float & preco);
  float getPreco(); 
  float getInvoiceAmout();  
};


#endif
