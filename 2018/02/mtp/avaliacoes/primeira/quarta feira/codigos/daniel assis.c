#include "stdio.h"
#include "stdlib.h"
int menu();
void imprimir_vetor(int*, int*);
void imprimir_vetor2(int*, int*);
void ler_vetor(int*, int*);
void comparar_vetor(int*, int*, int*, int*);
int main(){
    int op;
    op = menu();
    switch(op){
        do{
            case 0:{
                printf("Bye stranger\n");
            }
            break;
            case 1:
            break;
            case 2:{
                printf("Comparação de dois vetores\n");
                int *vet1;
                int tamanho1;
                int *vet2;
                int tamanho2;
                int *vet3;
                int tamanho3;
                int i;
                int j;
                vet1 = (int*) malloc(tamanho1 * sizeof(int));
                printf("Digite o tamanho do primeiro vetor: ");
                scanf("%d", &tamanho1);
                ler_vetor(vet1, &tamanho1);
                
                printf("Digite o tamanho do segundo vetor: ");
                scanf("%d", &tamanho2);
                vet2 = (int*) malloc(tamanho2 * sizeof(int));
                ler_vetor(vet2, &tamanho2);
                printf("\n\nValores do primeiro vetor\n\n");
                imprimir_vetor(vet1, &tamanho1);
                printf("\n\nValores do segundo vetor\n\n");
                imprimir_vetor(vet2, &tamanho2);
                printf("\n\n");
                //comparar_vetor(vet1, &tamanho1, vet2, &tamanho2);
                tamanho3 = tamanho1 + tamanho2;
                vet3 = (int*) malloc(tamanho3 * sizeof(int));
                
                for(i = 0; i < tamanho3; i++){
                    for(j = 0; j < tamanho3; j++){

                        if(vet1[i]== vet2[j])
                            vet3[i] = vet1[i];

                    
                    }
                }
                imprimir_vetor2(vet3, &tamanho3);
                 free(vet1);
                 free(vet2);
                 free(vet3);               

            }
            break;
            case 3:{
               /* int *matriz;
                int i;
                int *linha;
                int coluna = 4;
                matriz = (int**) malloc(*linha * sizeof(int));
                for(i = 0; i < 5; i++){
                    linha = (int*) malloc(coluna * sizeof(int));
                }*/
                
            }
        }while(op != 0);
    }
return 0;
}
int menu(){
    int op;
    printf("-----------BEM-VINDO USUÁRIO-----------\n");
    printf("Digite 0 para sair\n");
    printf("Digite 1 para o primeiro exercício\n");
    printf("Digite 2 para o segundo exercício\n");
    printf("Digite 3 para o terceiro exercício\n");
    scanf("%d", &op);
    return op;
}
void ler_vetor(int *vetor, int *tamanho){
    int i;
    for(i = 0; i < *tamanho; i++){
        printf("Digite o %dº do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

}
void imprimir_vetor(int *vetor, int *tamanho){
    int i;
    
    for(i = 0; i < *tamanho; i++){
        printf("v[%d] = %d\n", i, vetor[i]);
  
    }

}
void comparar_vetor(int *vetor1, int *tamanho1, int *vetor2, int *tamanho2){
    int tamanho = *tamanho1 + *tamanho2;
    int i;
    int *vetor;
    int total =0;
    //vetor = (int*) malloc(tamanho * sizeof(int));

    for(i = 0; i < tamanho; i ++){
        if(vetor1[i] == vetor2[i])
        total++;
    }
    printf("%d\n", total);
}
void ler_matriz(int **matriz, int *linha, int *coluna){
    int i;
    int j;
    for(i = 0; i < *linha; i++){
        for(j = 0; j < *coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimir_vetor2(int *vetor, int *tamanho){
    int i;
    int k= 0;
    printf("Os valores iguais são\n");
    for(i = 0; i < *tamanho; i++){
        if(vetor[i]!=0){
            printf("v[%d] = %d\n", k++, vetor[i]);
        }
    }

}