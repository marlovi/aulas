#include "stdlib.h"
#include "stdio.h"


int main(){
        int **matriz; 
        int quadrada = 4;
        int i = 0;
        int j=0;

        matriz = (int**) malloc(quadrada * sizeof(int*)); // está alocando uma matriz ? 
        for( ; i< quadrada ; i++){
            matriz[i] = (int*) malloc(quadrada * sizeof(int));
        }

        for( i = 0 ; i < quadrada ; i++){
            for(;j< quadrada;j++)
                matriz[i][j] = 10+j;
        }

         for( i = 0 ; i < quadrada ; i++){
            for(j=0;j< quadrada;j++)
            printf("matriz[%d][%d] = %d \n",i,j,matriz[i][j]);
        }

    for(i = quadrada ; i >= 0 ; i--){
        free(matriz[i]);
    }
    return 0;
}