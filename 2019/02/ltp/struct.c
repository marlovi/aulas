#include "stdio.h"
#include "stdlib.h"

struct pessoa{
  char nome[50];
  char telefone[20];
  char cidade[30];
  int idade;
  char email[50];
  char profissao[20];
};

typedef struct pessoa Pessoa; 
int main(){
  Pessoa  alunos[2];

  alunos[0].idade = 10;
  alunos[1].idade = 11;

  printf("A idade do aluno 0 é %d   e   aluno 1 é  %d\n",alunos[0].idade,alunos[1].idade);

  Pessoa *maria = malloc(sizeof(Pessoa));
  if(maria !=NULL){
    maria->idade = 25;
    printf("A idade de maria é %d \n",maria->idade);
    printf("Informe o email \n");
    fgets(maria->email,50,stdin);

    printf("Email informado foi %s",maria->email);
    free(maria);
  }
  return 0;
}
