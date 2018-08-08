#include "stdio.h"
int soma(int,int);
void somaRef(int*,int*,int*);
void main(){ 

    int x =1;
    int y=2;
    int total; 

    somaRef(&x,&y,&total); // a -> x , b -> y, c -> total 

    printf("A Soma é  %d  passagem por valor \n",soma(x,y));
    printf("A Soma TOTAL  é  %d  passagem por referencia \n",total);
}

int soma(int a,int b){
    return a + b;
}

void somaRef(int *a,int *b, int *c){
    (*c) = (*a) + (*b); 
}