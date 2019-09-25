#include "stdlib.h"
#include "stdio.h"

int main(){
    int *qtd = (int*) malloc(sizeof(int)); // alocando o recurso
    printf("Informe a quantidade de alunos \n");
    scanf("%d",& (*qtd) );
    printf("%d",*qtd);

    int *vetor = malloc(sizeof(int) * (*qtd)); 
    int *i = malloc(sizeof(int));

    for(*i = 0; *i < *qtd;(*i)++){
        printf("Informe a %d nota \n", (*i)+1);
        scanf("%d", &vetor[*i]);    
    }
    int *soma = malloc(sizeof(int)); 
    *soma = 0;
    for( (*i) = 0; (*i) < (*qtd);(*i)++)
            *soma = vetor[*i] + (*soma);

    printf("A média é %d \n", (*soma) / (*qtd)); 

    free(soma);
    free(i);
    free(vetor); 
    free(qtd);//libera o recurso
    return 0;
}