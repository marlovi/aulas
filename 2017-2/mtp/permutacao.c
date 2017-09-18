#include <stdio.h>


void permuta(int[],int, int);
void troca( int[], int, int);
void imprimir(int[],int,int);
void back( int vetor[], int i, int j,int a, int b);
int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int tam_v = sizeof(v) / sizeof(int);
    permuta(v,0,tam_v-1);
    return 0;
}


void troca( int vetor[], int i, int j){
    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}
void back( int vetor[], int i, int j,int a, int b){
    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;

    printf("back ");imprimir(vetor,a,b);
}

void permuta(int vetor[],int inf, int sup){
    
    if(inf == sup){
        imprimir(vetor,inf,sup);
    }else{
            int i = 0;
        for( i = inf; i<= sup; i++){
            printf("i = %d    inf = %d    sup = %d\n",i,inf,sup);
            printf("antes "); imprimir(vetor,inf,sup);

            troca(vetor,inf,i);
            permuta(vetor,inf+1,sup);
            
            back(vetor,inf,i,inf,sup); // backtraking
           
           

        }
    }
}

void imprimir(int vetor[],int inf,int sup){
    int i= 0;
    for(i = 0; i <= sup;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}
