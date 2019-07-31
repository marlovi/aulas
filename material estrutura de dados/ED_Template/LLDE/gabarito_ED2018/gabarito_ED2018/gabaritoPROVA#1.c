//
//  main.c
//  gabarito_ED2018
//
//  Created by Rogério Sousa e Silva on 02/05/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//
// #### resposta questão 1 ####

//int main() {
//    int    valor;
//    int   *p1;
//    float  temp;
//    float *p2;
//    char   aux;
//    char  *nome = "ABCDEFGHIJ";
//    char  *p3;
//    int    idade;
//    int    vetor[3];
//    int   *p4;
//    int   *p5;
//
//    /* (a) */
//    valor = 10;
//    p1 = &valor;
//    *p1 = 20;
//    printf("(a) %d \n", valor);
//    /* (b) */
//    temp = 29.5;
//    p2 = &temp;
//    *p2 = 23.0;
//    printf("(b) %.1f \n", temp);
//    /* (c) */
//    p3 = &nome[0];
//    aux = *p3;
//    printf("(c) %c \n", aux);
//    /* (d) */
//    p3 = &nome[4];
//    aux = *p3;
//    printf("(d) %c \n", aux);
//    /* (e) */
//    p3 = nome;
//    printf("(e) %c \n", *p3);
//    /* (f) */
//    p3 = p3 + 4;
//    printf("(f) %c \n", *p3);
//    /* (g) */
//    p3--;
//    printf("(g) %c \n", *p3);
//    /* <h> */
//    vetor[0] = 33;
//    vetor[1] = 25;
//    vetor[2] = 7;
//    p4 = vetor;
//    idade = *p4;
//    printf("(h) %d \n", idade);
//    /* (i) */
//    p5 = p4 + 1;
//    idade = *p5;
//    printf("(i) %d \n", idade);
//    /* (j) */
//    p4 = p5 + 1;
//    idade = *p4;
//    printf("(j) %d \n", idade);
//    /* (l) */
//    p4 = p4 - 2;
//    idade = *p4;
//    printf("(l) %d \n", idade);
//    /* (m) */
//    p5 = &vetor[2] - 1;
//    printf("(m) %d \n", *p5);
//    /* (n) */
//    p5++;
//    printf("(n) %d \n", *p5);
//
//    return(0);
//}

//
// #### resposta questão 2 ####
//typedef struct no{
//    int info;
//    struct no *prox,*ant;
//} *LLDE;
//
//void inserirInicioLLDE(LLDE *l, int vr){
//    LLDE novo=(LLDE)malloc(sizeof(struct no));
//    if(novo){
//        novo->ant=NULL;
//        novo->info=vr;
//        novo->prox=*l;
//        if(*l)(*l)->ant=novo;
//        *l=novo;
//    }
//}
//
//void mostrarLLDE(LLDE l){
//    LLDE aux=l;
//    if(l){
//        if(l->prox) printf("L->[x|%i|-]->",aux->info);
//        else printf("L->[x|%i|x]\n",aux->info);
//        aux=aux->prox;
//        while(aux&&aux->prox!=NULL){
//            printf("<-[-|%i|-]->",aux->info);
//            aux=aux->prox;
//        }
//        if(aux)printf("<-[-|%i|x]\n",aux->info);
//    } else printf("L->x\n");
//}
//
//void mostrarInvertidoLLDE(LLDE l){
//    LLDE aux=l;
//    if(l){ // Existe a lista -- Tem elementos
//        if(!l->prox) printf("L->[x|%i|x]\n",aux->info); //Apenas um elemento
//        else for(aux=l;aux->prox!=NULL;aux=aux->prox); // Mais de um elemento, vá para o final
//        printf("L->[x|%i|-]->",aux->info);
//        aux=aux->ant;
//        while(aux&&aux->ant!=NULL){
//            printf("<-[-|%i|-]->",aux->info);
//            aux=aux->ant;
//        }
//        if(aux)printf("<-[-|%i|x]\n",aux->info);
//    } else printf("L->x\n"); // Lista Vazia -- Não tem elementos
//}
//
//int main(){
//    LLDE l=NULL;
//    inserirInicioLLDE(&l, 9);
//    inserirInicioLLDE(&l, 8);
//    inserirInicioLLDE(&l, 7);
//    inserirInicioLLDE(&l, 6);
//    inserirInicioLLDE(&l, 5);
//    inserirInicioLLDE(&l, 4);
//    inserirInicioLLDE(&l, 3);
//    inserirInicioLLDE(&l, 2);
//    inserirInicioLLDE(&l, 1);
//    mostrarLLDE(l);
//    mostrarInvertidoLLDE(l);
//    return 1;
//}

// #### resposta questão 3 ####
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Modelo, a Marca, o Ano de fabricação e o preço do lance vencedor em reais
struct carro{
    char modelo[40];
    char marca[40];
    int ano;
    float lanceVencedor;
    struct carro *prox;
};

// #### resposta questão 4 ####
// retirar os comentários da questao 3 e 4.

typedef struct carro *CARROS;

void inserirCARROS(CARROS *l, char *mod, char *mar, int a, float valor){
    CARROS novo=(CARROS)malloc(sizeof(struct carro));
    if(novo){
        strcpy(novo->modelo, mod);
        strcpy(novo->marca, mar);
        novo->ano = a;
        novo->lanceVencedor = valor;
        novo->prox=*l;
        *l=novo;
    }
}

void mostrarCARROS(CARROS l){
    CARROS aux=l;
    if(l){
        if(l->prox) printf("Lista de carros vendidos: \n[%s::%s(%i) R$%.2f]\n",aux->marca,aux->modelo,aux->ano,aux->lanceVencedor);
        else printf("L->\n[%s::%s(%i) R$%.2f]\n",aux->marca,aux->modelo,aux->ano,aux->lanceVencedor);
        aux=aux->prox;
        while(aux&&aux->prox!=NULL){
            printf("[%s::%s(%i) R$%.2f]\n",aux->marca,aux->modelo,aux->ano,aux->lanceVencedor);
            aux=aux->prox;
        }
        if(aux)printf("[%s::%s(%i) R$%.2f]\n",aux->marca,aux->modelo,aux->ano,aux->lanceVencedor);
    } else printf("L->\n[VAZIA]\n");
}

CARROS carroMaisCaro(CARROS c){
    CARROS aux=c, maiorLance=(CARROS) malloc(sizeof(struct carro));
    maiorLance->lanceVencedor=0.0;
    if(aux){
        while (aux) {
            if(aux->lanceVencedor>maiorLance->lanceVencedor){
                strcpy(maiorLance->modelo, aux->modelo);
                strcpy(maiorLance->marca, aux->marca);
                maiorLance->ano = aux->ano;
                maiorLance->lanceVencedor = aux->lanceVencedor;
            }
            aux=aux->prox;
        }
        return maiorLance;
    } else return NULL;
}

int main(){
    CARROS lCarros = NULL, cMaisCaro;
    inserirCARROS(&lCarros, "Pajero Sport", "Mitsubish", 2010,32980.23);
    inserirCARROS(&lCarros, "325i M3", "BMW", 2012,82320.30);
    inserirCARROS(&lCarros, "GLA 250", "Mercedes", 2016,145700.00);
    inserirCARROS(&lCarros, "Mustang Cobra", "Ford", 1971,342680.17);
    inserirCARROS(&lCarros, "300c", "Chrisler", 2013,46667.67);
    inserirCARROS(&lCarros, "Civic Si", "Honda", 2010,52990.93);
    inserirCARROS(&lCarros, "Kombi", "Volkswagen", 1963,142000.00);
    inserirCARROS(&lCarros, "Opala 250S 6c", "Chevrolet", 1971,154000.00);
    inserirCARROS(&lCarros, "Maverick V8 GT", "Ford", 1972,199000.00);
    mostrarCARROS(lCarros);
    cMaisCaro=carroMaisCaro(lCarros);
    if(cMaisCaro){
        printf("\nCarro mais caro vendido no leilão: \n[%s::%s(%i) R$%.2f]\n",cMaisCaro->marca,cMaisCaro->modelo,cMaisCaro->ano,cMaisCaro->lanceVencedor);
    } else {
        printf("Não foram vendidos carros no leilão!");
    };
    return 1;
}
