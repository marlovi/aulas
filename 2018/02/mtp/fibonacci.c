#include "stdio.h"

long int fib(long int);
int main(){
    int valor;
    printf("Informe um valor\n");
    scanf("%d",&valor);
    printf("O Elemento %d  possui o valor %ld na Série de Fibonacci \n",valor,fib(valor));
}

long int fib(long int n){
    if(n==0)
        return 0;
    else if(n ==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}