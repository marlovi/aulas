#include "jogopc.h"


void JogoPc::imprimir(){ //-> sobreescrita
//lógica
    Game::imprimir();//invocar um método da super classe preservando a lógica
 cout <<" Quantidade de Megasbytes necessário no disco rígido para instalar o jogo" << this->qtdMegasHd << endl;
 cout <<"Quatidade de memória necessária" << this->ram<<endl;
 cout <<" Quantidade de Ghz " << this->clock << endl;

}


void JogoPc::setClock(const float & clock){
    this->clock = clock;
}
void JogoPc::setQtdMegasHd(const int &qtdMegasHd){
    this->qtdMegasHd = qtdMegasHd;
}
void JogoPc::setRam(const int &ram){
    this->ram = ram;
}
int JogoPc::getRam(){
    return this->ram;
}
int JogoPc::getQtdMegasHd(){
    return this->qtdMegasHd;
}
float JogoPc::getClock(){
    return this->clock;
}