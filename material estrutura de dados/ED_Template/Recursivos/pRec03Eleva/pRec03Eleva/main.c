//
//  main.c
//  pRec03Eleva
//
//  Created by Rogério Sousa e Silva on 02/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.

#include <stdio.h>
int Eleva(int x, int y);
int main(int argc, const char * argv[]) {
    int a,b;
    printf("Digite a base e o expoente: ");
    scanf("%i %i",&a,&b);
    printf("Resultado [%i]ˆ[%i] = [%i]\n",a,b,Eleva(a,b));
    return 0;
}

int Eleva(int x, int y){
    if (y==0) return 1;
    else return x * Eleva(x,y-1);
}

