#include "stdio.h"
#include "stdlib.h"
/*
int compar (const void* p1, const void* p2); 

	"retorno da função"
		- valor "menor do que " 0 : p1 vem "antes" de p2
		- valor "igual a" 0 : p1 é "igual" a p2
		- valor "maior do que" 0: p1 vem "depois" de p2

*/

int compararCrescente(const void* p1, const void* p2){
    if( *(int*) p1 == *(int*) p2){
        return 0; //são iguais
    }else if( *(int*) p1 < *(int*)p2 )
        return -1; //vem antes
    else
        return 1;//vem depois
}

int main(){
    int *vetor;
    int i=0;
    vetor = (int*) malloc(4*sizeof(int));
    vetor[0] = 6;
    vetor[1] = 1;
    vetor[2] = 2;
    vetor[3] = 3;

    qsort(vetor,4,sizeof(int),compararCrescente);

    for(i; i<4;i++){
        printf("V[%d] = %d \n",i,vetor[i]);
    }


}