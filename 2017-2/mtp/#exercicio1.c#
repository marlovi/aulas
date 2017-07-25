#include "stdio.h"

int somar_tres_maiores(int,int,int,int);
int main(){
  int n1,n2,n3,n4,resultado;
  printf("Informe o primeiro valor \n");
  scanf("%d",&n1);
  printf("Informe o segundo valor \n");
  scanf("%d",&n2);
  printf("Informe o terceiro valor \n");
  scanf("%d",&n3);
  printf("Informe o quarto valor \n");
  scanf("%d",&n4);
  resultado = somar_tres_maiores(n1,n2,n3,n4);


  printf("A soma dos três maiores elementos é %d \n",resultado);

  //printf("A soma dos três maiores elementos é %d \n",somar_tres_maiores(n1,n2,n3,n4));

  
  return 0;
}

int somar_tres_maiores(int a,int b,int c,int d){
  int menor  = a;
  if(b < menor)
    menor = b;
  if(c < menor)
    menor = c;
  if(d < menor)
    menor = d;

  return ((a+b+c+d)-menor);

}
