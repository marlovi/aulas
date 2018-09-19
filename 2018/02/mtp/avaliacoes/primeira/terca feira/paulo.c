#include <stdio.h>
#include <stdlib.h>

int main(){

    int ex;
    printf("Qual exercicio voce deseja conferir? \n");
    scanf("%d", &ex);
    if(ex == 0){
        printf("Com esta opcao voce nao pode ver exercicios\n");
    }
    /*if(ex == 1){
    
    int tammat=3;
    char **mat;
    int i, j;

    mat = (char**)malloc(9 * sizeof(char*));

    for(i=0; i<tammat; i++){
        for(j=0; j<tammat; j++){
            scanf("%c", &mat[i][j]);
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }

        for(i=0; i<tammat; i++){
            for(j=i+1; j<tammat; j++){
                if(mat[i]==mat[j]){
                    printf("O jogador [%c] ganhou a partida!!!\n", mat[i]);
                }
            }
        }
    
     
        for(j=0; j<tammat; j++){
            for(i=j+1; i<tammat; i++){
                if(mat[j]==mat[i]){
                    printf("O jogador [%c] ganhou a partida!!!\n", mat[i]);
                }
            }
        }
    
    
    
        for(i=0; i<tammat; i++){
            for(j=0; j<tammat; j++){
                if(i == j && mat[i] == mat[j]){
                    printf("O jogador [%c] ganhou a partida\n", mat[i]);
                }
            }
        }
    
    
    
    
    }*/

    
    
    
    if(ex == 2){
        int *vet1, *vet2,*vetuniao, i, tam1, tam2, tamtot;

        printf("Qual o tamanho desejado para o vetor 1\n");
        scanf("%d", &tam1);

        vet1 = (int*)malloc(tam1 * sizeof(int));

        printf("Insira valores para serem guardados no primeiro vetor\n");
        for(i=0; i<tam1; i++){
            scanf("%d", &vet1[i]);
        }

        printf("Qual o tamanho desejado para o vetor 2\n");
        scanf("%d", &tam2);

        vet2 = (int*)malloc(tam2 * sizeof(int));

        printf("Insira valores para serem guardados no segundo vetor\n");
        for(i=0; i<tam2; i++){
            scanf("%d", &vet2[i]);
        }

        tamtot = tam1 + tam2;

        vetuniao = (int*)malloc(tamtot * sizeof(int));

        for(i=0; i<tam1; i++){
            vetuniao[i] = vet1[i];
        }

        for(i=0; i<tam2; i++){
            vetuniao[i+tam1] = vet2[i];
        }

        for(i=0; i<tamtot; i++){
            printf("%d", vetuniao[i]);
        }

        free(vet1);
        free(vet2);
        free(vetuniao);

    }



    if(ex == 3){
        int *vet, i, tam;

        printf("Insira o tamanho que voce deseja o vetor\n");
        scanf("%d", &tam);

        vet = (int*)malloc(tam * sizeof(int));

        printf("Insira valores para serem alocados na memoria\n");

        for(i=0; i<tam; i++){
            scanf("%d", &vet[i]);
        }

        int aux, j;

        for(i=0; i<tam; i++){
            for(j=i+1; j<tam; j++){
                if(vet[i]<vet[j]){
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }

        for(i=0; i<tam; i++){
            printf("%d", vet[i]);
        }
        free(vet);
    }





    return 0;
}