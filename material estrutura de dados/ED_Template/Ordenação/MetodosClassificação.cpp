#include <stdlib.h>
#include <stdio.h>
#define MAX_ELEMENTOS 60

void Mostra_Vetor(int V[], int inicio, int n);
void BubbleSort(int V[], int inicio, int n);
void InsertionSort(int V[], int inicio, int n);
void SelectionSort(int V[], int inicio, int fim);
void MergeSort(int V[], int inicio, int fim);
void Intercala(int V[], int inicio, int meio, int fim);
void QuickSort(int V[], int inicio, int fim);
int Particiona(int V[], int inicio, int fim);
void Swap(int V[], int i, int j);

int main(){
// Vetor do Tenembaum
//   int Vetor[MAX_ELEMENTOS]={25,57,48,37,12,92,86,33};
    int Vetor[MAX_ELEMENTOS]={93,7,11,12,99,94,48,73,84,66,71,14,82,17,16,20,18,21,49,65,2,5,98,6,1,13,4,8,0,15,95,30,24,19,97,96,3,94,9,25,92,91,90,89,23,88,86,85,84,83,54,22,81,41,37,82,76,65,39,63};

    printf("\n\nBolha\n");
    BubbleSort(Vetor, 0, 9);
    printf("\nResultado:\n");
    Mostra_Vetor(Vetor, 0, 9);
    system("pause");
    
    
    printf("\n\nInsercao direta\n");
    InsertionSort(Vetor, 10, 19);
    printf("\nResultado:\n");
    Mostra_Vetor(Vetor, 10, 19);
    system("pause");
   
    printf("\n\nSelecao direta\n");
    SelectionSort(Vetor, 20, 29);
    printf("\nResultado:\n");
    Mostra_Vetor(Vetor, 20, 29);
    system("pause");
   
    printf("\n\nMERGESORT (Merge)\n");
    MergeSort(Vetor, 30, 39);
    printf("\nResultado:\n");
    Mostra_Vetor(Vetor, 30, 39);
    system("pause");

    printf("\n\nMesclagem (QuickSort)\n");
    QuickSort(Vetor, 40, 49);
    printf("\nResultado:\n");
    Mostra_Vetor(Vetor, 40, 49);
    system("pause");
    
}

// Mostrar o vetor
void Mostra_Vetor(int V[], int inicio, int fim){
   int i;
   printf("\n{");
   for(i=inicio;i<fim;i++)
      printf("%i, ",V[i]);
   printf("%i}\n",V[i]);
}

// Método de Ordenação BOLHA
void BubbleSort(int V[], int inicio, int fim){
    int elem_aux,i,f=fim,trocou=1;
    while(trocou){ // Se trocou não está ordenado
        trocou=0;
        for(i=inicio;i<f;i++){
           Mostra_Vetor(V,inicio,fim);
           if (V[i]>V[i+1]){
               trocou=1;
               Swap(V,i,i+1);
           }
        }
        f--;
    }
}

// Método de Ordenação INSERÇÃO
void InsertionSort(int V[], int inicio, int fim){
	int i, j, chave; 
	for(j=inicio+1; j<=fim; j++){
		chave = V[j];
		i = j-1;
		while(i >= inicio && V[i] > chave){
            Mostra_Vetor(V,inicio,fim);    
			V[i+1] = V[i];
			i--;
		}		
		V[i+1] = chave;
		printf("[%i]",i-inicio);
	}
}

// Método de Ordenação SELEÇÃO
void SelectionSort(int V[], int inicio, int fim) { 
  int i, j, min, swap;
  for (i = inicio; i < fim; i++) {
    min = i;
    Mostra_Vetor(V,inicio,fim);
    for (j = (i+1); j <= fim; j++) {
      if(V[j] < V[min]) {
        min = j;
      }
    }
    if (i != min) {
       Swap(V,i,min);
    }
  }
}

// Faz a intercalação para o MERGESORT
void Intercala(int V[], int inicio, int meio, int fim){
   int i, j, k;
   int *Vtemp = (int *) malloc((fim-inicio+1) * sizeof (int));
   Mostra_Vetor(V, 0,7);
   for(i=inicio,j=meio+1,k=0;i<=meio&&j<=fim;)
       V[i]<=V[j]?Vtemp[k++]=V[i++]:Vtemp[k++]=V[j++];
   for(;i<=meio;i++) Vtemp[k++]=V[i];
   for(;j<=fim;j++) Vtemp[k++]=V[j];
   for(i=inicio;i<=fim;i++) V[i]=Vtemp[i-inicio];
   free(Vtemp);
}

// Método de Ordenação MERGESORT
void MergeSort(int V[], int inicio, int fim) {
  int meio = (inicio+fim) / 2;
  if (fim > inicio) {
    MergeSort(V, inicio, meio);
    MergeSort(V, meio+1, fim);
    Intercala(V, inicio, meio, fim);
  }
}

// Método de Ordenação QUICKSORT
void QuickSort(int V[], int inicio, int fim){
   int pivot; 
   if (inicio < fim) {                   
      pivot = Particiona(V, inicio, fim);       
      QuickSort(V, inicio, pivot-1);      
      QuickSort(V, pivot+1, fim);     
   }
}

// Faz a partição para o QUICKSORT.
int Particiona(int V[], int inicio, int fim){
   int pivot = V[inicio], i = inicio+1, j = fim;               
   while (1) {
      Mostra_Vetor(V,0,7);   
      while (i <= fim && V[i] <= pivot) ++i;            
      while (pivot < V[j]) --j;                       
      if (i >= j) break;                          
      Swap(V,i,j);            
      ++i; --j;                                   
   }                                                 
   V[inicio] = V[j];
   V[j] = pivot; 
   return j;                                      
}

// Troca de elementos em um vetor
void Swap(int V[], int i, int j){
   int aux=V[i];
   V[i]=V[j];
   V[j]=aux;     
}
