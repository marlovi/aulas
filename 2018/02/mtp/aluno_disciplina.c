#include "stdio.h"
#include "stdlib.h"
#include "stdio_ext.h"


typedef struct{ //Dentro das Características existe uma váriavel do tipo STRUCT ? 
    char nome[100];
    int inicio; // pensando em hora !
    int final;
} Disciplina;

typedef struct{
    char nome[250];
    char email[250];
    int idade;
    Disciplina* disciplina;
}Aluno;

void imprimir(Disciplina*);

void lerDisciplina(Disciplina*);
void lerDisciplinas(Disciplina*,int);
int main(){
   /* Disciplina estatistica; //É ponteiro ? sim ->    :  . 
    estatistica.inicio = 7; 
    imprimir(&estatistica);
 //   printf("Inicio da aula %d\n",estatistica.inicio);*/

    Aluno joao; //é Alocação Dinânima ?  .

     joao.disciplina = malloc(sizeof(Disciplina) * 2 );   

    printf("Nome do aluno \n");
    fgets(joao.nome,250,stdin);
    printf("Email do aluno \n");
    fgets(joao.email,250,stdin); 
    printf("Idade do aluno \n");
    scanf("%d",&joao.idade);

    lerDisciplinas(joao.disciplina,2);
}

void lerDisciplinas(Disciplina *p,int qtd){
    int i = 0;
    for( ; i < qtd ;i++) lerDisciplina(&p[i]); 
        
}
void lerDisciplina(Disciplina *p){
    __fpurge(stdin);
    printf("Informe o nome da Disciplina\n");
    fgets(p->nome,100,stdin);
    printf("Informe o inicio da aula da disciplina de %s ",p->nome);
    scanf("%d",&p->inicio);
     printf("Informe a hora do fim  da aula da disciplina de %s ",p->nome);
    scanf("%d",&p->final);

}
void imprimir(Disciplina *p){
    //é um vetor ? 
       printf("Inicio da aula %d\n",p->inicio);
}