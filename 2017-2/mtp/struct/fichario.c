#include <stdio.h>
#define QTD 3
typedef struct{
    char nome[100];
    int matricula;
    float n1;
    float n2;
} Aluno;

int main(){ 
   Aluno aluno[QTD];
    int i= 0;

    for(;i<QTD;i++){
        __fpurge(stdin);
        printf("Informe um nome \n");
        fgets(aluno[i].nome,100,stdin);
        printf("Informe a matricula\n");
        scanf("%i",&aluno[i].matricula);
        printf("Informe a primeira nota \n");
        scanf("%f",&aluno[i].n1);
        printf("Informe a segunda nota \n");
        scanf("%f",&aluno[i].n2);
        }   
   
        for(i=0;i<QTD;i++){
            printf("Nome \n");
            puts(aluno[i].nome);
            printf("Matricula %i \n",aluno[i].matricula);
            printf("N1 %f  \n",aluno[i].n1);
            printf("N2 %f  \n",aluno[i].n2);
            printf("Média  %f \n",((aluno[i].n1 + aluno[i].n2)/2));
        }

        return 0;
    }