#include "logica.h"
#include "leitura.h"
#include "superjog.h"
#include "jogador.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Logica::Logica(){}


int Logica::iniciar(){
    int op;
    do{
        this->menu();
        this->menu1(op);
    } while (op!=0);
}

int Menu(){

    Leitura* l = new Leitura();
    
    cout << "1-REPRESENTANTE DO TIME A";
    cout << "2-REPRESENTANTE DO TIME B";
    cout << "0- PARA SAIR";
    return l->getInt();
}

void Menu1 (const int &op){
    switch (op){
        case 1:{
            Jogador* jogador = new Jogador();
            InserirA((Jogador*)jogador);
            InserirA(jogador);  
            times.push_back();  
        }
        break;
        /*case 2:
            Jogador*
        break;*/
    } 
}

void InserirJogador(Jogador* jogador){
    Leitura* l = new Leitura();

    cout <<"Digite o nome: ";
        srand((unsigned)time(0));
    cout << "Digite o over:";
        srand((unsigned)time(0));
    cout << "Eficiencia:" ;
        srand((unsigned)time(0));
}

void InserirA(Jogador* A){
    Leitura* l = new Leitura();

    cout << "Especialista: " << endl;
        srand((unsigned)time(0));
}