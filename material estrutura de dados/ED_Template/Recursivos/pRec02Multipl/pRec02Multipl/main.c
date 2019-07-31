//
//  main.c
//  pRec02Multipl
//
//  Created by Rogério Sousa e Silva on 02/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
int Multiplica(int x, int y);
int main(int argc, const char * argv[]) {
    int a,b;
    printf("Digite os dois fatores para multiplicação: ");
    scanf("%i %i",&a,&b);
    printf("Resultado [%i]x[%i] = [%i]\n",a,b,Multiplica(a,b));
    return 0;
}

int Multiplica(int x, int y){
    if (y==0) return 0;
    else return x + Multiplica(x,y-1);
}
