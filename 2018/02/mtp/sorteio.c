#include "stdio.h"
#include "stdlib.h"


int main(){

    printf("Gerando 300 valores positivos aleatórios");
    int i = 0;

    for( ;i < 300 ; i++){
        printf("%d    %d \n",i, rand() % 300);
    }

    return 0;
}