/********************************************************************/
/***  ORDENAÇÃO DE DADOS                                          ***/
/***  Métodos de ordenação Interna                                ***/
/********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX_ELEMENTOS 60

// Protótipos
void Mostra_Vetor(int Vetor[]);
void Ord_Ins_Direta_I(int vetor[]);
void Ord_Ins_Direta_II(int vetor[]);
void Ord_Shell(int vetor[]);
void Ord_Bolha(int vetor[]);
void swap(int V[], int i, int j);
void Retardo();
int eleva(int x, int y);

int main()
{
   // Declarar e preencher vetor
   int Vetor[MAX_ELEMENTOS]={93,7,11,12,99,93,48,73,84,66,71,14,82,17,16,20,18,21,49,65,2,5,98,6,1,13,4,8,0,15,95,30,24,19,97,96,3,94,9,25,92,91,90,89,23,88,86,85,84,83,82,22,81,41,37,39,76,65,54,63};
   time_t tInicio,tFinal;

   // Chamar o método BOLHA
   Mostra_Vetor(Vetor);
   time(&tInicio);
   Ord_Bolha(Vetor);
   time(&tFinal);
   printf("%2.2f",difftime(tFinal,tInicio));
   Mostra_Vetor(Vetor);

   //Chamar ordenador Ins Direta método 1
   Vetor[MAX_ELEMENTOS]={93,7,11,12,99,93,48,73,84,66,71,14,82,17,16,20,18,21,49,65,2,5,98,6,1,13,4,8,0,15,95,30,24,19,97,96,3,94,9,25,92,91,90,89,23,88,86,85,84,83,82,22,81,41,37,39,76,65,54,63};
   Mostra_Vetor(Vetor);
   time(&tInicio);
   Ord_Ins_Direta_I(Vetor);
   time(&tFinal);
   printf("%2.2f",difftime(tFinal,tInicio));
   Mostra_Vetor(Vetor);

   //Chamar ordenador Ins Direta método 2
   Vetor[]={93,7,11,12,99,93,48,73,84,66,71,14,82,17,16,20,18,21,49,65,2,5,98,6,1,13,4,8,0,15,95,30,24,19,97,96,3,94,9,25,92,91,90,89,23,88,86,85,84,83,82,22,81,41,37,39,76,65,54,63};
   Mostra_Vetor(Vetor);
   time(&tInicio);
   Ord_Ins_Direta_II(Vetor);
   time(&tFinal);
   printf("%2.2f",difftime(tFinal,tInicio));
   Mostra_Vetor(Vetor);

   system("PAUSE");
   return 0;
}


// Método da Inserção direta #1
void Ord_Ins_Direta_I(int vetor[])
{
   int i,j,k, elem_aux;
   int encontrou;

   for(i=1;i<MAX_ELEMENTOS;i++)
   {
      j=0;
      encontrou=0;
      Retardo();
      while((j<i) && (!encontrou))
      {
          if(vetor[i]<vetor[j])
             encontrou=1;
          else
             j++;
      }
      if(encontrou)
      {
          elem_aux=vetor[i];
          k=i-1;
          while(k>=j)
          {
             vetor[k+1]=vetor[k];
             k--;
          }
          vetor[j]=elem_aux;
      }
   }
}

// Método da Inserção direta #2
void Ord_Ins_Direta_II(int vetor[])
{
   int i,j,k, elem_aux;
   int encontrou;
   for(j=1;j<MAX_ELEMENTOS;j++)
   {
       elem_aux=vetor[j];
       i=j-1;
       Retardo();
       while((i>0)&&(vetor[i]>elem_aux))
       {
          vetor[i+1]=vetor[i];
          i=i-1;
       }
       vetor[i+1]=elem_aux;
   }
}

// Método de ordenação SHELL
void Ord_Shell(int vetor[])
{
}

// Método de Ordenação BOLHA
void Ord_Bolha(int vetor[])
{
    int elem_aux,j,i;
    int trocou=1;
    while(trocou)
    {
        trocou=0;
        for(i=0;i<MAX_ELEMENTOS;i++)
           if (vetor[i]>vetor[i+1])
           {
               trocou=1;
               swap(vetor,i,i+1);
           }
    }
}

void Mostra_Vetor(int Vetor[])
{
   int i;
   printf("\n{");
   for(i=0;i<MAX_ELEMENTOS-1;i++)
      printf("%i, ",Vetor[i]);
   printf("%i}\n",Vetor[i]);
}

// Causa um retardo no processamento
void Retardo()
{
  unsigned long int i;
  for(i=0;i<20000000;i++);
}

// Exponenciação
int eleva(int x, int y)
{
   int i;
   int res=1;
   for(i=1;i<=y;i++)
      res*=x;
   return(res);
}

// Troca de elementos em um vetor
void swap(int V[], int i, int j){
   int aux=V[i];
   V[i]=V[j];
   V[j]=aux;     
}
