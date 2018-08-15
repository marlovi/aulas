#include "stdio.h"

enum{FALSE = 0, TRUE};

int verifica_primo(int*);
int main(){
    int valor;
    printf("Informe um valor inteiro positivo \n");
    scanf("%d",&valor);

    printf("O valor %d   %s ",valor,((verifica_primo(&valor) == TRUE)?"é primo": "não é primo"));

    return 0;
}

int verifica_primo(int *v){
    int i,resposta=0;

    for( i = 1 ; i<= (*v);i++)
        if((  (*v) % i    )== 0  ) 
            resposta++;
    
    
    return ((resposta == 2)? TRUE : FALSE); 
}
