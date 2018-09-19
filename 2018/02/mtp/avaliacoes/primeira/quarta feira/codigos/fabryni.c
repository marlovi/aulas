#include "stdio.h"
#include "stdlib.h"

int menu();
void lervetor1(int*, int*);
void lervetor2(int*, int*);
int imprimirvet(int*, int*);
int comparadescrescente(const void*, const void*);



int main(){
    int op;
    do{
        op = menu();
        switch(op){
            case 0:{
                printf("Obrigado por utilizar a aplicação!!\n");
            }break;
            case 1:{
                int **matriz;
                int i = 0;
                int j = 0;
                int a;
                int b = 1;
                int p;

                matriz = (int**)malloc(12 * sizeof(int*));
                for(i = 0; i < 12; i++){
                    matriz[i] = (int*)malloc(5 * sizeof(int));
                }

                for(i = 0; i < 2; i++){
                    for(j = 0; j < 12; j++){
                        matriz[i][j] = b;
                        b++;
                    }
                }

                for(i = 2; i < 4; i++){
                    for(j = 0; j < 12; j++){
                        matriz[i][j] = b;
                        b++;
                    }
                }

                
                    printf("0 para Sair\n");
                    printf("1 Deseja comprar uma passagem\n");
                    printf("2 Deseja imprimir o veículo com todas as poltronas\n");
                    printf("3 Deseja imprimir um mini relatório\n");
                    scanf("%d",&a);

                    if(a == 0){
                        break;
                    }
                    else if(a == 1){
                        for(i = 0; i < 4; i++){
                            for(j = 0; j < 12; j++){
                                printf("%d\t",matriz[i][j]);
                            }
                             printf("\n");
                             
                        }
                        
                        // printf("Digite a poltrona desejada\n");
                        // scanf("%d", &p);
                        // if((p == 6) || (p == 9) || (p == 17) || (p == 21) || (p == 25 || (p == 22)) || (p == 18) || (p == 11)) || (p == 15) || (p == 19) || (p == 23)) || (p == 27))  {
                        //     printf("Poltrona Ocupada\n");
                        // }
                        // else if((p == 7) || (p == 8) || (p == 13)){
                        //     printf("Poltrona Reservada\n");
                        // }
                        

                        
                    }
                    

                


            }break;
            case 2:{
                int *vetor1;
                int *vetor2;
                int *vetor3;
                int tamanho1;
                int tamanho2;
                int tamanho3;
                int i = 0;
                int j = 0;
                int c = 0;

                printf("Digite o tamanho do vetor 1\n");
                scanf("%d",&tamanho1);

                vetor1 = (int*)malloc(tamanho1 * sizeof(int));
                lervetor1(vetor1, &tamanho1);

                printf("Digite o tamanho do vetor 2\n");
                scanf("%d",&tamanho2);

                vetor2 = (int*)malloc(tamanho2 * sizeof(int));
                lervetor2(vetor2, &tamanho2);

                for(i = 0; i < tamanho1; i++){
                    for(j = 0; j < tamanho2; j++){
                        if(vetor1[i]==vetor2[j]){
                            tamanho3++;   
                        }

                    }
                }                
                vetor3 = (int*)malloc(tamanho3 * sizeof(int));

                for(i = 0; i < tamanho1; i++){
                    for(j = 0; j < tamanho2; j++){
                        if(vetor1[i]==vetor2[j]){
                            vetor3[c] = vetor1[i];
                            c++;   
                        }

                    }
                }                           
                imprimirvet(vetor3, &tamanho3);
                
                free(vetor1);
                free(vetor2);
                free(vetor3);

            }break;
            case 3:{
                int **matriz;
                int linha = 5;
                int coluna = 4;
                int i = 0;
                int j = 0;
                int matr;
                int a = 0;
                int b = 0;
                int c;
                int maior = 0;
                int n;
                int m;
                int s;
                int tam = 20;
                
                
                matriz = (int**)malloc(linha * sizeof(int*));

                for(i = 0; i < linha; i++){
                    matriz[i] = (int*)malloc(coluna * sizeof(int));
                }

                printf("Informe o número da matrícula:\n");
                
                for(i = 0; i < 4; i++){
                    for(j = 0; j < 1; j++){
                        printf("Digito[%d]:",a++);
                        scanf("%d", &matriz[i][j]);
                    }
                }

                printf("Informe as notas das provas:\n");
                for(int x = 0; x < 4; x++){
                    for(int y = 1; y < 2; y++){
                        printf("Nota[%d]:",b++);
                        scanf("%d", &matriz[x][y]);
                    }
                }

                printf("Informe as notas dos trabalhos:\n");
                for(int x = 0; x < 4; x++){
                    for(int y = 2; y < 3; y++){
                        printf("Nota[%d]:",b++);
                        scanf("%d", &matriz[x][y]);
                    }
                }        
                   
                        matriz[0][3] = matriz[0][1] + matriz[0][2];
                        matriz[1][3] = matriz[1][1] + matriz[1][2];
                        matriz[2][3] = matriz[2][1] + matriz[2][2];
                        matriz[3][3] = matriz[3][1] + matriz[3][2];
                        
                
                    

                for(i = 0; i < linha; i++){
                        for(j = 0; j < coluna; j++){
                            printf("%d\t", matriz[i][j]);
                        }
                        printf("\n");
                    }

                
                    for(j = 0; j < coluna; j++){
                        free(matriz[j]);
                    }
                    free(matriz);

            }break;

        }
    }while(op != 0);
    
return 0;
}


int menu(){
    int op;
    printf("0 para Sair\n");
    printf("1 Questão\n");
    printf("2 Questão\n");
    printf("3 Questão\n");
    scanf("%d", &op); 
    return op;
}

void lervetor1(int *vetor1, int *tamanho1){
    int i = 0;
    for(i = 0; i < *tamanho1; i++){
        printf("Informe o elemento V[%d]\n",i+1);
        scanf("%d", &vetor1[i]);
    }
}

void lervetor2(int *vetor2, int *tamanho2){
    int i = 0;
    for(i = 0; i < *tamanho2; i++){
        printf("Informe o elemento V[%d]\n",i+1);
        scanf("%d", &vetor2[i]);
    }
}

int imprimirvet(int *vetor3, int *tamanho3){
    int k = 0;
    for(k = 0; k < *tamanho3; k++){
        printf("V[%d]: %d\n",k, vetor3[k]);
    }
}

int comparadescrescente(const void *p1, const void *p2){
    if(*(int*)p1 == *(int*)p2) return 0;
    else if(*(int*)p1 < *(int*)p2) return 1;
    else return -1;
}

