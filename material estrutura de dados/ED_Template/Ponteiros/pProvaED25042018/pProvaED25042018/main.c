//
//  main.c
//  pProvaED25042018
//
//  Created by Rogério Sousa e Silva on 25/04/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
int main() {
    int    valor;
    int   *p1;
    float  temp;
    float *p2;
    char   aux;
    char  *nome = "ABCDEFGHIJ";
    char  *p3;
    int    idade;
    int    vetor[3];
    int   *p4;
    int   *p5;
    
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("(a) %d \n", valor);
    /* (b) */
    temp = 29.5;
    p2 = &temp;
    *p2 = 23.0;
    printf("(b) %.1f \n", temp);
    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("(c) %c \n", aux);
    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("(d) %c \n", aux);
    /* (e) */
    p3 = nome;
    printf("(e) %c \n", *p3);
    /* (f) */
    p3 = p3 + 4;
    printf("(f) %c \n", *p3);
    /* (g) */
    p3--;
    printf("(g) %c \n", *p3);
    /* <h> */
    vetor[0] = 33;
    vetor[1] = 25;
    vetor[2] = 7;
    p4 = vetor;
    idade = *p4;
    printf("(h) %d \n", idade);
    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("(i) %d \n", idade);
    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("(j) %d \n", idade);
    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("(l) %d \n", idade);
    /* (m) */
    p5 = &vetor[2] - 1;
    printf("(m) %d \n", *p5);
    /* (n) */
    p5++;
    printf("(n) %d \n", *p5);
    
    return(0);
}

