#include "stdio.h"
#include "stdlib.h"


int main(){
  int i,j,aux=0;
  int **p;

  p = (int**) malloc(sizeof(int*) * 5);
  if(p!=NULL)
    printf("Matriz alocada com sucesso!!\n");
  else
    printf("Não foi possível alocar o recurso desejado \n");

  for(i=0; i< 5 ; i++)
    p[i] = (int*) malloc(sizeof(int) * 3);

  for(i=0 ; i< 5 ; i++)
    for(j=0 ; j < 3 ; j++){
      p[i][j] = aux;
      aux = aux +2;
    }


  
  for(i=0 ; i< 5 ; i++){
    for(j=0 ; j < 3 ; j++){
      printf(" [%d,%d]= [%d] ",i,j,p[i][j]);
    }
    printf("\n");
  }
  return 0;
}
