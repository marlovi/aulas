#include "stdio.h"
#include "stdlib.h"

enum{false,true};
struct aluno{
  int matricula;
  float n1,n2,n3; 
};

struct elemento{
  struct aluno dados;
  struct elemento *proximo; 
};


typedef struct elemento Elem;
typedef struct elemento* Pilha;

int pilha_vazia(Pilha *pi);
int pop(Pilha* pi, Elem *elem);
Pilha* criar_pilha(); 
int push(Pilha* pi, struct aluno al);
int main(){
  Pilha *pi; // vale null
   pi = criar_pilha();
  struct aluno al;
  al.matricula = 123;

  if(push(pi,al)==true){
    printf("Aluno adicionado com sucesso !"); 
  }
  Elem *removido = malloc(sizeof(Elem)); 
  if(pop(pi , removido)){
    printf("REmovido com sucesso %d",removido->dados.matricula);  
  }
 

  
  return 0;
}

Pilha* criar_pilha(){
  Pilha *p = malloc(sizeof(Pilha));

  if( p != NULL) // se a alocação aconteceu corretamente
    *p = NULL; // o conteúdo do ponteiro recebe NULL

  return p; 

}

int pilha_vazia(Pilha *pi){
  if(pi == NULL) // pilha não existe
    return true;
  if(*pi == NULL) // a pilha existe porém está não está apontando para nenhum elemento
    return true;
  else return false; 
}

/**
Em uma pilha a inserção é sempre no seu início 
Também existe o caso onde a inserção é feita em uma pilha que está vazia
Cuidado: Não se pode inserir em uma pilha cheia. (if)
**/

int push(Pilha* pi, struct aluno al){
  if(pi == NULL) return false; // ocorreu algum erro na alocação ou esqueceu de alocar o recurso
  Elem* no = malloc(sizeof(Elem));
  
  if(no == NULL) return false; 

  no->dados = al;
  no->proximo = (*pi);
  (*pi) = no;
 
  return true;
}

/**
   Em uma pilha a remoção é sempre no seu início
   Cuidado: não se pode remover de uma pilha vazia
**/


int pop(Pilha* pi, Elem *elem){

  if(pi == NULL ) return false;
  if( (*pi) == NULL) return  false;

  Elem *aux = *pi;   //pegando o primeiro elemento da pilha e adicionar na variável auxiliar

  *pi= aux->proximo;
  *elem = *aux; //só para identificar qual elemento foi removido 
  free(aux);

  return true;
}



