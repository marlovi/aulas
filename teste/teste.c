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
 
 printf("%d         %d \n  ",qtd,v);
    if(v > 0){
        
        return 0+conta_tamanho(v,qtd +1 );
    }else return qtd;
}
int tamanho(int v){
    int contador=0;
    while(v> 0 ){
        contador++;
        v = v/10;
    }


    return contador;
}
int main(){
    int n=12345;
    printf("%d \n",conta_tamanho(n,1));
    return 0;
}