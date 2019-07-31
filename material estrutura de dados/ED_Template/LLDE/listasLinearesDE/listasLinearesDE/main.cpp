//
//  main.cpp
//  listasLinearesDE
//
//  Created by Rogério Sousa e Silva on 04/04/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <iostream>
using namespace std;

struct noh{
    int info;
    struct noh *ant,*prox;
};
typedef struct noh *LLDE;

void inserirInicioLLDE(LLDE *l, int vr);
void mostrarLLDE(LLDE l);

int main(int argc, const char * argv[]) {
    LLDE lista=NULL;
    inserirInicioLLDE(&lista, 10);
    inserirInicioLLDE(&lista, 9);
    inserirInicioLLDE(&lista, 8);
    inserirInicioLLDE(&lista, 7);
    inserirInicioLLDE(&lista, 6);
    mostrarLLDE(lista);
    return 0;
}

void inserirInicioLLDE(LLDE *l, int vr){
    LLDE novo=(LLDE)malloc(sizeof(struct noh));
    if(novo){
        novo->ant=NULL;
        novo->info=vr;
        novo->prox=*l;
        *l=novo;
    }
}

void mostrarLLDE(LLDE l){
    LLDE aux=l;
    if(l){
        if(l->prox) cout << "L->[x|"<<aux->info<<"|-]>";
        else cout << "L->[x|"<<aux->info<<"|x]"<<endl;
        aux=aux->prox;
        while(aux&&aux->prox!=NULL){
            cout << "<-[-"<< aux->info << "|-]->";
            aux=aux->prox;
        }
        if(aux)cout << "[" << aux->info << "|x]"<<endl;
    } else cout << "L->x"<<endl;
}

void mostrarLLDE(LLDE l){
    LLDE aux=l;
    if(l){
        if(l->prox) cout << "L->[x|"<<aux->info<<"|-]>";
        else cout << "L->[x|"<<aux->info<<"|x]"<<endl;
        aux=aux->prox;
        while(aux&&aux->prox!=NULL){
            cout << "<-[-"<< aux->info << "|-]->";
            aux=aux->prox;
        }
        if(aux)cout << "[" << aux->info << "|x]"<<endl;
    } else cout << "L->x"<<endl;
}













