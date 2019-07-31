//
//  main.c
//  Polinomios
//
//  Created by Rogério Sousa e Silva on 15/04/14.
//  Copyright (c) 2014 Rogério Sousa e Silva. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

struct no{
    int coef;
    int expo;
    struct no *ant, *prox;
};

typedef struct no *POLI;

void mostrar_polinomio(POLI p);
void inserir_polinomio(POLI *p, int c, int e);
POLI somar_polinomio(POLI f, POLI g);
POLI subtrair_polinomio(POLI fx, POLI gx);

int main(){
    POLI fx = NULL, gx = NULL, px = NULL;
    inserir_polinomio(&fx,4, 2);
    inserir_polinomio(&fx,-3, 3);
    inserir_polinomio(&fx, 2, 1);
    inserir_polinomio(&fx, 2, 5);
    mostrar_polinomio(fx);
    inserir_polinomio(&gx,3, 4);
    inserir_polinomio(&gx,-3, 3);
    inserir_polinomio(&gx, 2, 1);
    inserir_polinomio(&gx, 2, 5);
    mostrar_polinomio(gx);
    px=somar_polinomio(fx, gx);
    mostrar_polinomio(px);
    px=subtrair_polinomio(fx, gx);
    mostrar_polinomio(px);
}


void mostrar_polinomio(POLI p){
    POLI aux = p;
    puts("");
    for(;aux->prox != NULL;aux=aux->prox)
        printf("[%i|%i|-]->", aux->coef, aux->expo);
    printf("[%i|%i|/]\n\n", aux->coef, aux->expo);
}

void inserir_polinomio(POLI *p, int c, int e){
    POLI novo = (POLI) malloc(sizeof(struct no));
    POLI aux1=NULL, aux2=NULL;
    if (novo){
        novo->coef = c;
        novo->expo = e;
        if (*p){
            aux1=*p;
            while (aux1!=NULL && e < aux1->expo) {
                aux2=aux1; aux1=aux1->prox;
            }
            novo->prox = aux1;
            if(aux1) aux1->ant=novo;
            novo->ant=aux2;
            if(aux2)
                aux2->prox = novo;
            else
                *p=novo;
        } else {
            novo->prox = *p;
            novo->ant=NULL;
            *p = novo;
        }
    }
}

POLI somar_polinomio(POLI fx, POLI gx){
    POLI rx = NULL, afx = fx, agx= gx;
    while(afx||agx){
        if(agx&&afx&&agx->expo==afx->expo){
            if(afx->coef+agx->coef!=0)
                inserir_polinomio(&rx, afx->coef+agx->coef, afx->expo);
            afx=afx->prox;agx=agx->prox;
        }else if(agx&&afx&&afx->expo>agx->expo){
                inserir_polinomio(&rx, afx->coef, afx->expo);
                afx=afx->prox;
              }else if(agx&&afx&&afx->expo<agx->expo){
                  inserir_polinomio(&rx, agx->coef, agx->expo);
                  agx=agx->prox;
              }else if(afx){
                  inserir_polinomio(&rx, afx->coef, afx->expo);
                  afx=afx->prox;
              }else if(agx){
                  inserir_polinomio(&rx, agx->coef, agx->expo);
                  agx=agx->prox;
              }
    }
    return rx;
}

POLI subtrair_polinomio(POLI fx, POLI gx){
    POLI rx = NULL, afx = fx, agx= gx;
    while(afx||agx){
        if(agx&&afx&&agx->expo==afx->expo){
            if(afx->coef-agx->coef!=0)
                inserir_polinomio(&rx, afx->coef-agx->coef, afx->expo);
            afx=afx->prox;agx=agx->prox;
        }else if(agx&&afx&&afx->expo>agx->expo){
            inserir_polinomio(&rx, afx->coef, afx->expo);
            afx=afx->prox;
        }else if(agx&&afx&&afx->expo<agx->expo){
            inserir_polinomio(&rx, agx->coef, agx->expo);
            agx=agx->prox;
        }else if(afx){
            inserir_polinomio(&rx, afx->coef, afx->expo);
            afx=afx->prox;
        }else if(agx){
            inserir_polinomio(&rx, agx->coef, agx->expo);
            agx=agx->prox;
        }
    }
    return rx;
}
