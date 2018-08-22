#include "stdio.h"
#include "stdlib.h"

int compararCrescente(const void*, const void*);
int main(){
    int *vetor = malloc(5 * sizeof(int));
    vetor[0] = 500;
    vetor[1] = -10;
    vetor[2] = 20;
    vetor[3] = 5;
    vetor[4] = 80; 


    qsort(vetor,5, sizeof(int),compararCrescente);

    int i=0;
    for( ; i< 5 ; i++) 
        printf(" v[%d]  =  %d \n",i,vetor[i]);
    free(vetor);
    return 0;
}

int compararCrescente(const void* p1, const void* p2){
    if(*(int*)p1 == *(int*)p2) return 0;
    else if( *(int*)p1 < *(int*)p2 )
    return -1;
    else return 1;
}
