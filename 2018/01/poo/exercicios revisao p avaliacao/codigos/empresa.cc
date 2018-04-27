#include "empresa.h"


Empresa::Empresa(){

}
Empresa::Empresa(const string & nome){
    cout << "Empresa "<< nome << endl;
    this->nome = nome;
}