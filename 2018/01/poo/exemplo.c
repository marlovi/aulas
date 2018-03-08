#include "stdio.h"


int somaInt(int a, int b){
 return a + b;
}

float somaFloat(float a, float b){
 return a + b;
}
char somaChar(char a,char b){
    return a + b;
}

int main(){
    printf("    %i    ",somaInt(2,2));
    printf("     %f  ",somaFloat(2.4,2.6));
    printf("     %c   ",somaChar('a','A'));
    return 0;
}