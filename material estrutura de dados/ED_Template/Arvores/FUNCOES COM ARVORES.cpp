#include <stdio.h>
#include <stdlib.h>

typedef struct no{
        int info;
        struct no *esq, *dir;
        }*TREE;
        
        
        void inserir(TREE * ARV, int vr);
        void ordem(TREE ARV);
        void preordem(TREE ARV);
        void posordem(TREE ARV);
        int altura(TREE ARV);
        void espelho(TREE ARV);
        void encontravalor(TREE ARV,int vr);
        TREE retornaNo(TREE ARV, int vr);
        void maiorNo(TREE ARV);
        void menorNo(TREE ARV);
        
        int main()
        {
        TREE arvore=NULL;
        inserir(&arvore, 10);
        inserir(&arvore, 9);
        inserir(&arvore, 27);
        inserir(&arvore, 70);
        inserir(&arvore, 77);
        inserir(&arvore, 26);
        inserir(&arvore, 89);
        printf("Efetuando passeio em ordem:\n");
        ordem(arvore);
        printf("\n");
        printf("\nEfetuando passeio pre ordem:\n");
        preordem(arvore);
        printf("\n");
        printf("\nEfetuando passeio pos ordem:\n");
        posordem(arvore);
        printf("\n");
        encontravalor(arvore, 70);
        printf("\n");
        printf("Retornar no se ele existir: ");
        retornaNo(arvore, 77);
        printf("\n");
        altura(arvore);
        printf("\n");
        printf("\n");
        maiorNo(arvore);
        printf("\n");
        menorNo(arvore);
        printf("\n");
        espelho(arvore);
        printf("\n");
        printf("Percorrendo arvore espelhada em ordem!");
        printf("\n");
        ordem(arvore);
        printf("\n");
        system("pause>>null");
        }
        void inserir(TREE *ARV, int vr){
             if(*ARV){
             if(vr<(*ARV)->info){
             inserir(&((*ARV)->esq),vr);
             }
             else{
             inserir(&((*ARV)->dir),vr);
             }
             }
             else{
             *ARV=(TREE)malloc(sizeof(struct no));
             if(*ARV){
             (*ARV)->info=vr;
             (*ARV)->esq=NULL;
             (*ARV)->dir=NULL;
             }
             }
             }
        int altura(TREE ARV){
             int dir=1,esq=1;
             while(ARV->dir!=NULL){
             ARV=ARV->dir;
             dir=dir+1;
             }
             while(ARV->esq!=NULL){
             ARV=ARV->esq;
             esq=esq+1;                 
             }
             if(dir>esq){
             printf("Altura %i",dir);
             }
             else{
                  printf("Altura %i",esq);
                  }
             }
        void ordem(TREE ARV){
             if(ARV!=NULL){    
             ordem(ARV->esq);
             printf("\n%i",ARV->info);
             ordem(ARV->dir);
             }
             }
        void preordem(TREE ARV){
             if(ARV!=NULL){
             printf("\n%i",ARV->info);
             preordem(ARV->esq);
             preordem(ARV->dir);
             }
             }
        void posordem(TREE ARV){
             if(ARV!=NULL){
             preordem(ARV->esq);
             preordem(ARV->dir);
             printf("\n%i",ARV->info);
             }
             }
  
       void espelho(TREE ARV){
            TREE temp=(TREE)malloc(sizeof(struct no));
            if(temp){
            if(ARV!=NULL){
            temp=ARV->dir;
            ARV->dir=ARV->esq;
            ARV->esq=temp;
            }
            printf("\nA arvore foi espelhada!");
            }
            }
      
       void encontravalor(TREE ARV,int vr){
            if(ARV!=NULL){
            if(ARV->info==vr){
            printf("Valor encontrado!");
            }
            if(ARV->info!=vr){
            if(vr < ARV->info){
            encontravalor(ARV->esq,vr);
            }
            else{
            encontravalor(ARV->dir,vr);     
            }
            }
            }
            else{
            printf("Valor nao encontrado!");
            }
            } 
       TREE retornaNo(TREE ARV, int vr){
            if(ARV!=NULL){
            if(vr < ARV->info){
            retornaNo(ARV->esq,vr);      
            }            
            else if(vr>ARV->info){
            retornaNo(ARV->dir, vr);
            }
            else if(vr==ARV->info){
            printf("%i\n",ARV->info);
            }
            else{
            printf("Valor nao existe");
            }
            }
            }
       void maiorNo(TREE ARV){
            while(ARV->dir!=NULL){
            ARV=ARV->dir;
            }
            printf("O no de maior valor eh: %i\n",ARV->info);
            }
       void menorNo(TREE ARV){
            while(ARV->esq!=NULL){
            ARV=ARV->esq;
            }
            printf("O no de menor valor eh: %i",ARV->info);
            }
   /*    void completa(TREE ARV){
            if(ARV!=NULL){
            if((ARV->dir==NULL && ARV->esq==NULL)||(ARV->dir!=NULL && ARV->esq!=NULL)){
                        
            }
            }*/
   
           
       
             
