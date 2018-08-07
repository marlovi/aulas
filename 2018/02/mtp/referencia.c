#include "stdio.h"

void exemplo(int*);
int main(){
    int x = 3;

    exemplo(&x);
    printf("x = %d \n",x);
    // A main neste contexto é uma função ou procedimento ? 
    return 0;
}


void exemplo(int *a){
    printf("O valor da referência é %d e o elemento desreferenciado é  %d \n ", a,  (*a));
    (*a) = 10;

    int b = 20;
    a = &b;
 
    (*a) = 2;
    printf("b = %d \n",b);     
}
