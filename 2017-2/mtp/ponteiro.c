
#include "stdio.h"


void main(){
  int a=6;
  int *ponteiro;

  ponteiro = &a;//0001
  printf("Antes de alterar o valor  A = %d \n",a);
  *ponteiro = 17;

  (*ponteiro)++;
  ponteiro++;//0001+1

  printf(" Endereço do Memória de A = %d \n",&a);
  printf(" Endereço de Memória que o ponteiro está apontando neste momento %d \n",ponteiro);

  printf("%d \n",*ponteiro);
  //printf("%d\n",&a);
  //printf("%d\n",a);

  /// printf("%d\n",ponteiro);
}
