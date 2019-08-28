#include "stdio.h"
#define MAX 10
enum{false,true};

int pilha[MAX];

int TOPO;

int vazia();
int cheia();
void push(int);
int pop();
int main(){
  TOPO = -1; //inicializando a pilha

  // 1 2 3 4 6 5
  //desempilha.

  push(1);
  push(2);

  printf("%d \n ",pop());
  printf("%d \n ",pop());
  printf("%d \n ",pop());

}

void push(int valor){   /// empilhar
 
  if(!cheia()){
    TOPO++;
    pilha[TOPO] = valor;
  }else{
    printf("\n A Pilha está cheia não é possível adicionar novos elementos \n");
  }

}

int pop(){ // desempilha
  int aux = -999;
  if(!vazia()){
    aux = pilha[TOPO];
    TOPO--;
  }else{
    printf("\n Não é possível desempilhar a pilha já está vazia !\n");
  }
  return aux;
}

int cheia(){
  if(TOPO == (MAX-1) )
    return true;
  else return false;
}
int vazia(){
  if(TOPO < 0) return true;
  else return false;
}
