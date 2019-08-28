#include "stdio.h"


typedef struct {
  char nome[50];
  int matricula;
  float nota1;
  float nota2;

}Aluno;





Aluno ler(Aluno a);
int main(){

  Aluno alunos[3];
  int i=0;

  while( i < 3){
    alunos[i] = ler(alunos[i]); 

    i++;
  }
  i=0;
  while(i < 3){
    printf("O Aluno    %s    teve a média %.2f \n",alunos[i].nome, (alunos[i].nota1 + alunos[i].nota2)/2 );

    i++;}
  
}
Aluno ler(Aluno a){
  printf("Informe  o nome \n");
  scanf("%s",&a.nome);
  printf("Informe a matricula \n");
  scanf("%d",&a.matricula);
  printf("Informe a primeira nota \n");
  scanf("%f",&a.nota1);
  printf("Informe a segunda nota \n");
  scanf("%f",&a.nota2);


  return a;

}
