#include "stdio.h"
#include "stdlib.h"


int main(){
    char *c;
    int tamanho = 3;

    c =  (char*)     malloc( tamanho * sizeof(char)  );
     
    c[0] ='A';
    c[2] = 'b';
    printf("%c ",c[1]);
    return 0;
}

