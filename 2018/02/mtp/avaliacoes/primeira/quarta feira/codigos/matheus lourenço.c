#include"stdio.h"
#include"stdlib.h"
#include"time.h"
int imprimirMatriz(int **);
int lerMatriz(int **);
int lerVetor(int *,int*);
int imprimirVetor(int *,int*);
int intercepcaoVetor(int *,int *,int *,int *);
int intercepcaoVetorC(int *,int *,int *,int *);
enum{TRUE,FALSE};
int menu();
int main(){
    int op=0;
    do{
        op=menu();
        switch(op){
            case 0:
            printf("Encerrar Programa\n");
            break;
            case 1:{
                int **matriz;
                int lugar;
                int num;
                int i=0;

                printf("Lugares do onibus\n");
                matriz=(int**)malloc(12*sizeof(int*));
                for(i=0;i<12;i++){
                    matriz[i]=(int*)malloc(5*sizeof(int*));
                }
                lerMatriz(matriz);
                imprimirMatriz(matriz);
                printf("selecione a poltrona que deseja sentar\n");
                scanf("%d",&num);

                int lin=12;
                for(lin=lin-1;lin<=0;lin--){
                        free(matriz[lin]);
                }
            }break;
            case 2:{
                int *a;
                int *b;
                int *c;
                int tam;
                int num;
                int num2;
                printf("determine o tamanho do vetor A\n");
                scanf("%d",&tam);
                a=(int*)malloc(tam*sizeof(int));
                printf("Determine os valores do vetor A\n");
                lerVetor(a,&tam);
                printf("__________\n");
                imprimirVetor(a,&tam);
                printf("__________\n");

                printf("determine o tamanho do vetor B\n");
                scanf("%d",&num);
                b=(int*)malloc(tam*sizeof(int));
                printf("Determine os valores do vetor B\n");
                lerVetor(b,&tam);
                printf("__________\n");
                imprimirVetor(b,&tam);
                printf("__________\n");
                num2=tam+num;
                c=(int*)malloc(num2*sizeof(int));
                printf("Os valores do vetor C\n");
                intercepcaoVetor(a,b,c,&num2);
                intercepcaoVetorC(a,b,c,&num2);
                imprimirVetor(c,&tam);
                free(a);
                free(b);
                free(c);
            }break;
            case 3:{
                int **matriz;
                int i=0;
                int tam=5;
                printf("Matricula do Aluno:\n");
                printf("Media das Provas:\n");
                printf("Media dos Trabalhos\n");
                printf("Media final\n");
                matriz=(int**)malloc(tam*sizeof(int*));
                for(i=0;i<tam;i++){
                    matriz[i]=(int*)malloc(tam*sizeof(int*));
                }
                lerMatriz(matriz);
                imprimirMatriz(matriz);

                int lin=tam;
                for(lin=lin-1;lin<=0;lin--){
                        free(matriz[lin]);
                }

            }
        }
    }while(op!=0);
    return 0;
}
int menu(){
    int op;
    printf("0 - Para sair\n");
    printf("1 - Questao 1\n");
    printf("2 - Questao 2\n");
    printf("3 - Questao 3\n");
    scanf("%d",&op);

    return op;
}
int lerMatriz(int **matriz){
    int i=0;
    int j=0;
    for(i=0;i<12;i++){
        for(j=0;j<5;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
}
int imprimirMatriz(int **matriz){
    int i=0;
    int j=0;
    for(i=0;i<12;i++){
        for(j=0;j<5;j++){
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }
}
int lerVetor(int *vet,int* tam){
    int i=0;
    for(i=0;i<*tam;i++){
        printf("determine o valor de V[%d]\n",i+1);
        scanf("%d",&vet[i]);
    }
}
int imprimirVetor(int *vet,int* tam){
    int i=0;
    for(i=0;i<*tam;i++){
        printf("Vet[%d] = %d\n",i+1,vet[i]);
    }
}
int intercepcaoVetor(int *a,int *b,int *c,int *num2){
    int i=0;
    int j=0;
    int cont=0;
    for(i=0;i<*num2;i++){
        for(j=0;j<*num2;j++){
            if(a[i]==b[j]){
                cont++;

            }break;
        }   
    }
    return cont;
}
int intercepcaoVetorC(int *a,int *b,int *c,int *num2){
    int i=0;
    int j=0;
    for(i=0;i<*num2;i++){
        for(j=0;j<*num2;j++){
            if(a[i]==b[j]){
                c[i]=a[i];
            }break;
        }   
    }
}
int verificaPoltrona(int **matriz, int* tam, int* num){
    int i=0;
    int j=0;
    for(i=0;i<*tam;i++){
        for(j=0;j<*tam;j++){
            if(matriz[i][j] ==*num){

                return TRUE;
            }
        }return FALSE;
    }
}