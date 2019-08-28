#include "stdio.h"

int somaDesc(int *vetor, int i);
int soma(int*, int i);
int main(){
    int i = 0; 
    int *vetor;
    for(; i< 9 ; i++){
        vetor[i] = i;
        printf(" v  [%d ] =%d   \n",vetor[i],i);
    }
        i=0;

      printf("A soma dos elementos é  %d   \n",soma(vetor,i));

     printf("A soma dos elementos utilizando DESC é %d \n",somaDesc(vetor,8));

    return 0;   
}

int soma(int *v,int i){
    if(i == 8){
        return v[i];
    }else{
        printf("v[%d] + soma(vetor,%d + 1) \n",v[i], i +1 );
        return v[i] + soma(v, i + 1);
    }
}

int somaDesc(int *vetor, int i){
    if(i == 0 )
        return vetor[i];
    else return vetor[i] + somaDesc(vetor, i - 1 );
    
}