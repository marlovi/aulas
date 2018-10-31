#include "stdio.h"
#include "stdlib.h"
#include "stdio_ext.h"


typedef struct {
    char nome[300];
    long int matricula;
    float nota1;
    float nota2; 
    float nota3;
    float nota4;
    float media;
} Aluno;

void imprimir(Aluno*);

int main(){
    Aluno* aluno = (Aluno*) malloc(sizeof(Aluno)  /* * tamanho */ );//?? Sim ? é Vetor Não ->  
    Aluno* turmaA = (Aluno*) malloc(sizeof(Aluno) * 2); //Sim  é Vetor Sim  . 
    Aluno joao; //Variavel não é ponteiro  .

int a;
  /*  printf("Informe o nome de um aluno \n"); 
    fgets(aluno->nome,300,stdin);*/

    //printf("O nome do aluno ->  %s ",aluno->nome);
/*
    printf("Informe um nome \n");
    fgets(turmaA[0].nome,300,stdin);
    printf("Informe um nome \n");
    fgets(turmaA[1].nome,300,stdin);


    int i=0;
    for(;i<2;i++) printf(" turmaA[%d] %s ",i,turmaA[i].nome);

    __fpurge(stdin); 

*/
    fgets(joao.nome,300,stdin);
    printf("%s ",joao.nome);
    free(turmaA);
    return 0;
}

void imprimir(Aluno* p){

}