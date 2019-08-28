#include "stdio.h"


typedef struct {
  char nome[250];
  float nota1;
  float nota2;
  int matricula;
  
}Aluno;
Aluno criarAluno();
void imprimir(Aluno a);
int main(){
  Aluno alunos[3];
  int cont = 0;
  for( ; cont < 3  ; cont++){
    alunos[cont] = criarAluno();
  }
  cont = 0;
  for ( ; cont < 3 ;cont++ ){


    imprimir(alunos[cont]);

  }
  return 0;
}



Aluno criarAluno(){
  Aluno a;
  printf("Digite o nome \n");
  //  scanf("%s",&a.nome);
  fgets(a.nome, sizeof(a.nome),stdin);
  printf("Informe a matrícula \n");
  scanf("%d",&a.matricula);
  printf("Digite a primeira nota \n");
  scanf("%f",&a.nota1);
  printf("Digite a segunda nota \n");
  scanf("%f",&a.nota2);

  return a;
}


void imprimir(Aluno a){
  printf(" Nome   %s ",a.nome);
  printf(" Matricula %d\n ",a.matricula);
  printf(" N1   =   %f   N2 = %f   Média final foi  %f \n",a.nota1,a.nota2, ((a.nota1 + a.nota2)/2));

}
