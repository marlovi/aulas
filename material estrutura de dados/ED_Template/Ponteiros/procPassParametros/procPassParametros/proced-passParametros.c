//
//  main.c
//  procPassParametros
//
//  Created by Rogério Sousa e Silva on 09/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
// Protótipo
void Proced1(int par1);
void Proced2(int *par1);
int Func1(int *par1);

int main(int argc, const char * argv[]) {
    int arg1=11, arg2=22, ret=99;
    Proced1(arg1);
    Proced1(arg2);
    Proced1(55);
    printf("arg1:%i arg2:%i\n",arg1,arg2);
    Proced2(&arg1);
    Proced2(&arg2);
    printf("arg1:%i arg2:%i\n",arg1,arg2);
    ret=Func1(&arg1);
    printf("Retorno Função: %i\n",Func1(&arg2));
    printf("arg1:%i arg2:%i\n",arg1,arg2);
    return 0;
}

void Proced1(int par1){
    par1=par1*3;
    printf("Par1:%i\n",par1);
}

void Proced2(int *par1){
    *par1 = *par1 * 5;
    printf("Par1:%i\n",*par1);
}

int Func1(int *par1){
    *par1 = *par1 * 5;
    printf("Par1:%i\n",*par1);
    return *par1 + 5;
}

