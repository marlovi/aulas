#include "invoice.h"

Invoice::Invoice(const string & descricao,
				 const int & numero, 
				 const float & quantidade,
				 const float & preco){
  this->descricao = descricao;
  this->numero = numero;
  this->quantidade = quantidade;
  this->preco = preco; 

}


string Invoice::getDescricao(){
  return descricao;
}

void Invoice::setDescricao(const string & descricao){
  this->descricao = descricao;
}

void Invoice::setNumero(const int & numero){
  this->numero = numero;
}
void Invoice::setPreco(const float & preco){
  this->preco = preco;
}
void Invoice::setQuantidade(const float & quantidade){
  this->quantidade = quantidade;
}
float Invoice::getPreco(){
	return preco;
}

float Invoice::getQuantidade(){
	return quantidade;
}
int Invoice::getNumero(){
	return numero;
}

float Invoice::getInvoiceAmout(){
	return quantidade * preco; 
}




