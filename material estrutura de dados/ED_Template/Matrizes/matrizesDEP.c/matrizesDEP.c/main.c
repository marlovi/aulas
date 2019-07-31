//
//  main.c
//  matrizesDEP.c
//
//  Created by Rogério Sousa e Silva on 21/09/16.
//  Copyright © 2016 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void desenhaMatriz(int m[2][2][2]);
int maiorElemento(int m[2][2][2]);

int main() {
    int vet[2][2][2];
    int i,j,k;
    /*for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                vet[i][j][k]=99;
    desenhaMatriz(vet); */
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                scanf("%i",&vet[i][j][k]);
    desenhaMatriz(vet);
    printf("Maior valor: %i\n",maiorElemento(vet));
    
}

void desenhaMatriz(int m[2][2][2]){
    int i, j, k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\n[");
            for(k=0;k<1;k++)
                printf("%i|",m[i][j][k]);
            printf("%i]\n",m[i][j][k]);
        }
        printf("\n");
    }
}

int maiorElemento(int m[2][2][2]){
    int i, j, k, maior=m[0][0][0];
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                if (m[i][j][k]>maior)
                    maior=m[i][j][k];
    return maior;
}
