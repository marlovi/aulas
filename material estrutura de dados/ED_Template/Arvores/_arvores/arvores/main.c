//
//  main.c
//  arvores
//
//  Created by Rogério Sousa e Silva on 29/04/14.
//  Copyright (c) 2014 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct no_arvore {
    int info;
    struct no_arvore *esq, *dir;
}*TREE;

void insArvoreBB(TREE *Arv, int vr);
int maiorArvoreBB_NR(TREE Arv);
TREE tMaiorArvoreBB(TREE *Arv);
int maiorArvoreBB(TREE Arv);
int menorArvoreBB_NR(TREE Arv);
int menorArvoreBB(TREE Arv);
void passeioEmOrdem_ArvoreBB(TREE Arv);
void passeioPreOrdem_ArvoreBB(TREE Arv);
void passeioPosOrdem_ArvoreBB(TREE Arv);
void remArvoreBB(TREE *Arv, int vr);

int main(int argc, const char * argv[])
{
    TREE Arvore=NULL;

    insArvoreBB(&Arvore, 10);
    insArvoreBB(&Arvore, 5);
    insArvoreBB(&Arvore, 15);
    insArvoreBB(&Arvore, 7);
    insArvoreBB(&Arvore, 12);
    insArvoreBB(&Arvore, 19);
    insArvoreBB(&Arvore, 2);
    insArvoreBB(&Arvore, 1);
    insArvoreBB(&Arvore, 3);
    insArvoreBB(&Arvore, 16);
    insArvoreBB(&Arvore, 21);
    insArvoreBB(&Arvore, 13);
    insArvoreBB(&Arvore, 11);
    printf("\nMaior_Recursivo: %i",maiorArvoreBB(Arvore));
    printf("\nMaior_Nao_Recursivo: %i\n",maiorArvoreBB_NR(Arvore));
    printf("\nMenor_Recursivo: %i",menorArvoreBB(Arvore));
    printf("\nMenor_Nao_Recursivo: %i\n",menorArvoreBB_NR(Arvore));
    
    printf("\nPasseio Em Ordem: "); passeioEmOrdem_ArvoreBB(Arvore);
    remArvoreBB(&Arvore, 15);
    printf("\nPasseio Em Ordem (APÓS REMOVIDO): "); passeioEmOrdem_ArvoreBB(Arvore);
    remArvoreBB(&Arvore, 1);
    printf("\nPasseio Em Ordem (APÓS REMOVIDO): "); passeioEmOrdem_ArvoreBB(Arvore);

    return 0;
}

void insArvoreBB(TREE *Arv, int vr){
    if(*Arv==NULL){
        *Arv = (TREE) malloc(sizeof(struct no_arvore));
        if (*Arv) {
            (*Arv)->dir=NULL;
            (*Arv)->esq=NULL;
            (*Arv)->info=vr;
        }
    }else
        if(vr<(*Arv)->info){
            insArvoreBB(&((*Arv)->esq), vr);
        }else{
            insArvoreBB(&((*Arv)->dir), vr);
        }
}

int maiorArvoreBB_NR(TREE Arv){
    TREE aux=Arv;
    while (aux->dir!=NULL) {
        aux=aux->dir;
    }
    return aux->info;
}

int maiorArvoreBB(TREE Arv){
    if (Arv->dir!=NULL)
        return maiorArvoreBB(Arv->dir);
    else
        return Arv->info;
}

TREE tMaiorArvoreBB(TREE *Arv){
    TREE pAux = *Arv;
    if (pAux->dir==NULL){
        *Arv=(*Arv)->esq;
        return pAux;
    }
    else
        return (tMaiorArvoreBB(&((*Arv)->dir)));
}

int menorArvoreBB_NR(TREE Arv){
    TREE aux=Arv;
    while (aux->esq!=NULL) {
        aux=aux->esq;
    }
    return aux->info;
}

int menorArvoreBB(TREE Arv){
    if (Arv->esq!=NULL)
        return menorArvoreBB(Arv->esq);
    else
        return Arv->info;
}

void passeioEmOrdem_ArvoreBB(TREE Arv){
    if (Arv) {
        passeioEmOrdem_ArvoreBB(Arv->esq);
        printf("%i, ",Arv->info);
        passeioEmOrdem_ArvoreBB(Arv->dir);
    }
}
void passeioPreOrdem_ArvoreBB(TREE Arv){
    if (Arv) {
        printf("%i, ",Arv->info);
        passeioPreOrdem_ArvoreBB(Arv->esq);
        passeioPreOrdem_ArvoreBB(Arv->dir);
    }
}
void passeioPosOrdem_ArvoreBB(TREE Arv){
    if (Arv) {
        passeioPosOrdem_ArvoreBB(Arv->esq);
        passeioPosOrdem_ArvoreBB(Arv->dir);
        printf("%i, ",Arv->info);
    }
}

void remArvoreBB(TREE *Arv, int vr){
    TREE p;
    if (*Arv!=NULL){
        if (vr == (*Arv)->info){
            p=*Arv;
            if ((*Arv)->esq==NULL)
                *Arv = (*Arv)->dir;
            else
                if ((*Arv)->dir==NULL)
                    *Arv = (*Arv)->esq;
                else{
                    p=tMaiorArvoreBB(&((*Arv)->esq));
                    (*Arv)->info = p->info;
                }
            free(p);
        }
        else
            if(vr < (*Arv)->info)
                remArvoreBB(&((*Arv)->esq), vr);
            else
                remArvoreBB(&((*Arv)->dir), vr);
    }
}









