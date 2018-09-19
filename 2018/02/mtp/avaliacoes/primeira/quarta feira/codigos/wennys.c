#include <stdio.h>
#include <stdlib.h>
int main(){
    int menu();
    void lervetor(int*,int*);
    void imprimir(int *,int *,int *,int *);
    int quantidade(int *,int *);
    int *vetor1;
    int tamanho1;
    int *vetor2;
    int tamanho2;
    printf("Informe o tamanho do vetor 1\n");
    scanf("%d",&tamanho1);
    vetor1 = (int*)malloc(tamanho1*sizeof(int));
    lervetor(vetor1,&tamanho1);
    printf("Informe o tamanho do vetor 2\n");
    scanf("%d",&tamanho2);
    vetor2 = (int*)malloc(tamanho2*sizeof(int));
    quantidade(vetor1,vetor2);
    lervetor(vetor2,&tamanho2);

    imprimir(vetor1,vetor2,&tamanho1,&tamanho2);

    free(vetor1);
    free(vetor2);

    return 0;
}


int menu(){
    int op;
    printf("Questão 1\n");
    printf("Questão 2\n");
    printf("Questão 3\n");
    scanf("%d",&op);

}
void lervetor(int *vetor, int *tamanho){
    int i=0;
    for(;i<*tamanho;i++){
        printf("Informe o elemento do V[%d]\n",i+1);
        scanf("%d",&vetor[i]);
    }
}
void imprimir(int *vetor1,int *vetor2,int *tamanho1,int *tamanho2){
    int i=0;
    for(;i<*tamanho1;i++)
        printf("Os valores de V[%d]= %d %d \n",i,vetor1[i],vetor2[i]);
}
int quantidade(int *vetor1,int *vetor2){
    int i=0;
    for(;vetor1[i]==vetor2[i];){
    }
    return i;
    printf("%d",i);
}