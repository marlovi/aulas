//
//  main.c
//  pRec01Fatorial
//
//  Created by Rogério Sousa e Silva on 02/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>

int Fatorial(int n);

int main(int argc, const char * argv[]) {
    int n;
    printf("Digite um número: ");
    scanf("%i",&n);
    printf("Fatorial de [%i] é [%i]\n",n,Fatorial(n));
    return 0;
}

int Fatorial(int n){
    if(n==0) return 1;
    else return n*Fatorial(n-1);
}
