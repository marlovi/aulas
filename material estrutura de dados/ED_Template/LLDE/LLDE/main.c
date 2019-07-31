//
//  main.c
//  LLDE
//
//  Created by Rogério Sousa e Silva on 18/02/14.
//  Copyright (c) 2014 Rogério Sousa e Silva. All rights reserved.
//  Material de aula - 18/02 - Estrutura de dados II
//  Conteúdo: Listas Lineares Duplamente Encadeadas
//
#include <stdio.h>
#include <stdlib.h>

// Definição do tipo de dados (LLDE) através da estrutura (no) do elemento (nó)
//
//  [ ant | info  | prox ]
//
typedef struct no{
    int info;
    struct no *ant, *prox;
}*LLDE;

// Protótipos das funções que manipularão a LLDE
void insInicio_LLDE(LLDE *L, int vr);
void insFinal_LLDE(LLDE *L, int vr);
void mostrarLLDE(LLDE L);

// Programa principal
int main(int argc, const char * argv[])
{
    LLDE Lista = NULL;

    //insInicio_LLDE(&Lista, 30);
    //insInicio_LLDE(&Lista, 20);
    //insInicio_LLDE(&Lista, 10);
    
    insFinal_LLDE(&Lista, 40);
    
    mostrarLLDE(Lista);
    // insert code here...

}

// Corpo das Funções
void insInicio_LLDE(LLDE *L, int vr){
    LLDE novo = (LLDE) malloc(sizeof(struct no));
    if(novo) {
        novo->info=vr;
        novo->ant=NULL;
        novo->prox=*L;
        if(*L) (*L)->ant = novo;
        (*L)=novo;
    }
}

void mostrarLLDE(LLDE L){
    LLDE aux=L;
    printf("\nL->");
    if(L){
        printf("[X|%i|-]->", aux->info);
        while(aux->prox){
            aux=aux->prox;
            printf("<-[-|%i|-]->", aux->info);
        }
        printf("X]");
    } else
        printf("VAZIA");
}

void insFinal_LLDE(LLDE *L, int vr){
    LLDE novo = (LLDE) malloc(sizeof(struct no));
    LLDE pAux = *L;
    if(novo) {
        novo->info=vr;
        novo->prox=NULL;
        if(*L){
            for(;pAux->prox;pAux=pAux->prox);
            novo->ant=pAux;
            pAux->prox=novo;
        } else{
            novo->ant=NULL;
            *L = novo;
        }
    }
}







