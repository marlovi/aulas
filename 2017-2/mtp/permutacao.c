#include <stdio.h>


void permuta(int[],int, int);
void troca( int[], int, int);
void imprimir(int[],int,int);
int main(){
    int v[] = {1,2,3};
    int tam_v = sizeof(v) / sizeof(int);
    permuta(v,0,tam_v-1);
    return 0;
}


void troca( int vetor[], int i, int j){
    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

void permuta(int vetor[],int inf, int sup){
    
    if(inf == sup){
        imprimir(vetor,inf,sup);
    }else{
            int i = 0;
        for( i = inf; i<= sup; i++){
            troca(vetor,inf,i);
            permuta(vetor,inf+1,sup);
            printf("chamada backtracking \n");
            imprimir(vetor,inf,sup);
            troca(vetor,inf,i);; // backtraking
            printf("chamada pos backtracking \n");
            imprimir(vetor,inf,sup);

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
