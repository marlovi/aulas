#include "stdio.h"
//#include <stdio.h>


int somatorio_classico(int);
int somatorio_nao_classico(int,int);
int main(){
    int x;
    printf("Informe um valor positivo N para somar os elementos de 1 até N ");
    scanf("%d",&x);
    //int total = somatorio_classico(x) ; printf(total)
    printf("Somatório é  %d    \n",somatorio_classico(x));
    printf("Somatorio não classico %d    \n",somatorio_nao_classico(x,0));
    return 0;
}

int somatorio_classico(int n){
    if( n == 0 )
        return 0;
    else 
        return n + somatorio_classico(n -1);
}

int somatorio_nao_classico(int valor, int elemento){
    if(valor == elemento)
        return valor;
    else 
        return elemento + somatorio_nao_classico(valor,elemento+1);
}

