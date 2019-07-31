//
//  main.c
//  pRec05SomaVetor
//
//  Created by Rogério Sousa e Silva on 02/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
int somaElementosVetor(int vet[], int nelem);
int main(int argc, const char * argv[]) {
    int a[10]={ 1,2,3,4,5,6,7,8,9,10};
    printf("Soma dos elementos:%i \n",somaElementosVetor(a,10));
    return 0;
}
int somaElementosVetor(int vet[], int nelem){
    if(nelem>=0)return vet[nelem-1]+somaElementosVetor(vet,nelem-1);
    else return 0;
}
