#include "stdio.h"
#include "stdlib.h"


void ler(int*,int);
int somatorio(int *,int,int);
int main(){
    int tamanho = 5; 
    int *v = malloc(tamanho * sizeof(int));

    ler(v,tamanho);

    printf("somade de todos os elementos é %d    \n",somatorio(v,tamanho,0));

    free(v);


return 0;
}

int somatorio(int *v,int tamanho, int i){
   // v = {10,0,1,2}
   // v {2,1,0,10}
   // i = 0 
    if( i == tamanho - 1 ){
        return v[i];
    }else 
        return v[i] + somatorio(v,tamanho, i + 1 );
}

void ler(int *v,int tamanho){
    int i = 0;
    for( ; i<tamanho;i++){
        printf("Informe o V[%d] = \n",i);
        scanf("%d",&v[i]);
    }
}