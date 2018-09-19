#include "stdio.h"
#include "stdlib.h"

void imprimir(int *vetor,int *tamanho);
void lerVetor(int *vetor, int *tamanho);
void lerMatriz(int **,int);
int menu();

int main(){
    int op;
    do{
        op =menu();

        switch(op){
            case 0:{
                printf("Obrigado por utilizar a aplicacao! \n");
            }break;
            case 1:{
                int **matriz;
                int linhas = 12;
                int colunas = 5;
                int i=0;
                matriz = (int**) malloc(linhas *sizeof(int));

                for( ; i<linhas; i++){
                    matriz[i] = (int*) malloc(colunas*sizeof(int));
                }

                
            }break;
            case 2:{
                int *vetor1;
                int *vetor2;
                int *vetor3;
                int tamanhovetor1;
                int tamanhovetor2;
                int tamanhovetor3;

                printf("Informe o tamanho do primeiro vetor: \n");
                scanf("%d", &tamanhovetor1);
                vetor1 =(int*) malloc(tamanhovetor1 * sizeof(int));
                lerVetor(vetor1,&tamanhovetor1);

                printf("Informe o tamanho do segundo vetor: \n");
                scanf("%d", &tamanhovetor2);
                vetor2 =(int*) malloc(tamanhovetor2 * sizeof(int));
                lerVetor(vetor2,&tamanhovetor2);

                //int tamsomavet = tamanhovetor1+tamanhovetor2;
                int i;
                int j;
                int contador=0;
                for(i=0; i<tamanhovetor1;i++){
                    for(j=0; j<tamanhovetor2;j++){
                        if(vetor1[i]==vetor2[j]){
                        contador++;
                        break;}
                    }

                }
                vetor3 =(int*) malloc(contador*sizeof(int));
                int x = 0;
                int y = 0;
                for(x=0; x<tamanhovetor1;x++){
                    for(y=0; y<tamanhovetor2;y++){
                        if(vetor1[x]==vetor2[y]){
                        vetor3[x]=vetor2[y];
                        break;}
                    }
                }
               
               imprimir(vetor3, &contador); 
                free(vetor1);
                free(vetor2);
                free(vetor3);               
            }break;
            case 3:{
                int **matriz;
                int linha = 5;
                int coluna = 4;
                int i = 0;
                matriz = (int**)malloc(linha*sizeof(int*));

                for(; i<linha; i++){
                    matriz[i] = (int*) malloc(coluna*sizeof(int));
                }
                int x=0;
                int y=0;
                for( ; x<linha; x++){
                   for( ; y<coluna; y++){
                       printf("Informe o elemento matriz[%d][%d] \n",x,y);
                    scanf("%d",&matriz[x][y]);                       
                   }
               }
           
            }break;
        }
    }while(op!=0);
    return 0;
    

}
int menu(){
    int op;
    printf("-----Bem vindo ao menu ------ \n");
    printf("Digite 0 para sair da aplicação \n");
    printf("Digite 1 para o exercicio 1 \n");
    printf("Digite 2 para o exercicio 2 \n");
    printf("Digite 3 para o exercicio 3 \n");
    scanf("%d", &op);
    
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

