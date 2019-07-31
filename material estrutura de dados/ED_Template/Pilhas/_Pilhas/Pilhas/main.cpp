//
//  main.cpp
//  Pilhas
//
//  Created by Rogério Sousa e Silva on 18/04/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <iostream>
using namespace std;
struct noh {
    int info;
    struct noh *prox;
};
typedef struct noh *PILHA;

int Top(PILHA p);
void Pop(PILHA *p);
void Push(PILHA *p, int vr);
int Empty(PILHA p);

int main(int argc, const char * argv[]) {
    PILHA pilha = NULL;
    cout << (Empty(pilha)?"Vazia": "Tem Elementos") << endl;
    Push(&pilha, 10);
    Push(&pilha, 20);
    Push(&pilha, 30);
    cout << (Empty(pilha)?"Vazia": "Tem Elementos") << endl;
    cout << Top(pilha) << endl;
    Pop(&pilha);
    cout << Top(pilha) << endl;
    Pop(&pilha);
    cout << Top(pilha) << endl;
    Pop(&pilha);
    cout << (Empty(pilha)?"Vazia": "Tem Elementos") << endl;
    return 0;
}

int Top(PILHA p){
    if(!Empty(p)){
        return p->info;
    }else{
        return -1;
    }
}


int Empty(PILHA p){
    return p==NULL;
    /* if (p==NULL) return 1; else return 0;*/
}

void Push(PILHA *p, int vr){
    PILHA novo = (PILHA) malloc(sizeof(struct noh));
    if(novo){
        novo->info = vr;
        novo->prox=*p;
        *p = novo;
    }
}

void Pop(PILHA *p){
    PILHA aux;
    if(!Empty(*p)){
        aux=*p;
        *p=(*p)->prox;
        free(aux);
    }
}





