#include "stdio.h"




int main(){
    int numero;
    int invertido;
    int digito; 
    int digitado; 

    printf("Informe um valor \n");
    scanf("%d",&digitado);

    numero = digitado;

    while(numero !=0){
        digito = numero % 10;
        invertido = (invertido * 10 ) + digito;
        numero = numero / 10; 
    }

    printf("%s", (digitado == invertido)? "É Palindromo": "Não Palindromo");
    



    return 0;
}