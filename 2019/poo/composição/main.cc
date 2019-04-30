#include "superpoder.h"
#include "personagem.h"



int main(int argc,char** argv){
    SuperPoder* sp = new SuperPoder();

    sp->setNome("Programador");
    sp->setValor(6.90); 
    Personagem* p = new Personagem(sp);

    //fazer qualquer coisa via programação com o objeto p; 
    
    delete p; //O que acontece ? 



}