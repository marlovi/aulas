#include "personagem.h"

Personagem::Personagem(SuperPoder* sp){
    this->superPoder = sp;
}
Personagem::~Personagem(){
    delete this->superPoder;
    cout <<"Desalocando o personagem " << endl;
}