

#include "stdio.h"
#include "stdlib.h"


typedef struct No{
    int valor;
    struct No* proximo;    
}lista;
//lista -> 
//[ponteiro]-> plistaroximo [novoNO]->proximo   [NOVONO]->proximo   []    []   []   -> NULL  



int main(){
     lista* raiz = malloc(sizeof(struct No)); 
     raiz->valor = 1;
    
    lista* no = malloc(sizeof(struct No));
    no->valor  = 2; 
    no->proximo = NULL;
     lista* no1 = malloc(sizeof(struct No));
    no1->valor  = 3; 
    no1->proximo = NULL;

    raiz->proximo = no;
    no->proximo = no1;
    //raiz->proximo = no1;

   



    raiz->proximo = no1;
    no->proximo = NULL;
    free(no);

    for(lista* aux = raiz;aux != NULL ;  aux = aux->proximo)
        printf("%d ",aux->valor);


     for(lista* aux = raiz;aux != NULL ;  aux = aux->proximo)
     if(aux->valor == 3)
        aux->valor = 100;

   lista* aux = raiz;
   while(aux !=NULL){
     printf("\n\n%d",(aux->proximo== NULL));
     
       if(aux->proximo == NULL){
            printf("aqui");
            lista* no = malloc(sizeof(struct No));
            no->valor = 5;
            no->proximo = NULL;
            printf("neste");
            aux->proximo = no;
            break;
        }

         aux = aux->proximo;
         
   }
    
       


    for(lista* aux = raiz;aux != NULL ;  aux = aux->proximo)
        printf("%d ",aux->valor);

    //rair -> no 
    
}