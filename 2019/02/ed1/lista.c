#include "stdio.h"
#include "stdlib.h"
enum{false,true};
struct aluno{
  int matricula;
  char nome[30];
  float n1,n2,n3;
};
struct elemento{
  struct aluno dados;
  struct elemento *prox; 
};

typedef struct elemento Elem;
typedef struct elemento *Lista;

Lista* criar_lista(){
  Lista *l = malloc(sizeof(Lista));
  if(l != NULL)
    *l = NULL;
  return l;
}

void libera_lista(Lista *li){
  if(li != NULL){
    Elem *aux = *li;
    while(aux != NULL){
      aux = (*li);
      (*li) = (*li)->prox;
      free(aux);
    }
    free(li);
  }

}
int lista_vazia(Lista* l){
  if(l == NULL) return true;
  if( *l ==NULL) return true;
  return false;
}

int insere_lista_inicio(Lista *li, struct aluno al){

  if(li == NULL) return false;
     Elem* no = malloc(sizeof(Elem));
     if(no == NULL) return false;
     no->dados = al;
     no->prox = (*li);
     *li = no;
}

void imprimir(Lista *l){
  Elem *aux = *l;
  while( aux != NULL){
    printf(" %d   \n",(aux)->dados.matricula);
    printf(" %s   \n",(aux)->dados.nome);
    // printf(" %f   %f     %f \n"(aux)->dados.n1, (aux)->dados.n2, (aux)->dados.n3); 
    aux = aux->prox; 
  }

}

int contar(Lista *l){
  Elem *aux = *l;
  int cont = 0;
  while(aux != NULL){
    aux = aux->prox;
    cont++;
  }
  return cont;

}



int main(){
  Lista *li = criar_lista();


  struct aluno al;
  al.matricula = 15;
  struct aluno a2;
  a2.matricula = 16;


  insere_lista_inicio(li,al);
  insere_lista_inicio(li,a2);

  imprimir(li);

  printf("QTD = %d\n",contar(li));
  return 0;
}
