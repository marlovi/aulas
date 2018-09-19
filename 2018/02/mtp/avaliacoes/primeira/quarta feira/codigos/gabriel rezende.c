#include "stdio.h"
#include "stdlib.h"
int menu();

int main(){
    int op;
    do{
    printf("--------MENU---------\n");
    printf("||||Exercicio (1)||||\n");
    printf("||||Exercicio (2)||||\n");
    printf("||||Exercicio (3)||||\n");
     printf("--------------------\n");
    printf("Para SAIR Digite 0 para sair.\n");
    printf("Digite uma opção: ");
    op = menu();
    switch(op){
                case 0:{
                    printf("\nObrigado.Se curtiu deixe sua ajuda contribuindo com uma boa nota!\n");

                        }break;


                case 1:{//QUESTÃO 1!

                        }break;



                case 2:{//Questao 2!
                        printf("___Resolvendo a questao 2___ \n");
                        int x,i,a;
                        int *v1;
                        int *v2;
                        int *v3;
                        int tam1,tam2,tam3;
                        printf("Declare o tamanho do vetor 1: ");
                        scanf("%d",&tam1);
                        printf("Declare o tamanho do vetor 2: ");
                        scanf("%d",&tam2);

                        v1 = (int*)malloc((tam1) * sizeof(int));
                        v2 = (int*)malloc((tam2) * sizeof(int));
                        printf("Parabéns,Vetores alocados com sucesso!\n");

                        for(x = 0; x < tam1; x++){
                                printf("Declare o elemento do [vetor 1] na posição %d:  ",x);
                                scanf("%d",&v1[x]);
                                                 }printf("\n");
                        for(x = 0; x < tam2; x++){
                                printf("Declare o elemento do [vetor 2] na posição %d:  ",x);
                                scanf("%d",&v2[x]);
                                                 }

                        //tam3 = tam1 + tam2;
                        //v3 = (int*)malloc((tam1 + tam2) * sizeof(int));
                        //printf("Terceiro vetor alocado com sucesso!\n");

                        for(int i = 0; i<tam1; i++){
                                for(int j = 0; j<tam2; j++){
                                   if(v1[i] == v2[j]){
                                   a = v1[i]*v2[j];



                                                            }
                                                            }
                                                            }
                                            v3 = (int*)malloc((a * sizeof(int)));
                                            printf("Vetor 3 alocado com SUCESSO!");


                        for(int i = 0; i<tam1; i++){
                                for(int j = 0; j<tam2; j++){
                                    if(v1[i] == v2[j]){
                                                        v3 = v1[i];
                                                            }
                                                            }
                                                            }

                                    printf("\nVetor 3 = [%d] \n",v3);
                                    free(v1);
                                    free(v2);
                                    free(v3);
                                    printf("Vetores desalocados com SUCESSO! \n");




                        }break;

                case 3:{//Questão 3!
                        int matri1,matri2,matri3,matri4;
                        int provas1,provas2,provas3,provas4;
                        int trab1,trab2,trab3,trab4;
                        int **m;
                        int lin,col,i,j,tam;
                        int x = 0;
                        m = (int**)malloc(2 * sizeof(int*));
                        for(x = 0; x<2;x++){
                            m = (int*)malloc(2 * sizeof(int));
                                            }
                        printf("Insira o número de matricula: dos alunos:\n");

                            for( x = 0; x<2; x++){
                            printf("Digite a Matricula do aluno 1: ");
                            scanf("%d",&matri1);
                            printf("\nDigite a Matricula do aluno 2: ");
                            scanf("%d",&matri2);
                            printf("\nDigite a Matricula do aluno 3: ");
                            scanf("%d",&matri3);
                            printf("\nDigite a Matricula do aluno 4: ");
                            scanf("%d",&matri4);}

                            m[0][0] = matri1;
                            m[0][1] = matri2;
                            m[0][2] = matri3;
                            m[0][3] = matri4;



                            for(x = 0; x<2; x++){
                            printf("Digite a Media das provas do aluno 1: ");
                            scanf("%d",&provas1);
                            printf("\nDigite a Media das provas do aluno 2: ");
                            scanf("%d",&provas2);
                            printf("\nDigite a Media  das provas do aluno 3: ");
                            scanf("%d",&provas3);
                            printf("\nDigite a Media das provas do aluno 4: ");
                            scanf("%d",&provas4);
                            break;}

                            m[1][0] = provas1;
                            m[1][1] = provas2;
                            m[1][2] = provas3;
                            m[1][3] = provas4;


                            for(x = 0; x<2; x++){
                            printf("Digite a Media dos trabalhos do aluno 1: ");
                            scanf("%d",&trab1);
                            printf("\nDigite a Media dos trabalhos do aluno 2: ");
                            scanf("%d",&trab2);
                            printf("\nDigite a Media  dos trabalhos do aluno 3: ");
                            scanf("%d",&trab3);
                            printf("\nDigite a Media dos trabalhos do aluno 4: ");
                            scanf("%d",&trab4);}

                            m[2][0] = trab1;
                            m[2][1] = trab2;
                            m[2][2] = trab3;
                            m[2][3] = trab4;


                            m[3][0] = provas1 + trab1;
                            m[3][1] = provas2 + trab2;
                            m[3][2] = provas3 + trab3;
                            m[3][3] = provas4 + trab4;


                            for(i=0;i<2;i++){
                                    for(j=0;j<m;j++){

                                    printf("%d ",m[i][j]);
                                                    }
                                     printf("\n");
                                            }
                    free(m);

                        }break;

                default:(printf("\n!!ERR0RNotFound!!!\nParece que vc esta tentando acessar uma opção invalida,tente novamente!\n\n"));

            }





    }
    while(op != 0);
return 0;}


int menu(){
    int op;
    scanf("%d",&op);
    return op;
}
