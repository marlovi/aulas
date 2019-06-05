#include "pessoa.h"
#include "empregado.h"
int main (int a, char** v){
    Pessoa* p = new Pessoa("Adriana");

    Empregado* e = new Empregado("João","123456");
    delete p;
    return 0;
}