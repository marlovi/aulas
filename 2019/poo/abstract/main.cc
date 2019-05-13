#include "animal.h"
#include "lobo.h"
#include "cachorro.h"

void exe(Animal* a){
    a->comer();
}

int main(int argc,char** argv){
    Lobo *l = new Lobo();
    Cachorro *c = new Cachorro();

    Animal *a = new Cachorro(); 


    //Saíndo de animal, como acessar o método latir de cachorro


    
((Cachorro*)a)->latir();

    exe(l);
    exe(c);
    exe(a);


    return 0;
}