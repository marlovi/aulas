#include "stdio.h"

/*
int fat(int *n){
    if(*n == 0 ) return 1;
    else{
        int v = *n -1;
        return (*n) * fat( (*n -1 ) );    
    
    } 
}
*/
int conta_tamanho(int v,int qtd){
   v=v/10;
    if(v > 0){
        return 0+conta_tamanho(v,qtd +1 );
    }else return qtd;
}

int main(){
    int n=12345;
    printf("%d \n",conta_tamanho(n,1));
    return 0;
}