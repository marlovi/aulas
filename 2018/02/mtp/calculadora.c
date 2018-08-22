#include "stdio.h"
#include "stdlib.h"


int main(){
    int *a;
    int *b;
    int *total; 

    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));
    total = (int*) malloc(sizeof(int));
    printf("Valor A ");
   // printf("%p   ",&a);
    
    scanf("%d",&  (*(a)));
    printf("Valor B ");
    scanf("%d", & (*(b)));

    *total  = *a + *b;
    printf("A soma é %d  ",*total);

    free(a);
    free(b);
    free(total);
    return 0;
}