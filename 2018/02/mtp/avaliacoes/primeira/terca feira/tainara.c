#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int menu();


int main(){
    int op = 0;
    do{
        op = menu();
        switch(op){
            case 0:
            printf("Obrigada por utilizar a minha aplicacao!! :D\n\n");
            break;

            case 1:
            int **vetor_alocpont;
            int tamanho = 3;
            int *matriz;


            vetor_alocpont = (int**) calloc(tamanho, sizeof(int*));
                for(int i=0; i<tamanho; i++){
                    for(int j=0; j<tamanho; j++){
                        matriz = (int*) calloc(tamanho, sizeof(int));
                    }
                }
                for(int i=0; i<tamanho; i++){
                    for(int j=0; j<tamanho; j++){
                        int jogada;
                        printf("Digite [linha] e [coluna]: \n");
                        scanf(" %d", &jogada);
                    }
                }

            break;

            case 2:{
            int *V1;
            int *V2;
            int *V3;
            int tamV1 = 0;
            int tamV2 = 0;
            int tamV3 = 0;
            int valor1;
            int valor2;

            printf("Digite o tamanho do Vetor 1: \n");
            scanf("%d", &tamV1);

            printf("Digite o tamanho do Vetor 2: \n");
            scanf("%d", &tamV2);

            tamV3 = tamV1 + tamV2;
        

            V1 = (int*) calloc(tamV1,sizeof(int)); //alocação do vetor 1
            for(int i=0; i<tamV1; i++){ //leitura do vetor 1
                printf("Digite o valor do Vetor 1: \n");
                scanf("%d", &valor1);
            }

            V2 = (int*) calloc(tamV2,sizeof(int)); //alocação do vetor 2
            for(int i=0; i<tamV2; i++){ //leitura do vetor 2
                printf("Digite o valor do Vetor 2: \n");
                scanf("%d", &valor2);
            }
                printf("\n");

            V3 = (int*) calloc(tamV3,sizeof(int)); //alocação do vetor 3
            for(int i=0; i<tamV1; i++){
                for(int j=tamV1; j<tamV2; j++){
                    
                    
            //  printf("Ola\n");
                }
            }
                printf("V3{%d}\n\n", (*V3));
                
            
            free(V1);
            free(V2);
            free(V3);

            }
            break;

            case 3:{
            int *vetor_A;
            int *vetor_B;
            int tamanho = 0;
            int valor;

            printf("Digite o tamanho do vetor: \n");
            scanf("%d", &tamanho);

            vetor_A = (int*)calloc(tamanho, sizeof(int));
                for(int i=0; i<tamanho; i++){
                    printf("Digite os valores para preencher o vetor: \n");
                    scanf("%d", &valor);
                }
                for(int i=0; i<tamanho; i++){
                    
                }

            free(vetor);
            return 0;
        }

        void ordemDecrescente(int *vetor, int valor){
            int aux;
            for(int i=0; i<tamanho; i++){
                if(i<valor){

                }
            }

            }
            break;

        default:printf("Opcao invalida!!\n\n");
        }
    }while(op =! 0);
    return 0;
}

int menu(){
    int v;
    printf("----------------MENU--------------\n");
    printf("Digite 0: ............. para sair.\n");
    printf("Digite 1: ...... para a questao 1.\n");
    printf("Digite 2: ...... para a questao 2.\n");
    printf("Digite 3: ...... para a questao 3.\n");
    printf("----------------------------------\n\n");

    scanf("%d", &v);
    return v;
}