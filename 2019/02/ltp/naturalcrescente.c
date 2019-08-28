#include "stdio.h"


void imprimir(int,int);
int main(){
    int valor;
    printf("Informe um valor natural  \n");
    scanf("%d",&valor);

    imprimir(valor,0);


}

void imprimir(int valor,int print){
    if(print > valor) 
        return ;
    else{
        printf(" %d  ",print);
        imprimir(valor,print + 1);
    }

}