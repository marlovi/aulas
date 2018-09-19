#include <stdio.h>
#include <stdlib.h>

int decrescente(const void* p1, const void* p2);
int verificar_velha(int**, int);
void ordenar_vetor(int*, int);
void escrever_velha(int**, int);
int menu();
int main(){
    int opcao, op = 1;
    int **matriz;


    while (op!=0){
        opcao=menu();
        switch (opcao){
            case 0:
                op = 0;
                break;
            case 1:
                printf("\n\n===JOGO DA VELHA===\n");
                int x, y, flag;
                int jogador = 1;

                matriz = (int**) calloc(3, sizeof(int*));
                for(int cont; cont < 3; cont++){
                    matriz[cont] = (int*) calloc(3, sizeof(int));
                }

                escrever_velha(matriz,3);

                for(int cont=0; cont<9; cont++){
                    if(jogador == 1){
                        printf("\nTurno do Jogador 1\n");
                        printf("Insira a coordenada do local desejado (x/y) ->");
                        scanf("%d %d", &x, &y);
                        matriz[x-1][y-1] = 1;
                        jogador = 2;
                    } else {
                        printf("\nTurno do Jogador 2\n");
                        printf("Insira a coordenada do local desejado (x/y) ->");
                        scanf("%d %d", &x, &y);
                        matriz[x-1][y-1] = 2;
                        jogador = 1;
                    }
                    escrever_velha(matriz,3);
                    }
                    flag = verificar_velha(matriz,3);
                    if(flag==3){
                        printf("Ganhou");
                    } else {
                        printf("Perdeu");
                    }
                break;
                    

            case 2:
                printf("\n\n===União de Vetores===\n\n");
                int *vet1, *vet2, *vet3;
                int tam1, tam2, tamanho;
               
                printf("Insira o tamanho do primeiro vetor ->");
                scanf("%d", &tam1);
                vet1 = (int*) calloc(tam1, sizeof(int));

                printf("Insira os valores do primeiro vetor:\n");
                for(int cont=0; cont<tam1; cont++){
                    scanf("%d", &vet1[cont]);
                }

                printf("\nInsira o tamanho do segundo vetor ->");
                scanf("%d", &tam2);
                vet2 = (int*) calloc(tam2, sizeof(int));

                printf("Insira os valores do segundo vetor:\n");
                for(int cont=0; cont<tam2; cont++){
                    scanf("%d", &vet2[cont]);
                }
                tamanho = tam1 + tam2;

                vet3 = (int*) calloc(tamanho, sizeof(int));
                for(int cont=0; cont<tam1; cont++){
                    vet3[cont] = vet1[cont];
                }
                for(int cont=0; cont<tamanho; cont++){
                    vet3[cont+tam1] = vet2[cont];
                }

                printf("\n\nEste é o resultado da uniao dos vetores:\n =");
                for(int cont=0; cont<tamanho; cont++){
                    printf("%d ", vet3[cont]);
                }
                printf("=\n\n\n");

                //free(vet1);
                //free(vet2);
                //free(vet3);
                break; 

            case 3:
                printf("\n\n===Vetor Decrescente===\n");
                int *vet;
                int tam, aux, maior;
                
                printf("\nInsira o tamanho deste vetor ->");
                scanf("%d", &tam);
                vet = (int*) calloc(tam, sizeof(int));
                printf("Insira os valores do vetor:\n");
                for(int cont=0; cont<tam; cont++){
                    scanf("%d",&vet[cont]);
                }
                
                qsort(vet,tam,sizeof(int), decrescente);

                printf("\nEste é o seu vetor em ordem decrescente:\n= ");
                for(int cont=0; cont<tam; cont++){
                    printf("%d ",vet[cont]);
                }
                printf("=\n\n\n");

                free(vet);
                break;
            default:
                printf("\nOPCAO INVALIDA!!!\n\n\n");
                break;
        }


    }
    return 0;
}

int menu(){
    int opcao;
    printf("(0) SAIR\n");
    printf("(1) QUESTAO 1\n");
    printf("(2) QUESTAO 2\n");
    printf("(3) QUESTAO 3\n");
    printf("INSIRA A OPCAO DESEJADA: ->");
    scanf("%d", &opcao);
    return opcao;
}

void escrever_velha(int **matriz, int tam) {
    for(int cont=0; cont<tam; cont++){
        for(int cont1=0; cont1<tam; cont1++){
            if(matriz[cont][cont1] == 1){
                printf("x ");
            } else if(matriz[cont][cont1] == 2){
                printf("o ");
            } else {
                printf("%d ", matriz[cont][cont1]);
            }
        }
    printf("\n");
    }
}

int decrescente(const void* p1, const void* p2){
    if(*(int*)p1 == *(int*)p2) return 0;
    else if( *(int*)p1 < *(int*)p2 )
    return 1;
    else return -1;
}

int verificar_velha(int **matriz, int tam){
    int flag=0;
    for(int cont=0; cont<tam; cont++){
       for(int cont1=0; cont1<tam; cont1++){
           if(matriz[cont][cont1]==1){
               flag++;
           } else {
               flag=0;
           }
       }
    }
    return flag;
}