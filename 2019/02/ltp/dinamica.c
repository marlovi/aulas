#include "stdio.h"
#include "stdlib.h"
void imprimir(int*, int);
void ler(int*, int);
int comparacao(const void*, const void* ); 
int main(){
  int tamanho;
  int *vetor; 
  printf("Informe o tamanho do vetor a ser alocado dinamicamente \n");
  scanf("%d",&tamanho);
  vetor = (int*) malloc(sizeof(int)*tamanho); // alocação dinâmica 
  ler(vetor,tamanho);
  qsort(vetor,tamanho,sizeof(int),comparacao); 
  imprimir(vetor,tamanho);
  free(vetor);
}

int  comparacao(const void * a, const void* b){
  return     (*(int*)a)  -    (*(int*)b); 
}

void imprimir(int *v,int t){
  int i = 0;
  for ( ; i< t;i++)
    printf(" V[%d] = %d \n",i,v[i]);
}
void ler(int *v, int t){
  int i = 0;
    while(i < t){
      printf("Informe o elemento para a posição v[%d] \n",i);
      scanf("%d",&v[i]);
      i++;
    }
}
