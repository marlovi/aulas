#include "stdio.h"


enum{false,true};

void teste(char*);
int perfeito(int*);
void sub(int,int,int*);
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
      char v[50];

      teste(v);
      
    } break;
    case 7:{/*
      int resultado =0;
      int v1=10;
      int v2=5;
      sub(v1,v2,&resultado); // três parametros por valor = cópia
      printf("Sub = %d \n",resultado);*/

      int valor;
      printf("Informe um valor \n");
      scanf("%d",&valor);

      if(perfeito(&valor)){   // 0    // 1 
	printf("O número é perfeito \n");
      }else{
	printf("O número é imperfeito \n");
      }

      
    }break;
      

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

void sub(int a, int b, int *c){
  *c = a - b;

}


int perfeito(int *v){
  int i=1;

  int soma=0;

  while(i < *v){
    if( (*v % i) ==0)
      soma = soma + i;
    i++;
  }

  if(soma == *v)
    return true;
  else return false;
  
}


void teste(char *v){
  v = "testando";

  printf("oi %s",v);
}
