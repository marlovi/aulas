//
//  main.c
//  pRec04mdc
//
//  Created by Rogério Sousa e Silva on 02/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
int mdc(int a, int b);
int main(int argc, const char * argv[]) {
    int a,b;
    printf("Cálculo do MDC(A,B)\nDigite A e B\n");
    scanf("%i %i",&a,&b);
    printf("MDC(%i,%i) = [%i]\n",a,b,mdc(a,b));
    return 0;
}

int mdc(int a, int b){
    if(b==0) return a;
    else return mdc(b,a%b);
}
