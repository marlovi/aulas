#include "stdio.h"
#include "stdlib.h"
void lerMatriz(int**,int);
void imprimirMatriz(int**,int);
void lerVetor(int*, int*);
void imprimir(int*,int*);
int menu();
int compararCrescente(const void*, const void*);
int compararDecrescente(const void*, const void*);
int lerVetorInteiro(int*);
int main(){

    int op;

    do{
        op = menu();
        switch(op){
            case 0:
                printf("Obrigado por utilizar a aplicação !!!");
            break;
            case 1:{
                int tamanho;
                int *vetor;
                printf("Informe o tamanho do vetor \n");
                scanf("%d",&tamanho);
                vetor = (int*) malloc(tamanho * sizeof(int));
                lerVetor(vetor, &tamanho );
                qsort(vetor,tamanho,sizeof(int),compararCrescente);
                printf("-----------Crescente------------------------\n");
                imprimir(vetor,&tamanho);
                printf("-----------Decrescente----------------------\n");
                qsort(vetor,tamanho,sizeof(int),compararDecrescente);
                imprimir(vetor,&tamanho);
                free(vetor);
            } 
            break;
            case 2:{
                int *vetor = (int*) malloc(sizeof(int)); 
                int tamanhoVetor; 
                tamanhoVetor = lerVetorInteiro(vetor);
                imprimir(vetor,&tamanhoVetor);
                 qsort(vetor,tamanhoVetor,sizeof(int),compararCrescente);
                printf("-----------Crescente------------------------\n");
                imprimir(vetor,&tamanhoVetor);
                printf("-----------Decrescente----------------------\n");
                qsort(vetor,tamanhoVetor,sizeof(int),compararDecrescente);
                imprimir(vetor,&tamanhoVetor);
                free(vetor);
              }
            break;
            case 6:{
                    int tamanho;
                    int linha = 0;
                    printf("Informe o tamanho da matriz \n");
                    scanf("%d",&tamanho);
                    
                    int **matriz;
                   // matriz = (int**) malloc( tamanho * sizeof(int*));
                    matriz =  (int**) calloc(tamanho, sizeof(int)); //alocaou o espaço que possiblita representar uma matriz

                    for( ; linha < tamanho; linha++)
                        matriz[linha] = (int*) calloc(tamanho, sizeof(int)); // alocando a primeira dimensão que pode receber novos ponteiros

                    printf("Informe as Distâncias entre as cidades \n");
                    lerMatriz(matriz,tamanho);

                    imprimirMatriz(matriz,tamanho);

                   
                    for( ; tamanho > 0 ;tamanho -- ){
                            free(matriz[tamanho]);
                    }
                     


            }
            break;
        }
    }while(op != 0 );


 return 0;
}
void lerMatriz(int **m,int dimensao){
    int i=0;
    int j=0; 
    for( ; i< dimensao ; i++){
        for(; j<dimensao; j++){
            printf("Informe um elemento m[%d][%d] \n", i , j );
            scanf("%d",&m[i][j]);
        }
        j = 0;
    }

}
void imprimirMatriz(int **m,int tamanho){
    int i=0,j=0;
    for(; i< tamanho ;i++){
        for(; j<tamanho;j++)
            printf("m[%d][%d] = %d \n",i,j,m[i][j]);
            j = 0;
    }
}

int compararCrescente(const void* p1, const void* p2){
    if(*(int*)p1 == *(int*)p2) return 0;
    else if( *(int*)p1 < *(int*)p2 )
    return -1;
    else return 1;
}
int compararDecrescente(const void* p1, const void* p2){
    if(*(int*)p1 == *(int*)p2) return 0;
    else if( *(int*)p1 < *(int*)p2 )
    return 1;
    else return -1;
}

int menu(){
    int op;
    printf("---------------------MENU----------------\n");
    printf("Digite 0 para SAIR !!!!\n");
    printf("Exercício número 1  \n");
    printf("Exercício número 6 \n");
    printf("");
    scanf("%d",&op);
    return op;
}


void lerVetor(int *vetor, int *tamanho){
    int i= 0;
    for( ; i< *tamanho; i++){
        printf("Informe o %dº Elemento \n",i+1);
        scanf("%d",&vetor[i]);
    }

}
void imprimir(int *vetor,int *tamanho){
    int i = 0;
    while(i < *tamanho){
        printf("V[%d] = %d \n",i+1,vetor[i]);
        i = i+1;
    }
}

int lerVetorInteiro(int* vetor){
    int qtd=0;
    int leitura;

    do{
        printf("Informe o v[%d] = %dº Elemento \n",qtd+1,qtd+1);
        scanf("%i",&leitura);

        if(leitura < 0) break;
       vetor =  (int*) realloc(vetor, (qtd + 1) * sizeof(int));
       vetor[qtd] = leitura;
       qtd = qtd + 1;//contador malvadão !!!! 
    }while(leitura >= 0);
    return qtd; 
}