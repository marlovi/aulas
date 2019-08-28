#include "stdio.h"
#define MAX 5 

float media(int*,int,int);
int main(){

    int vetor[MAX]; 
    int i=0;
    while(i<MAX){
        printf("Informe um valor para a %d posição \n",i);
        scanf("%d",&vetor[i]);    
    i++;
    }

    printf("A média é %.2f",media(vetor,MAX-1,0));
}

float media(int *v,int i,int soma){
    if(i == 0){
        
        return (soma+ v[i])/(float)MAX;
    }else{
        soma = soma + v[i];
        return media(v,i-1,soma);
    }
}