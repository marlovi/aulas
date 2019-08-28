#include "stdio.h"
#define MAX 5
enum{false,true};
typedef struct{
	int topo;
	int elementos[MAX];
} Pilha;


int vazia(Pilha *p){
	if(p->topo < 0) 
	    return true;
	else return false;
}
int cheia(Pilha *p){

	if(p->topo == MAX -1)
		return true;
	else return false;

}

void inicializar(Pilha *p){
	p->topo = -1;
}


void push(Pilha *p, int valor){
	if(cheia(p))
		printf("A pilha está cheia, não é possível adicionar o elemento %d \n",valor);
	else{
		p->topo++;
		p->elementos[p->topo] = valor;

	}
	
}

int pop(Pilha *p){
	int aux = 0;
	if(vazia(p))
	 printf("A pilha está vazia, não é possível remover elementos \n");
	else{
		aux = p->elementos[p->topo];
		p->topo--;
	}
	return aux;
}


int compare(Pilha *p1, Pilha *p2){
	int retorno = true;
	int i=0;
	for(;i<MAX;i++){
		if(pop(p1) != pop(p2)){
		 retorno = false;
		 break;
		}
	}
	return retorno;
}

int main(){

	Pilha a;
	Pilha b;
	inicializar(&a);
        inicializar(&b);

	push(&a,1);
	
	push(&a,2);
	push(&a,3);
	push(&a,4);
	push(&a,5);


	push(&b,1);
	push(&b,2);
	push(&b,3);
	push(&b,10);
	push(&b,5);
	
	printf(" %s \n\n",(compare(&a,&b) == true)?" Iguais" : "Diferentes");





















	return 0;
}
