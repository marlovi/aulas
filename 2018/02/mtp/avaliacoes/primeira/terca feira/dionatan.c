#include <stdio.h>
#include <stdlib.h>

int main(){
    int op;
    do{
        printf("Escolha a questão: ");
        scanf("%d",&op);
        switch(op){
            case 0:
                break;

            case 1:{
                int i, linha, coluna;
                
                char** jogo = (char**)malloc(sizeof(char*)*3);
                    
                    for(i = 0; i < 3; i++)
                        jogo[i] = (char*) malloc(sizeof(char)*3);


                for(i = 1; i < 10 ; i++){
                    printf("\nJogada %d: Digite linha e coluna: \n",i);
                    if(i%2 == 0){     
                        printf("Informe a linha ");
                        scanf("%d",&linha);
                        printf("Informe a coluna ");
                        scanf("%d",&coluna);

                        jogo[linha][coluna] = 'X';

                    }
                
                    if(i%2 != 0){                    
                        printf("Informe a linha ");
                        scanf("%d",&linha);
                        printf("Informe a coluna ");
                        scanf("%d",&coluna);
                        
                        jogo[linha][coluna] = 'O';

                    }
                
                    if( jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }
                    else if(jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }
                    else if(jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }
                    else if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }
                    else if(jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }
                    else if(jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }
                    else if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }
                    else if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
                        printf("Jogador X VENCEU\n");
                        break;
                    }


                    else if( jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                    else if(jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                    else if(jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                    else if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                    else if(jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                    else if(jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                    else if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                    else if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){
                        printf("Jogador O VENCEU\n");
                        break;
                    }
                }

                if( i == 9){
                    printf("Jogo empatado (VELHA)\n");
                }
                else{
                    printf("Fim de Jogo\n");
                }

                free(jogo);

                printf("\n");
            }break;
            
            case 2:{
                int tamanho1, tamanho2, tamanho3, i, cont;
                printf("Digite o tamanho do 1º vetor: ");
                scanf("%d", &tamanho1);
                int *vetor1 = (int*) malloc(sizeof(int)* tamanho1);
                printf("Digite os valores do 1º vetor\n");
                for(i=0; i < tamanho1; i++){
                    scanf("%d", &vetor1[i]);
                }

                printf("Digite o tamanho do 2º vetor: ");
                scanf("%d", &tamanho2);
                int *vetor2 = (int*) malloc(sizeof(int)* tamanho2);
                printf("Digite os valores do 2º vetor\n");
                
                for(i=0; i < tamanho2; i++){
                    scanf("%d", &vetor2[i]);
                }

                tamanho3 = tamanho1 + tamanho2;
                int *vetor3 = (int*) malloc(sizeof(int)* tamanho3);

                for(i = 0; i < tamanho1; i++){
                    vetor3[i] = vetor1[i];
                }
               
               cont = tamanho1;

                for(i = 0; i < tamanho2; i++){
                    vetor3[cont] = vetor2[i];
                    cont++;
                };

                printf("O vetor 3: a união do 1 e do 2 é: \n");
                
                for(i=0; i < tamanho3; i++){
                    printf("Na posição %d: %d \n",i, vetor3[i]);
                }

                free(vetor1);

                free(vetor2);

                free(vetor3);

                printf("\n");
            }break;

            case 3:{
                int tamanho, i, aux;
                printf("Digite o tamanho do vetor: ");
                scanf("%d", &tamanho);
                int *vetor = (int*)malloc(sizeof(int)*tamanho);
                printf("Digite os valores do vetor de %d posições: \n",tamanho);
                for(i=0; i < tamanho; i++){
                    scanf("%d", &vetor[i]);
                }
                for(i=0; i < tamanho; i++){
                    printf("Vetor Original, posição %d: %d \n",i, vetor[i]);
                }
                for(i = 0; i < tamanho; i++){
                    for(int j = 0; j < tamanho; j++){
                        if(vetor[i] > vetor[j]){
                            aux = vetor[i];
                            vetor[i] = vetor[j];
                            vetor[j] = aux;
                        }
                    }
                }
                printf("\n");
                for(i=0; i < tamanho; i++){
                    printf("Vetor Decrescente, posição %d: %d \n",i, vetor[i]);
                }

                free(vetor);

                printf("\n");
            }break;
        }
    }while(op!=0);
}