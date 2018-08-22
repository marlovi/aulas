#include "stdlib.h"
#include "stdio.h"

int main(){    
    /*char *a;
    a = (char*)malloc(sizeof(char));

    *a = 'A';
    printf("%c   \n",*(a));
    free(a);
    *a = 'B';
    printf("%c   \n",*(a));
    return 0;*/

    int *p; 
    int tamanho= 3; 
    p = (int*) malloc(tamanho * sizeof(int));

    p[0] = 10;
    p[1]= 20;
    p[2] = 30;


    int i = 0 ;

    for( ; i< 3 ;i++)
        printf("v[%d] = %d  ",i,p[i]);

    free(p);
}