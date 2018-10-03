#include "stdio.h"


int main(){
    int valor = 54875;
    int contar =  1;
    while(1){
        valor = (valor / 10);
        if(  valor > 0 )
        {
            contar = contar +1;
        }else break;
    }
    printf("A quantidade de elementos contados foi de %d \n",contar);
}