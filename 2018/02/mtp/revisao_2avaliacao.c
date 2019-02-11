#include "stdio.h" 
#include "stdlib.h" //alocação dinâmica
#include "stdio_ext.h" //buffer __fpurge(stdin)

typedef struct{
 float nota;
}Aluno;



void ponteiro(int*,int*);
void imprimir(int*,int);


int main(){
    //como ?
    Aluno *aluno = malloc(sizeof(Aluno)  * 10);
    free(aluno);

    //ponteiros  ->
    int vetor[3];
    vetor[0]=1;
    vetor[1]=2;
    vetor[2]=3;


    int *a1 =  malloc(sizeof(int) );  //como alocar um vetor
    int x =5;
    int y = 9;
    ponteiro(&x,&y);
    printf("%d      %d\n",x,y);
    imprimir(vetor,3); 

    char xx = 'o';

    switch(xx){
        case 'o':{
            printf("ooooooooooooooooooooo");
        }break;
    }

}
void ponteiro(int *a, int *carro){
    *a = *a + 10;
    *carro = 1000;
}

void imprimir(int *v,int fim){
    int i=0;
    for( ;i<fim ; i++)
        printf("v[%d] = %d \n",i,v[i]);
}