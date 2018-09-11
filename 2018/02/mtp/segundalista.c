#include "stdio.h"
#include "stdlib.h"

void lerMatriz(int**, int*);
void imprimirMatriz(int**, int*);
void lerVetor(int*, int*);
void imprimir(int*,int*);
int menu();
int compararCrescente(const void*, const void*);
int compararDecrescente(const void*, const void*);
int lerVetorInteiro(int *);
int lerPosicaoMatriz(int**);
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
                int *vetor  = (int*) malloc(sizeof(int));  
                int tamanho = lerVetorInteiro(vetor);
                imprimir(vetor,&tamanho);
                qsort(vetor,tamanho,sizeof(int),compararCrescente);
                printf("--------------Crescente-------------------\n");
                imprimir(vetor,&tamanho);
                qsort(vetor,tamanho,sizeof(int),compararDecrescente);
                printf("--------------Decrescente----------------\n");
                imprimir(vetor,&tamanho);
                free(vetor);
            } break;
            case 3: {
                int **matriz;
                int tamanhoPrimeiraDimensao = 4; 

               // matriz = (int**) malloc(tamanhoPrimeiraDimensao * sizeof(int*));
               matriz = (int**) calloc(tamanhoPrimeiraDimensao, sizeof(int));//vetor de ponteiros
               matriz[0]  = (int*) calloc(tamanhoPrimeiraDimensao, sizeof(int)); 
               matriz[1]  = (int*) calloc(tamanhoPrimeiraDimensao, sizeof(int)); 

               matriz[2]  = (int*) calloc(tamanhoPrimeiraDimensao, sizeof(int)); 
               matriz[3]  = (int*) calloc(tamanhoPrimeiraDimensao, sizeof(int)); 


              matriz[0][0] = 50; 


              printf("%p        %d  ",matriz[1],matriz[1][0]); 
                //desalocar o recurso. 


              free(matriz[3]);
              free(matriz[2]);
              free(matriz[1]);
              free(matriz[0]);
            }break;

            case 6 :{
                    int **matriz;
                    int qtd ;
                    int i = 0;
                    printf("Informe a quantidade de dimensões da matriz quadrada \n");
                    scanf("%d",&qtd);
                    matriz = (int**) malloc( qtd * sizeof(int*));

                    for( ; i< qtd ; i++){
                        matriz[i] = (int*) malloc(qtd * sizeof(int));
                    }


                    lerMatriz(matriz, &qtd);
                    imprimirMatriz(matriz,&qtd);

                    int total = lerPosicaoMatriz(matriz) - lerPosicaoMatriz(matriz); 

                   printf(" A Distancia entre as cidades é de  %d \n\n\n", (total < 0 )? total * -1 :total );
                    int fim = qtd;
                    for( fim = fim -1; fim >= 0 ; fim-- ){
                        free(matriz[fim]);
                    }

            } break;
        }
    }while(op != 0 );


 return 0;
}

int lerPosicaoMatriz(int **m){
    int i;
    int j;

    printf("Informe a posição da primeira dimensão da matriz [?] \n");
    scanf("%d",&i);
    printf("Informe a posição da segunda dimensão da matriz[%d][?] \n",i);
    scanf("%d",&j);
    return m[i][j];
}
void imprimirMatriz(int **m, int *qtd){
     int i = 0;
    int j = 0;
    for( ; i< *qtd;i++){
        for(j=0; j < *qtd;j++){
            printf(" %d  ",m[i][j]);
        }
        printf("\n");
    }
}

void lerMatriz(int **m, int *qtd){
    int i = 0;
    int j = 0;
    for( ; i< *qtd;i++){
        for(j=0; j < *qtd;j++){
            printf("Informe o valor para a posição matriz[%d][%d] \n",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

int lerVetorInteiro(int *vetor){
    int tamanho= 0 ; 
    int leitura;
        do{
            printf("Informe o valor do V[%d] \n",tamanho +1);
            scanf("%d",&leitura);

            if(leitura < 0) break;
            vetor = realloc(vetor,(tamanho + 1 ) * sizeof(int));
            vetor[tamanho] = leitura;
            tamanho = tamanho + 1; 

        }while(1);




    return tamanho; 


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
    printf("Exercício número 2  \n");
    printf(" 3   Exemplo Matriz \n");
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