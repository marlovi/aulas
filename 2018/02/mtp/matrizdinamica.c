#include "stdlib.h"
#include "stdio.h"


int main(){
    int **m;
    int quadrada = 2; 
    int i = 0,j=0;
    m =    (int**) malloc(quadrada * sizeof(int*));

    for( ; i< quadrada ; i++){
        //alocando um vetor para cada posição de memoría da primeira dimenssão  m[ :) ]
        m[i] = (int*) malloc(quadrada * sizeof(int));
        //printf("%p \n", &m[i]);
    }

    for(i = 0 ; i< quadrada ; i++){
        for( j =0 ; j< quadrada ; j++){
            m[i][j] = 10+j;
        }
    }

    for(i = 0 ; i< quadrada ; i++){
        for( j =0 ; j< quadrada ; j++){
           printf("m[%d][%d] = %d \n",i,j,m[i][j]);
        }
    }


    //desalocando os recursos

    for( i = quadrada ; i>= 0 ; i--){
        free(m[i]);
    }




    return 0;
}