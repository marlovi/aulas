#include "stdio.h"


void media(float*, float*, float*, char*, float*);
int main(){
    float n1 = 5.f;
    float n2 = 9.f;
    float n3 = 7.5f;
    char a = 'A';
    char p = 'P';
    float resultado = 0.f;
     media(&n1,&n2,&n3,&a,&resultado);
    printf("A     =  %f \n ",resultado);

     media(&n1,&n2,&n3,&p,&resultado);
    printf("P     =  %f \n ",resultado);
    

    return 0;
}

void media(float *n1, float *n2, float *n3, char *op, float *resultado){
    *resultado =  ( ((*op) == 'A') ? (( (*n1) + (*n2) + (*n3)  )/3.f ) : 
      (   (*n1) * 5 + (*n2) * 3  + (*n3) * 2 ) / 10.f ); 
}