#include <stdio.h>
#include <stdlib.h>

int main(){

int op;

do{
    printf("Escolha uma questão\n");
    scanf("%d", &op);

    switch(op){

        case 0:
        break;
        case 1:{

        }break;

        case 2:{

            int tamanho, i;
            printf("Informe o tamanho do vetor 1:\n");
            scanf("%d", &tamanho);
            int *vetor1 = (int*)malloc(sizeof(int)*tamanho);

            printf("Digite os valores:\n");

            for(i=0;i<tamanho; i++){
                scanf("%d", &vetor1[i]);
            }

            for(i=0; i<tamanho;i++){
                printf("Vetor1[%d]:%d\n",i, vetor1[i]);
            }

            printf(" Vetor 2:\n");

            int *vetor2= (int*)malloc(sizeof(int)*tamanho);

            printf("Digite os valores:\n");

            for(i=0; i<tamanho; i++){
                scanf("%d", &vetor2[i]);
            }

            for(i=0; i<tamanho; i++){
                printf("Vetor2[%d]: %d\n", i, vetor2[i]);
            }

            int *vetor3 = (int*)malloc(sizeof(int)*tamanho);

            printf("Vetor 3\n");

           for(i=0; i<=3; i++){
               printf("Vetor3[%d]: %d\n", i, vetor1[i]);
                    
                 }
               
               for(int j=4; j<10;j++){
                  printf("Vetor3[%d]: %d\n", j, vetor2[j]);
                 
          
                    }

                   

        }break;

        case 3:{

            int tamanho, i, aux;
            printf("Informe o tamanho\n");
            scanf("%d", &tamanho);

            int *vetor= (int*)malloc(sizeof(int)*tamanho);

            printf("Informe os valores\n");

            for(i=0; i<tamanho; i++){
                scanf("%d", &vetor[i]);
            }

            for(i=0; i<tamanho; i++){
                printf("Vetor inicial[%d]: %d\n", i, vetor[i]);
            }

            for(i=0; i<tamanho;i++){
                for(int j=0; j<tamanho;j++){
                    if(vetor[i] > vetor[j]){
                        aux=vetor[i];
                        vetor[i]=vetor[j];
                        vetor[j]=aux;
                    }
                }

            }

            for(i=0; i<tamanho;i++){

                printf("Decrescente[%d]: %d\n", i, vetor[i]);
            }
            free(vetor);

        }break;

    }


}while(op!=0);



}