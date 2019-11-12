#include "stdio.h"
#define TAM 5

int Menu();
int vet3(int*,int);
int ex4(int*, int);
int menor(int*,int);
int maior(int*,int);

int main(){
    int op;

    do{
        op = Menu();
        switch(op){
            case 0:
                printf("Xau, obrigado...\n");
            break;
            case 1:{
                int *vet, i,num;

                printf("Digite o tamanho do vetor: ");
                    scanf("%d", &num);
        
                for(i=0; i<num; i++){
                    printf("Digite os valores do vetor na posição [%d]: ", i);
                        scanf("%d", &vet[i]);
                }

                for(i=0; i<num; i++){
                    printf("V[%d] = %d\n", i, vet[i]);
                }
                printf("\nSoma: %d\n", vet3(vet,num-1));
            } break;
            case 2:{
                int *vet, i, tam;

                printf("Digite o tamanho do vetor: ");
                    scanf("%d", &tam);

                for(i=0; i<tam; i++){
                    printf("Digite os valores do vetor na posição [%d]: ", i);
                        scanf("%d", &vet[i]);
                }

                for(i=0; i<tam; i++){
                    printf("V[%d] = %d\n", i, vet[i]);
                }

                printf("#------ VECTOR INVERSO -----#\n");
                ex4(vet,tam);
            } break;
            case 3:{
                int *vet, i, tam;

                printf("Digite o tamanho do vetor: ");
                    scanf("%d", &tam);

                for(i=0; i<tam; i++){
                    printf("Digite os valores do vetor na posição [%d]: ", i);
                        scanf("%d", &vet[i]);
                }

                for(i=0; i<tam; i++){
                    printf("V[%d] = %d\n", i, vet[i]);
                }
                printf("\nMenor: %d\n", menor(vet,tam-1));
            } break;
            case 4:{
                int *vet, i, tam;

                printf("Digite o tamanho do vetor: ");
                    scanf("%d", &tam);

                for(i=0; i<tam; i++){
                    printf("Digite os valores do vetor na posição [%d]: ", i);
                        scanf("%d", &vet[i]);
                }

                for(i=0; i<tam; i++){
                    printf("V[%d] = %d\n", i, vet[i]);
                }
                printf("\n maior: %d\n", maior(vet,tam-1));
            } break;
            default:
                printf("Opção inválida\n");
            break;
        } 
    } while(op!=0);

    return 0;
}

int Menu(){
    int op;

    printf("1.....Vector 3 exe 2\n");
    printf("2.....Exe 4\n");
    printf("3.....menor valor no vetor\n");
    printf("3.....maior valor no vetor\n");
    printf("Digite a opção: ");
        scanf("%d", &op);

    return op;
}

int vet3(int *vet, int i){
    if (i == 0){
        return vet[0];
    } else {
        return vet[i] + vet3(vet,i-1);
    }
}

int ex4(int *vet, int i){
    if(i==0){
        return 0;
    } else{
        printf("V[%d] = %d\n", i, vet[i-1]);
        return ex4(vet, i-1);
    }
}

int menor(int*vet, int i){
    int aux;
    if (i == 0){
        return vet[0];
    } else{
        int aux = menor(vet, i-1);
        if(aux < vet[i]){
            return aux;
        } else{
            return menor(vet, i-1);
        }
    }
}

int maior(int*vet, int i){
    if (i == 0){
        return vet[0];
    } else{
        int aux = maior(vet, i-1);
        if(aux > vet[i]){
            return aux;
        } else{
            return maior(vet, i-1);
        }
    }
}