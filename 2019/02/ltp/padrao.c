#include "stdio.h"






int soma(int,int);
int menu();
int main(){

  int op;

  do{
    op = menu();
    switch(op){
    case 1:{
      int v1;
      int v2;

      printf("Informe o primeiro valor a ser somado \n");
      scanf("%d",&v1);
      printf("Informe o segundo valor a ser somado \n");
      scanf("%d",&v2);

      printf(" A soma resultando de V1 = %d   e V2 = %d  é  %d \n\n ",v1,v2,soma(v1,v2));
      }
       break;

    case 0:{


    } break;

    default: 
      printf("Opção Inválida\n");
    }

    
  }while(op !=0 );
  return 0;
}

int menu(){
  int op;
  

  printf("Digite 1 para .....\n");
  printf("Digite 0 para Sair \n");
  scanf("%d",&op);

  return op;
}



int soma(int a, int b){

  return ( a+ b);
}
