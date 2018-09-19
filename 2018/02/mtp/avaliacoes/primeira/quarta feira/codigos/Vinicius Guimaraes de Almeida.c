#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int menu();

int main(){

int lerVet1(int *,int *);
void printvet1(int *,int *);
int interVet3(int *, int *,int *,int *,int *);
int interContVet3(int *, int *,int *,int *,int *);
int colunaUm(int **);
void printColUm(int **);
    
    int op;
    
    do{
        op = menu();
        switch(op){
            case 0:
                printf("Obrigado por utilizar o nosso sistema! \n");
            break;
            case 1:{
                int **matriz;
                int i,j;

                for(i=0;i<12;i++){
                    for(j=0;j<5;j++){
                        matriz = (int**) malloc(sizeof(int*));
                    }
                }

                lerLugaresDoBusao(matriz);
    5%
            }break;
            case 2:{
                int *vet1;
                int *vet2;
                int *vet3;

                int tam1,tam2,tam3; // tamanhos

                int ret1,ret2,ret3; //retornos

                printf("Digite o tamanho do vetor 1: ");
                scanf("%d",&tam1);

                vet1 = (int*) malloc(tam1 * sizeof(int));

                ret1 = lerVet1(vet1,&tam1);
                printvet1(vet1,&tam1);

                printf("Digite o tamanho do vetor 2: ");
                scanf("%d",&tam2);

                vet2 = (int*) malloc(tam2 * sizeof(int));

                ret2 = lerVet2(vet2,&tam2);
                printvet2(vet2,&tam2);

                tam3=interContVet3(vet1,vet2,vet3,&tam1,&tam2);

                vet3 = (int*) malloc(tam3 * sizeof(int));

                ret3 = interVet3(vet3,vet2,vet1,&tam1,&tam2);
                printvet3(vet3,&tam3);

                free(vet1);
                free(vet2);
                free(vet3);
    100%
            }break;
            case 3:{
                5%
                int **mat;
                int i,j;
                int matriculas;

                for(i=0;i<5;i++){
                    for(j=0;j<4;j++){
                        mat = (int**) malloc(sizeof(int*));
                    }
                }
                
                matriculas = colunaUm(mat);
                printColUm(mat);


            }break;
        }

    }while(op !=0);

return 0;    
}
//----------------Função Exercicio 3---------------------------

    int colunaUm(int **mat){
        int i,j;
        int num_mat;
        for(i=0;i<5;i++){
            for(j=0;j<=0;j++){
                printf("Digite número de matrícula: "); // m[0][0]num_matricula
                scanf("%d",&num_mat);
            }
        }
    }
    
    void printColUm(int **mat){
        int i,j;
        for(i=0;i<5;i++){
            for(j=0;j<=0;j++){
                printf("Mat[%d][%d]: %d",i,j,mat[i][j]); // m[0][0]num_matricula
            }
        }
    }

//----------------Fim Função Exercicio 3-----------------------
//----------------Função Exercicio 2---------------------------
    int lerVet1(int *vet1,int *tam1){
        int i;
        for(i=0;i<*tam1;i++){
            printf("Digite o Valor de Vet1[%d]: ",i);
            scanf("%d",&vet1[i]);
        }
    }

    void printvet1(int *vet1,int *tam1){
        int i;
        for(i=0;i<*tam1;i++){
            printf("Vet1[%d]: %d\n",i,vet1[i]);
        }
    }
    int lerVet2(int *vet2,int *tam2){
        int i;
        for(i=0;i<*tam2;i++){
            printf("Digite o Valor de Vet2[%d]: ",i);
            scanf("%d",&vet2[i]);
        }
    }

    void printvet2(int *vet2,int *tam2){
        int i;
        for(i=0;i<*tam2;i++){
            printf("Vet2[%d]: %d\n",i,vet2[i]);
        }
    }
    int interVet3(int *vet3, int *vet2,int *vet1,int *tam1,int *tam2){
        int i,j;
        for(i=0;i<*tam1;i++){
            for(j=0;j<*tam2;j++){
                if(vet1[i] == vet2[j]){
                    vet3[i]=vet2[j];
                }else if("não existe valores iguais!");
            }
        }
    }
    int interContVet3(int *vet3, int *vet2,int *vet1,int *tam1,int *tam2){
        int i,j,k;
        for(i=0;i<*tam1;i++){
            for(j=0;j<*tam2;j++){
                if(vet1[i] == vet2[j]){
                    k++;
                }else if("não existe valores iguais!");
            }
        }
        return k;
    }
    void printvet3(int *vet3,int *tam3){
        int i;
        for(i=0;i<*tam3;i++){
            if(vet3[i] != 0){
                printf("Vet3[%d]: %d\n",i,vet3[i]);
            }
        }
    }
//----------------Fim Função Exercicio 2-----------------------
//----------------Função ler e Escrever Ex1--------------------

    void lerLugaresDoBusao(int **matriz){
        int i=0,j=0;
            for(i=0;i<12;i++){
                for(j=0;j<5;j++){
                    printf("Digite o Numero dos lugares m[%d][%d]: ",i,j);
                    scanf("%d",&matriz[i][j]);
                }
            }
    }

//----------------Função ler e Escrever Ex1--------------------

int menu(){
    int op;
    printf("-----------------------");
    printf("Digite o numero do exercicio desejado de 1 a 3, ou digite 0 para sair\n = ");
    scanf("%d",&op);
    return op;
}