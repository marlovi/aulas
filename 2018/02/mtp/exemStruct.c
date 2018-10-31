#include "stdio.h"
#include "stdlib.h"


typedef struct {
    char nome[200];
    int idade;
    float salario;
} Funcionario;

int main(){

    typedef struct {
        int nota1;
        int nota2;
    } Aluno; 

    Funcionario func; // é alocação dinâmica ? não anotação . 

    printf("Informe o nome do funcionário \n");
    fgets(func.nome,200,stdin);

    printf("%s ",func.nome);

    func.idade = 32;
    func.salario = 2000;


    printf("%d \n%f\n",func.idade,func.salario);


    Funcionario* dinamico = malloc(sizeof(Funcionario));

    dinamico->salario = 5000;

    printf("%f ",dinamico->salario);


    free(dinamico);

    Aluno sala1[2]; 
    sala1[0].nota1 = 10;
    sala1[1].nota2 = 0;

    Aluno* felipes = malloc(sizeof(Aluno) * 2);

    felipes[0].nota1 = 20; 
    felipes[1].nota2 = 30; 


    printf("sala 1 %d %d \n",sala1[0].nota1,sala1[1].nota2);
    printf("felipes %d %d \n",felipes[0].nota1,felipes[1].nota2);








}