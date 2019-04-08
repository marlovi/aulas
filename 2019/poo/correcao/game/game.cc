#include "game.h"



void Game::imprimir(){
    cout << "Nome " <<this->nome << endl
         << "Faixa Etária" <<this->faixaEtaria << endl
         << "Estilo "<<this->estilo << endl
         << "Valor"<<this->valor <<endl 
         << "Data de Lançamento"<<  endl<<
         this->dataLancamento<<endl;
}

void Game::setDataLancamento(const string &dataLancamento){
    this->dataLancamento = dataLancamento;
}
void Game::setEstilo(const string & estilo){
    this->estilo = estilo;
}
void Game::setFaixaEtaria(const int & faixaEtaria){
    this->faixaEtaria = faixaEtaria;
}
void Game::setNome(const string &nome){
    this->nome = nome;
}
void Game::setProdutora(const string &produtora){
    this->produtora = produtora;
}
void Game::setValor(const long double &valor){
    this->valor = valor;   
}
string Game::getNome(){
    return this->nome;
}
string Game::getProdutora(){
    return this->produtora;
}
long double Game::getValor(){
    return this->valor;
}
string Game::getEstilo(){
    return this->estilo;
}
int Game::getFaixaEtaria(){
    return this->faixaEtaria;
}
