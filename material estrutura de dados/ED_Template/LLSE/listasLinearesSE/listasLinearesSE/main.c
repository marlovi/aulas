//
//  main.c
//  listasLinearesSE
//  Created by Rogério Sousa e Silva on 16/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct noh {
    int info;
    struct noh *prox;
};
typedef struct noh *LLSE;

struct nohFQ1 {
    int trabalho;
    int prioridade;
    struct nohFQ1 *prox;
};
typedef struct nohFQ1 *IMPRESSORA;

struct nohF {
    int info;
    struct nohF *prox;
};
typedef struct nohF *FILA;

struct nohP {
    int info;
    struct nohP *prox;
};
typedef struct nohP *PILHA;

int Top(PILHA p);
void Pop(PILHA *p);
void Push(PILHA *p, int vr);
int Empty(PILHA p);

void inserirFILA(FILA *f,int vr);
void removerFILA(FILA *f);
int elementoDisponivelFILA(FILA f);
int estaVaziaFILA(FILA f);

void insInicioLLSE(LLSE *l,int vr);
void insFinalLLSE(LLSE *l,int vr);
void remInicioLLSE(LLSE *l);
void remFinalLLSE(LLSE *l);
void ordenacaoValorLLSE(LLSE *l);
void mostrarLLSE(LLSE l);
int ehDigito(char c);
LLSE organizarLLSE(LLSE l);
void inserirFILAIMPRESS(IMPRESSORA *f,int tra,int pri);
void mostrarLLSEIMPR(IMPRESSORA l);

int main(int argc, const char * argv[]) {
// QUESTÃO 1
    IMPRESSORA i=NULL;
    inserirFILAIMPRESS(&i, 23, 1);
    inserirFILAIMPRESS(&i, 11, 2);
    inserirFILAIMPRESS(&i, 32, 2);
    inserirFILAIMPRESS(&i, 12, 2);
    inserirFILAIMPRESS(&i, 19, 3);
    mostrarLLSEIMPR(i);
    inserirFILAIMPRESS(&i, 33, 3);
    mostrarLLSEIMPR(i);
// QUESTÃO 2
//    LLSE lista=NULL,ln=NULL;
//    insFinalLLSE(&lista,'A');
//    insFinalLLSE(&lista,'1');
//    insFinalLLSE(&lista,'E');
//    insFinalLLSE(&lista,'5');
//    insFinalLLSE(&lista,'T');
//    insFinalLLSE(&lista,'7');
//    insFinalLLSE(&lista,'W');
//    insFinalLLSE(&lista,'8');
//    insFinalLLSE(&lista,'G');
//    mostrarLLSE(lista);
//    ln=organizarLLSE(lista);
//    mostrarLLSE(ln);
    return 0;
}

//void insInicioLLSE(LLSE *l,int vr){
//    LLSE novo = (LLSE) malloc(sizeof(struct noh));
//    if(novo){ // if(novo != NULL)
//        novo->info = vr;
//        novo->prox = *l;
//        *l = novo;
//    }
//}

void insFinalLLSE(LLSE *l,int vr){
    LLSE a, novo = (LLSE) malloc(sizeof(struct noh));
    if(novo){
        novo->info=vr;
        novo->prox=NULL;
        if(*l){
            for(a=*l;a->prox!=NULL;a=a->prox);
            a->prox=novo;
        }
        else {
            *l = novo;
        }
    }
}

void remInicioLLSE(LLSE *l){
    LLSE a=*l;
    if(*l){
        *l=(*l)->prox;
        free(a);
    }
}

void remFinalLLSE(LLSE *l){
    LLSE ult=*l,penult=ult;
    if(*l){
        if((*l)->prox!=NULL){
            for(ult=*l;ult->prox!=NULL;penult=ult,ult=ult->prox);
            penult->prox=NULL;
        }else{
            *l=NULL;
        }
        free(ult);
        
    }
}

void mostrarLLSE(LLSE l){
    LLSE a=l;
    printf("Lista->");
    if(a){
        while(a->prox){
            printf("[%c|-]->",a->info);
            a=a->prox;
        }
        printf("[%c|NULL]\n",a->info);
    } else {
        printf("NULL\n");
    }
}

void mostrarLLSEIMPR(IMPRESSORA l){
    IMPRESSORA a=l;
    printf("FILA IMPRESSÃO->");
    if(a){
        while(a->prox){
            printf("[%d|%d|-]->",a->trabalho, a->prioridade);
            a=a->prox;
        }
        printf("[%d|%d|NULL]\n",a->trabalho, a->prioridade);
    } else {
        printf("NULL\n");
    }
}

void ordenacaoValorLLSE(LLSE *l){
    LLSE auxA,auxP;
    int vrAux, trocas=1;
    if(*l!=NULL&&(*l)->prox){
        while(trocas){
            mostrarLLSE(*l);
            trocas=0;
            for(auxA=*l,auxP=(*l)->prox;auxP!=NULL;auxA=auxP,auxP=auxP->prox){
                if(auxA->info>auxP->info){
                    vrAux=auxA->info;
                    auxA->info=auxP->info;
                    auxP->info=vrAux;
                    trocas=1;
                }
            }
        }
    }
}

LLSE organizarLLSE(LLSE l){
    FILA f=NULL;PILHA p=NULL;LLSE n=NULL;
    while(l){
        if(ehDigito(l->info)){
            inserirFILA(&f, l->info);
        }else{
            Push(&p, l->info);
        }
        l=l->prox;
    }
    while(!estaVaziaFILA(f)){
        insInicioLLSE(&n, elementoDisponivelFILA(f));
        removerFILA(&f);
    }
    while(!Empty(p)){
        insInicioLLSE(&n, Top(p));
        Pop(&p);
    }
    return n;
}

int ehDigito(char c){
    if(c>47&&c<59) return 1;
    else return 0;
}

void insInicioLLSE(LLSE *l,int vr){
    LLSE novo = (LLSE) malloc(sizeof(struct noh));
    if(novo){ // if(novo != NULL)
        novo->info = vr;
        novo->prox = *l;
        *l = novo;
    }
}
void inserirFILA(FILA *f,int vr){
    FILA a, novo = (FILA) malloc(sizeof(struct nohF));
    if(novo){
        novo->info=vr;
        novo->prox=NULL;
        if(*f){
            for(a=*f;a->prox!=NULL;a=a->prox);
            a->prox=novo;
        }
        else {
            *f = novo;
        }
    }
}
void inserirFILAIMPRESS(IMPRESSORA *f,int trab,int prio){
    IMPRESSORA a=*f,b=a, novo = (IMPRESSORA) malloc(sizeof(struct nohFQ1));
    if(novo){
        novo->trabalho=trab;
        novo->prioridade=prio;
        if(*f){
            if((*f)->prox){
                b=a;a=*f;
                while(a&&a->prioridade<prio){
                    b=a;
                    a=a->prox;
                }
                b->prox=novo;
                if(a){
                    novo->prox=a;
                } else {
                    novo->prox=NULL;
                }
            }else{
                if(prio<(*f)->prioridade){
                    novo->prox=*f;
                } else {
                    (*f)->prox=novo;
                    novo->prox=NULL;
                }
            }
        }
        else {
            *f = novo;
            novo->prox=NULL;
        }
    }
}

void removerFILA(FILA *f){
    FILA a=*f;
    if(*f){
        *f=(*f)->prox;
        free(a);
    }
}

int estaVaziaFILA(FILA f){
    return (f==NULL);
}

int elementoDisponivelFILA(FILA f){
    if(!estaVaziaFILA(f)){
        return f->info;
    } else {
        return -1;
    }
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
