#include "stdio.h"


char menu();
int main(){

  char op ='0';

  do{
    op = menu();

    switch(op){

    case 'a':{
      int a = 10;
      printf("Tranquilo %d \n",a);
    }
      
      break;
    case 'b':{
      int a = 5;
      printf("%d \n",a);
    }
      break;  
    default:
      printf("ERRO");
      
    }
   
  }while(op != 's' );
       
  
  return 0;
}

char menu(){
  char  op = '9';
  printf("Exemplo Menu Digite S  para Sair\n\n");
  scanf("%c", &op);
  __fpurge(stdin);

  return op;
}
