#include "stdio.h"

int fatorial(int);
int main(){
    int valor = 5;
    printf("Resultado é do fatorial de %d  é %d \n",
    valor,
    fatorial(valor));
    return 0;
}

int fatorial(int n){
    if(n==100){
        printf("Parada n == %d ",n);
        return 1;
    }else{
        printf(" %d   fatorial(%d) \n", n , (n-1));
        return n * fatorial(n - 1 );
    }

}