#include "stdio.h"


int main(){
    int a = 8;
    int c = 2;
    int *b; // declaração do ponteiro B
    //objetivo apontar para o endereço de memória de A 
   
    b = &a; /// apontando para o endereço de memória de A


    printf( "   %p   %p   \n  ",b,&a);
    printf(" valor de desreferenciamento %d   a=  %d  \n  ", (*b), a);
    (*b) = 3; 
    printf(" valor de desreferenciamento %d   a=  %d  \n  ", (*b), a);

    b = &c; // ponteiro deixa de apontar para A e aponta para C 

    (*b) = 89;


    printf("A = %d    C = %d  ",a,c); 





    return 0;
}