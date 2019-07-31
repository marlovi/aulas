#include <stdlib.h>
#include <stdio.h>

//Estrutura de dados N�
struct tree
{
    int info;
    struct tree *esq,*dir;
};

//Tipo de dados Ponteiro para o N�
typedef struct tree *TREEPTR;

// Prot�tipos
void insArvore(TREEPTR *plist, int x);
void remArvore(TREEPTR *plist, int vr);
TREEPTR tMaior(TREEPTR *plist);
void preOrdem (TREEPTR plist);
void posOrdem (TREEPTR plist);
void emOrdem (TREEPTR plist);
int profundidade(TREEPTR plist);
void folhasEmOrdem(TREEPTR plist);
int soma(TREEPTR plist);

// Programa Principal
int main()
{
    TREEPTR arvore=NULL;
    insArvore(&arvore,4);
    insArvore(&arvore,3);
    insArvore(&arvore,1);
    insArvore(&arvore,2);
    insArvore(&arvore,6);
    insArvore(&arvore,5);
    insArvore(&arvore,7); 
    printf("\n\nEM ORDEM\n");
    emOrdem(arvore);
    printf("\n\nFOLHAS EM ORDEM\n");
    folhasEmOrdem(arvore);
    printf("\n\nA altura da �rvore �:[%i]\n",profundidade(arvore));
    printf("\n\n\n");
    printf("\n\nSoma:[%i]\n",soma(arvore));
    system("PAUSE");
    return 0;
}

int profundidade(TREEPTR plist){
	int he,hd;
	if(plist){
   	he = profundidade(plist->esq);
      hd = profundidade(plist->dir);
		if (he>hd) return he + 1;
      else return hd + 1;
   } else return 0;
}


void insArvore(TREEPTR *plist, int x)
{
    if((*plist)==NULL) // �rvore vazia
       {
          *plist=(TREEPTR) malloc(sizeof(struct tree));
          (*plist)->info=x;
          (*plist)->esq=NULL;
          (*plist)->dir=NULL;
       }
    else
       {
          if(x<(*plist)->info)
             insArvore(&((*plist)->esq),x);
          else
             insArvore(&((*plist)->dir),x);
       }
}

void remArvore(TREEPTR *plist, int vr)
{
   TREEPTR p;
   if (*plist!=NULL){
      if (vr == (*plist)->info)
      {
         p=*plist;
         if ((*plist)->esq==NULL)
         {
            *plist = (*plist)->dir;
         }
         else
         {
            if ((*plist)->dir==NULL)
            {
               *plist = (*plist)->esq;
            }
            else
            {
               p=tMaior(&((*plist)->esq));
               (*plist)->info = p->info;
            }
         }
         free(p);
      }
      else
         if(vr < (*plist)->info)
         {
             remArvore(&((*plist)->esq), vr);
         }
         else
         {
             remArvore(&((*plist)->dir), vr);
         }
   }
}

// Encontrar e retornar o maior elemento de uma �rvore bin�ria
TREEPTR tMaior(TREEPTR *plist)
{
   TREEPTR t=*plist;
   if(t->dir != NULL)
   {
       *plist=(*plist)->esq;
       return(t);
   }
   else
       return(tMaior(&(*plist)->dir));
}

//Algoritmos de passeio
// Pr�-Ordem
void preOrdem (TREEPTR plist)
{
	if(plist!=NULL)
   {
		printf(" %i -",plist->info);
      preOrdem(plist->esq);
      preOrdem(plist->dir);
   }
}

// P�s-Ordem
void posOrdem (TREEPTR plist)
{
	if(plist!=NULL)
   {
		posOrdem(plist->esq);
      posOrdem(plist->dir);
      printf(" %i -",plist->info);
   }
}

// em-Ordem
void emOrdem (TREEPTR plist)
{
	if(plist!=NULL)
   {
		emOrdem(plist->esq);
      printf(" %i -",plist->info);
      emOrdem(plist->dir);
   }
}

void folhasEmOrdem(TREEPTR plist)
{
	if(plist!=NULL)
   {
		folhasEmOrdem(plist->esq);
      if (((plist->esq)==NULL) && ((plist->dir) == NULL))
      	printf(" %i -",plist->info);
      folhasEmOrdem(plist->dir);
   }
}

int soma(TREEPTR plist){
	if(plist!=NULL)
     return soma(plist->esq)+soma(plist->dir)+plist->info;
   else return 0;
}

