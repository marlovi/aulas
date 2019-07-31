//
//  main.c
//  pRec06maiorElementoVetor
//
//  Created by Rogério Sousa e Silva on 07/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
int maiorElemVetor(int vet[],int t);
int maiorElemVetor2(int vet[],int t);
int maiorElemVetor3(int vet[],int t);
int main(int argc, const char * argv[]) {
    int a[10]={12,34,16,9,49,54,21,12,43,11};
    printf("Maior Elemento: [%i]\n",maiorElemVetor(a,10));
    printf("Maior Elemento: [%i]\n",maiorElemVetor2(a,10));
    printf("Maior Elemento: [%i]\n",maiorElemVetor3(a,10));
    return 0;
}

int maiorElemVetor(int vet[],int t){
    int m;
    if(t>1){
        m = maiorElemVetor(vet, t-1);
        if(vet[t-1]>m) return vet[t-1];
        else return m;
    }
    else return vet[0];
}


int maiorElemVetor2(int vet[],int t){
    if(t>1){
        if(vet[t-1]>maiorElemVetor2(vet, t-1)) return vet[t-1];
        else return maiorElemVetor2(vet, t-1);
    }
    else return vet[0];
}
int maiorElemVetor3(int vet[],int t){
    if(t>1){
        return (vet[t-1]>maiorElemVetor3(vet, t-1))?vet[t-1]:maiorElemVetor3(vet, t-1);
    }
    else return vet[0];
}
