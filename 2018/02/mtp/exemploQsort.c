#include "stdlib.h"
#include "stdio.h"

int compararCrescente(const void*,const void*);
int compararDecrescente(const void*,const void*);
void print(int *vetor,int *tamanho);
int main(){
    int* vetor; 
    int tamanho = 5;
    int i=0;
    vetor = (int*) malloc(tamanho * sizeof(int));
    vetor[0] = 10;
    vetor[1]  = -50;
    vetor[2] = 80; 
    vetor[3] = 900000;
    vetor[4] = 0;
    qsort(vetor,tamanho,sizeof(int),compararCrescente); 
    print(vetor,&tamanho);
    printf("\n-------------------------------\n");
    qsort(vetor,tamanho,sizeof(int),compararDecrescente);
    print(vetor,&tamanho);
  
    free(vetor);
}

void print(int *vetor,int *tamanho){
    int i=0;
      for(;i<*(tamanho);i++)
        printf("V[%i] = %d \n",i,vetor[i]);
}

int compararCrescente(const void* p1,const void *p2){
    if(   *(int*) p1 ==  *(int*)p2 )
        return 0;
    else if( *(int*) p1 < *(int*) p2)
        return -1;
    else 
        return 1;
}   
int compararDecrescente(const void* p1,const void *p2){
    if(   *(int*) p1 ==  *(int*)p2 )
        return 0;
    else if( *(int*) p1 < *(int*) p2)
        return 1;
    else 
        return -1;
}   