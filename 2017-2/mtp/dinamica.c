#include "stdlib.h"
#include "stdio.h"

struct disciplina{
    int mtp;
    int calculo;
} ;

int main(){
    int n=3;
    int cc[] = {1,2,3};
    float *(v); 
    struct disciplina *IF;
    
    IF = (struct disciplina*) malloc(sizeof(struct disciplina));
     
    IF->mtp = 10;
    IF->calculo = 5;

    printf(" STRUCT    %d      %d     ",IF->mtp,IF->calculo);


  //  v = (float*) calloc(4,sizeof(float));
      v = (float*) malloc(4*sizeof(float));
    v[0] = 1.0;
    v[1] = 1.0;
    v[2] = 0.5;
    v[3] = 0.5;



    int i = 0;
    float soma=0.0f;
    for( ; i< 4 ; i++){
        soma = soma  + v[i];
    }

    printf("%f    ",soma);

   // printf("%d ",*b);
    free(v);
    return 0;


}
