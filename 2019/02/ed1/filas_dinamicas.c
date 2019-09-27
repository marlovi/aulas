#include "stdio.h"
#include "stdlib.h"
enum{false,true};

struct aluno{
  int matricula;
  char nome[30];
  float n1,n2,n3;
  
};

struct fila{
  struct elemento *inicio;
  struct elemento *final;

};

struct elemento{
  struct aluno dados;
  struct elemento *prox; 
};
typedef struct elemento Elem;
typedef struct fila Fila;




Fila* criar_fila(){
  Fila *f = (Fila*) malloc(sizeof(Fila));

  if( f != NULL){
    f->inicio = NULL;
    f->final = NULL;
  }

  return f;

}


void liberar_fila(Fila* f){
  if(f !=NULL){
    Elem* aux;
    while(f->inicio != NULL){
      aux = f->inicio;
      f->inicio = f->inicio->prox;
      free(aux); 
    }
    free(f);
  }
}
int tamanho_fila(Fila *f){
  if(f == NULL) return false;
  int contador = 0;
  Elem* aux = f->inicio;
  while(aux != NULL){
    contador++;
    aux = aux->prox;
  }
  return contador;
}

int fila_vazia(Fila *f){
  if(f == NULL) return false;
  if(f->inicio == NULL) return true;
  return false; 
}

int insere_fila(Fila* f, struct aluno al){
  if(f ==NULL ) return false;
  Elem *no = (Elem*) malloc(sizeof(Elem));
  if(no == NULL) return false;
  no->dados = al;
  no->prox = NULL;
  if(f->final == NULL) // fila vazia
    f->inicio = no;
  else
    f->final->prox = no;
  f->final = no;
}

int remover_da_fila(Fila *f){

  if(f == NULL) return false;
  if(f->inicio == NULL) return false;
  Elem* aux = f->inicio;
  f->inicio = f->inicio->prox;
  if(f->inicio == NULL)
    f->final = NULL;
  free(aux);

  return true;

}

int main(){
  Fila *fi;

  fi = criar_fila();
  return 0;
}
