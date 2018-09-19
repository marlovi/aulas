#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void EscreverMatChar(char**,int);
int verficarjogo(char**,int);

int main(){
    int i,j;
    char **jogo;
    int op = 1;
    int linha,coluna;
    int turno=0;
    int ganhar;
    int *vet1, *vet2,*vet3;
    int tam, tam2,tam3;
    int *val;

    while(op != 0){
        printf("\n");
        printf("Escolha uma Operação\n");
        printf("0 - para sair\n");
        printf("1 - para jogo da velha\n");
        printf("2 - para juntar vetores\n");
        printf("3 - Ordenador de vetor\n");
        op = 1;
        scanf("%d",&op);
        switch(op){
                case 0:
                    printf("Obrigado por usar essa aplicação :)  !!!!!\n");
                    break;


                case 1:
                    printf("Vc entrou no jogo da velha\n");
                    jogo = (char**) malloc(3 * sizeof(int*));
                    for (i = 0 ; i< 3 ; i++){
                        jogo[i] = (char*) malloc(3 * sizeof(int));
                    }
                    for (i = 0; i < 3; i++){
                        for (j = 0; j < 3; j++){
                            jogo[i][j] = ' ';
                        }
                    }
                    for (i = 0 ; i < 9; i++){
                        EscreverMatChar(jogo,3);
                        printf("Escolha onde se quer marcar (linha depois coluna)\n");
                        scanf("%d %d",&linha,&coluna);
                        if(jogo[linha-1][coluna-1] != ' '){
                            printf("local ja Preenchido\n\n");
                            linha = 1;
                            coluna = 1;
                            turno--;
                            i--;
                        }
                        if(turno%2 == 0){
                            jogo[linha-1][coluna-1] = 'X';
                        }else{
                            jogo[linha-1][coluna-1] = '0';
                        }
                        turno++;
                        ganhar = verficarjogo(jogo, 3);
                        if (ganhar == 1){
                            EscreverMatChar(jogo,3);
                            break;
                        }
                        if(turno == 9 && ganhar == 0){
                            printf("Jogo empatado (VELHA)\n");
                            EscreverMatChar(jogo,3);
                            break;
                        }
                        
                    }
                    break;
                case 2:
                    printf("Voce entrou na aplicação de juntar vetores\n\n");
                    printf("Digite o Tamanho do Primeiro vetor\n");
                    scanf("%d",&tam);
                    printf("Digite o Tamanho do Segundo vetor\n");
                    scanf("%d",&tam2);

                    vet1 = (int*) malloc (tam * sizeof(int));

                    printf("Digite o Primeiro vetor\n");
                    for (i = 0; i< tam ; i++){
                        scanf("%d",&vet1[i]);
                    }

                    vet2 = (int*) malloc (tam2 * sizeof(int));

                    printf("Digite o Segundo vetor\n");
                    for (i = 0; i< tam2 ; i++){
                        scanf("%d",&vet2[i]);
                    }

                    tam3 = tam + tam2;
                    vet3 = (int*) malloc (tam3 * sizeof(int));
                    for(i = 0; i < tam; i++){
                        vet3[i] = vet1[i];
                    }
                    printf("i = %d\n",i);
                    for(j = i; j < tam3; j++){
                        vet3[j] = vet2[j- i];
                    }

                    printf("vet3 = ");

                    for(i = 0; i < tam3; i++){
                            printf("%d ",vet3[i]);
                    }
                    printf("\n");
                    free(vet1);
                    free(vet2);
                    free(vet3);
                    break;

                case 3:
                    printf("Voce entrou no ordenador de vetor\n");
                    printf("digite o tamanho do vetor\n");
                    scanf("%d",&tam);
                    printf("digite os valores do vetor\n");
                    val = (int*) malloc (tam * sizeof(int));
                    for ( i = 0 ; i < tam ; i++){
                        scanf("%d",&val[i]);
                    }
                    for(i = 0; i < tam; i++){
                        for ( j = 0; j < tam ; j++){
                            int aux;
                            if( val[i] > val[j]){
                                aux = val[i];
                                val[i] = val[j];
                                val[j] = aux;
                            }
                        }
                    }
                    for(i = 0; i < tam; i++){
                        printf("%d ",val[i]);
                    }
                    printf("\n");
                    free(val);
                    break;
            }  
        }
    return 0;
}






void EscreverMatChar(char **mat,int tam){
    int i,j;

    for ( i = 0 ;i < tam; i++){
        for (j = 0; j < tam ; j++){
            printf("%c |",mat[i][j]);
        }
        printf("\n");
    }
}

int verficarjogo(char**mat,int tam){
    int i, j = tam -1;
    int c =0 , l = 0 , d = 0, c1 =0 , l1 = 0 , d1 = 0, di = 0 , di1 = 0;
    for(i = 0 ; i< tam; i++){
        if (mat[i][0] == 'X'){
            l++;
        }
        if (mat[0][i] == 'X'){
            c++;
        }
        if (mat[i][i] == 'X'){
            d++;
        }
        if (mat[j][i] == 'X'){
            di++;
        }
        if (mat[i][0] == '0'){
            l1++;
        }
        if (mat[0][i] == '0'){
            c1++;
        }
        if (mat[i][i] == '0'){
            d1++;
        }
        if (mat[j][i] == '0'){
            di1++;
        }
        if(c == 3 || l == 3 || d == 3 || di == 3){
            printf("jogador X ganhou\n");
            return 1;
        }
        if(c1 == 3 || l1 == 3 || d1 == 3 || di1 == 3){
            printf("jogador 0 ganhou\n");
            return 1;
        }
        j--;
    }
return 0;
}