#include "stdio.h"
#include "stdlib.h"
int exe1 ();
int exe2 ();
int exe3 ();
int main(){

    printf ("--------------Questão 1-------: 1\n");
    printf ("--------------Questão 3-------: 2\n");
    printf ("--------------Questão 3-------: 3\n");
    printf ("--------------Sair------------: 0\n");

    int questao;
    printf ("Informe a questão desejada:\n");
    scanf("%d", &questao);   

        switch (questao){

        case 1:
        exe1();
        break;

        case 2:

        exe2 ();

        break;

        case 3:

        exe3 ();

        break;
    
        case 0:

        printf ("Saindo\n");

        break;    
    }
}

int exe2 (){
    int tam;
    int tam2;
    int *vetor;
    int *vetor2;
    printf("Informe o tamanho do vetor 1:\n");
    scanf("%d", &tam);
    vetor = (int *) calloc (tam,sizeof(int));

    printf ("a) Informe os valores do vetor 1:\n");
    for (int i = 0; i < tam; i++){
        scanf ("%d",&vetor[i]);        
    }
    printf("Informe o tamanho do vetor 2:\n");
    scanf("%d", &tam2);
    vetor2 = (int *) calloc (tam2,sizeof(int));

    printf ("a) Informe os valores do vetor 2:\n");
    for (int j = 0; j < tam2; j++){
        scanf ("%d",&vetor2[j]);
        
    }

    int *vetor3;
    int tam3;
    int i;
    int cont = 0;
    tam3 = tam + tam2;
    vetor3 = (int *) calloc (tam3,sizeof(int));

    for (i = 0; i < tam; i++){                   
        vetor3[i] = vetor [i];              
    }      
    for (int j = i ; j < tam3; j++){                            
        vetor3[j] = vetor2 [cont];
            cont++;               
    } 
        for (int j = 0; j < tam3; j++){
        printf ("%d - ",vetor3[j]);
        
    }

}

int exe3 (){
        int tam;
    int *vetor;
    printf("Informe o tamanho do vetor\n");
    scanf("%d", &tam);
    vetor = (int *) calloc (tam,sizeof(int));

    printf ("a) Informe os valores do vetor:\n");
    for (int i = 0; i < tam; i++){
        scanf ("%d",&vetor[i]);
        
    }
    int aux=0;
    printf ("b) Ordenamento do vetor:\n");
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if (vetor[i]<vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor [i]= aux;
            }

        }
    }
    for (int i = tam - 1; i >=0; i--){

        printf ("%d - ", vetor[i]);
        
    }
    free(vetor);
    printf ("\n");
}
int exe1 (){

    int matriz [3][3];
    int i, j;
    int cont = 9;
    printf("Jogador 1 = 10:\n");
    printf("Jogador 2 = 11:\n\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            matriz[i] [j] = cont;
            cont--;
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf ("%d | ", matriz[i][j]);
        }
    printf("\n");
    }
    //-------------- ate aqui ta pronto -----------



    int n;
    int contv=0;   
       
    for (j = 0; j < 9; j++){          

    printf ("Jogador 1:");
    scanf ("%d", &n);

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (matriz[i][j] == n){
                matriz[i][j] = 10;

            } 

                
            } 
 
        }
    

         
 
            if (matriz[0][0] == 10 && matriz[0][1] == 10 && matriz[0][2] == 10 ){
            printf ("Jogador O venceu!!\n");
                for (i = 0; i < 3; i++){
                    for (j = 0; j < 3; j++){
                         printf ("%d | ", matriz[i][j]);
                    }
             printf("\n"); 
                     }
                break;
                
            } 
            else if (matriz[1][0] == 10 && matriz[1][1] == 10 && matriz[1][2] == 10 ){
                printf ("Jogador O venceu!!\n");
                    for (i = 0; i < 3; i++){
                        for (j = 0; j < 3; j++){
                             printf ("%d | ", matriz[i][j]);
                        }
                    printf("\n"); 
                }
                break;
            }   
            else if (matriz[2][0] == 10 && matriz[2][1] == 10 && matriz[2][2] == 10 ){
                printf ("Jogador O venceu!!\n");
                    for (i = 0; i < 3; i++){
                         for (j = 0; j < 3; j++){
                            printf ("%d | ", matriz[i][j]);
                    }
                 printf("\n"); 
                    }
                break;               
            } 
    // agora das colunas -------------------------------------------
            if (matriz[0][0] == 10 && matriz[1][0] == 10 && matriz[2][0] == 10 ){
            printf ("Jogador O venceu!!\n");
                for (i = 0; i < 3; i++){
                    for (j = 0; j < 3; j++){
                         printf ("%d | ", matriz[i][j]);
                    }
             printf("\n"); 
                     }
                break;
                
            } 
            else if (matriz[0][1] == 10 && matriz[1][1] == 10 && matriz[2][1] == 10 ){
                printf ("Jogador O venceu!!\n");
                    for (i = 0; i < 3; i++){
                        for (j = 0; j < 3; j++){
                             printf ("%d | ", matriz[i][j]);
                        }
                    printf("\n"); 
                }
                break;
            }   
            else if (matriz[0][2] == 10 && matriz[1][2] == 10 && matriz[2][2] == 10 ){
                printf ("Jogador O venceu!!\n");
                    for (i = 0; i < 3; i++){
                         for (j = 0; j < 3; j++){
                            printf ("%d | ", matriz[i][j]);
                    }
                 printf("\n"); 
                    }
                break;               
            }       
    // Diagonais ----------------------------------------------------------------

                if (matriz[0][0] == 10 && matriz[1][1] == 10 && matriz[2][2] == 10 ){
            printf ("Jogador O venceu!!\n");
                for (i = 0; i < 3; i++){
                    for (j = 0; j < 3; j++){
                         printf ("%d | ", matriz[i][j]);
                    }
             printf("\n"); 
                     }
                break;
                
            } 
            else if (matriz[0][2] == 10 && matriz[1][1] == 10 && matriz[2][0] == 10 ){
                printf ("Jogador O venceu!!\n");
                    for (i = 0; i < 3; i++){
                        for (j = 0; j < 3; j++){
                             printf ("%d | ", matriz[i][j]);
                        }
                    printf("\n"); 
                }
                break;
            }   

            // fim jogar dor 1 ---------------------------------------



    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf ("%d | ", matriz[i][j]);
            }
           printf("\n"); 
        }
    int y=0;
    printf ("Jogador 2:");
    scanf ("%d", &y);
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (matriz[i][j] == y){
                matriz[i][j] = 11;
            }            
        }
    }
                // Jogador 2 ---------------------------------------------

            if (matriz[0][0] == 11 && matriz[0][1] == 11 && matriz[0][2] == 11 ){
            printf ("Jogador X venceu!!\n");
                for (i = 0; i < 3; i++){
                    for (j = 0; j < 3; j++){
                         printf ("%d | ", matriz[i][j]);
                    }
             printf("\n"); 
                     }
                break;
                
            } 
            else if (matriz[1][0] == 11 && matriz[1][1] == 11 && matriz[1][2] == 11 ){
                printf ("Jogador X venceu!!\n");
                    for (i = 0; i < 3; i++){
                        for (j = 0; j < 3; j++){
                             printf ("%d | ", matriz[i][j]);
                        }
                    printf("\n"); 
                }
                break;
            }   
            else if (matriz[2][0] == 11 && matriz[2][1] == 11 && matriz[2][2] == 11 ){
                printf ("Jogador X venceu!!\n");
                    for (i = 0; i < 3; i++){
                         for (j = 0; j < 3; j++){
                            printf ("%d | ", matriz[i][j]);
                    }
                 printf("\n"); 
                    }
                break;               
            } 
    // agora das colunas -------------------------------------------
            if (matriz[0][0] == 11 && matriz[1][0] == 11 && matriz[2][0] == 11 ){
            printf ("Jogador X venceu!!\n");
                for (i = 0; i < 3; i++){
                    for (j = 0; j < 3; j++){
                         printf ("%d | ", matriz[i][j]);
                    }
             printf("\n"); 
                     }
                break;
                
            } 
            else if (matriz[0][1] == 11 && matriz[1][1] == 11 && matriz[2][1] == 11 ){
                printf ("Jogador X venceu!!\n");
                    for (i = 0; i < 3; i++){
                        for (j = 0; j < 3; j++){
                             printf ("%d | ", matriz[i][j]);
                        }
                    printf("\n"); 
                }
                break;
            }   
            else if (matriz[0][2] == 11 && matriz[1][2] == 11 && matriz[2][2] == 11 ){
                printf ("Jogador X venceu!!\n");
                    for (i = 0; i < 3; i++){
                         for (j = 0; j < 3; j++){
                            printf ("%d | ", matriz[i][j]);
                    }
                 printf("\n"); 
                    }
                break;               
            }       
    // Diagonais ----------------------------------------------------------------

            if (matriz[0][0] == 11 && matriz[1][1] == 11 && matriz[2][2] == 11 ){
            printf ("Jogador X venceu!!\n");
                for (i = 0; i < 3; i++){
                    for (j = 0; j < 3; j++){
                         printf ("%d | ", matriz[i][j]);
                    }
             printf("\n"); 
                     }
                break;
                
            } 
            else if (matriz[0][2] == 11 && matriz[1][1] == 11 && matriz[2][0] == 11 ){
                printf ("Jogador X venceu!!\n");
                    for (i = 0; i < 3; i++){
                        for (j = 0; j < 3; j++){
                             printf ("%d | ", matriz[i][j]);
                        }
                    printf("\n"); 
                }
                break;
            }
            // fim jogador 2 ------------------------------------------------
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf ("%d | ", matriz[i][j]);
            }
           printf("\n"); 
        }    

     contv++;  
    }
    printf("Deu Velha\n\n");
}
