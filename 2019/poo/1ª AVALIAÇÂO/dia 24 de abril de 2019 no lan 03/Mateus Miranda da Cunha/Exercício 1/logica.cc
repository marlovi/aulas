#include "logica.h"

Leitura* l = new Leitura();

void Logica::iniciar(){
    int op;
    do{
        op = menu();
        switch(op){
            case 0:{
                cout << "Fim da Aplicacao" << endl;
                break;
            }
            case 1:{
                vet.push_back(addJogador());
                break;
            }
        }
    }while(op != 0);
}

int Logica::menu(){
    int op;
    cout << "Digite 0 para sair da aplicacao!" << endl;
    cout << "Digite 1 para adicionar um jogador!"<< endl;
    cout << "Informe a opcao desejada: " << endl;
    op = l -> getInt();
}

Jogador Logica::addJogador(){
    Jogador* j = new Jogador();
    cout << "Digite o nome do jogador: " << endl;
    j -> setNome(l->getString());
}

Superjogador Logica::addSuperjogador(){
    Superjogador* j = new Superjogador();
    cout << "Digite o nome do jogador: " << endl;
    j -> setNome(l->getString());
}