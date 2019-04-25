#include<cstdlib>
#include "logica.h"
#include "jogador.h"
#include "leitura.h"
#include "iostream"
#include <vector>

using namespace std;

void Logica::iniciar(){
    int op = 0;
    do{
        op = menu();
        switch(op){
            case 1:
               this->vetor.push_back(criarTimeA());
             break;
            case 2:
                this->vetor.push_back(criarTimeB());
            break;
            case 3:
               TimeCampeao();
            break;
            default:
                std::cout << "DEIXANDO A APLICAÇÃO" <<endl;
        }
    }while( op != 0 );

}
int Logica::menu(){
    Leitura* l = new Leitura();
    std::cout << "Digite 1 para criar time A  "<< endl;
    std::cout << "Digite 2 para criar time B  "<<endl;
    std::cout << "Digite 3 para saber quem venceu  "<<endl;
    std::cout << "E 0 para sair "<<endl;
    return l->getInt();
}


Jogador* Logica::criarTimeA(){
    
    Jogador* j = new Jogador();
    Leitura* l = new Leitura();

    j->setNome(l->getChar());
    std::cout << "Informe o nome do jogador " << endl;
    j->setNome(l->getChar());
   
    std::cout << "Informe a a habilidade geral do jogador em numero" << endl;
    j->setEficienciaA(l->getInt());
    

    return j;
}

Jogador* Logica::criarTimeB(){
    
    Jogador* j = new Jogador();
    Leitura* l = new Leitura();

    
    std::cout << "Informe o nome do jogador " << endl;
    j->setNome(l->getChar());
    
    std::cout << "Informe a a habilidade geral do jogador em numero" << endl;
   j->setEficienciaB(l->getInt());
    return j;
}

void Logica::TimeCampeao(){
    Jogador* j = new Jogador();
    vector<Jogador*>::iterator it;
    Leitura* l = new Leitura();

    it = vetor.begin();
    int auxA ;
    int auxB = 0;

   for( ; it != vetor.end(); it++ ){
        auxA = auxA + (j->getEficienciaA());
        auxB = auxB + (j->getEficienciaB());
        
    }
   
    if(auxA > auxB){
        cout << "Time A ganhou" << endl;
    }else{
        cout << "Time B ganhou" << endl;
    }
}