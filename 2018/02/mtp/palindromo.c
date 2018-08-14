//PROGRAMA PARA DETERMINAR SE UM NUMERO É PALINDROMO
#include <stdio.h>
#include <stdlib.h>
  
int main(){
 int digitado,num,invertido,digito;
 printf("Digite numero inteiro: ");
 scanf("%d",&digitado);
 num = digitado;
 invertido = 0;
 while(num != 0){
    digito = num % 10;
    invertido = (invertido * 10) + digito;
    num = num / 10;
 }
 if(digitado == invertido)
    printf("Palindromo !!!\n");
 else
    printf("Nao eh Palindromo!!!\n");
  
}