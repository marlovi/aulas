#include "stdio.h"
#include "stdlib.h"

struct marlus{
        int a;
        int b;
};


int main(){
         struct marlus *mar;
        mar = (struct marlus*)malloc(sizeof(struct marlus));
        mar->b =10;
        mar->a = 11;
        int *x;
        x =  calloc(10,sizeof(int));

        x[0] = 10;

        printf("%d    %d",mar->a,mar->b);
        free(x);
return 0;
}