#include <stdlib.h>
#include <stdio.h>

int jogadorO(int*, int*, char**);
int jogadorX(int*, int*, char**);
int verifica_matriz(int*, int*, char**, char);
void exibir_jogo(char**);
int verifica_ganhador(char**, char);
int verifica_velha(char**);

int* vetor1(int*);
int* vetor2(int*);
int* vetor3(int, int, int*, int*);

int* ex3(int);
int comparar(const void*, const void*);

int main(){
    int op;
    do{
        printf("\t\tMenu de exercicios\n\n1 - Questao 1\n2 - Questao 2\n3 - Questao 3\n0 - Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:{
                char **m = (char**)malloc(3*sizeof(char*));
                for(int i=0;i<3;i++){
                    m[i] = (char*)malloc(3*sizeof(char));
                }
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        m[i][j] = ' ';
                    }
                }
                int l, c, x=1, f=0;
                printf("\t\tJogo da velha\n\n");
                exibir_jogo(m);
                do{
                    if(f == 0){
                        if(jogadorX(&l, &c, m) == 1){
                            printf("O Jogador X venceu\n");
                            x = 0;
                            break;
                        }
                        f = 1;
                    }
                    if(verifica_velha(m) == 9){
                        printf("Jogo empatado (VELHA)\n");
                        x = 0;
                        break;
                    }
                    if(f == 1){
                        if(jogadorO(&l, &c, m) == 1){
                            printf("O Jogador O venceu\n");
                            x = 0;
                            break;
                        }
                        f = 0;
                    }
                    if(verifica_velha(m) == 9){
                        printf("Jogo empatado (VELHA)\n");
                        x = 0;
                        break;
                    }
                    
                }while(x != 0);
                for(int i=0;i<3;i++){
                    free(m[i]);
                }
                free(m);
            }
            break;
            case 2:{
                int t1, t2;
                int *v1 = vetor1(&t1);
                int *v2 = vetor2(&t2);
                int *v3 = vetor3(t1, t2, v1, v2);
                for(int i=0;i<(t1+t2); i++){
                    printf("%d ", v3[i]);
                }
                printf("\n");
                free(v1);
                free(v2);
                free(v3);
            }
            break;
            case 3:{
                int t;
                printf("Digite o tamanho do vetor: ");
                scanf("%d", &t);
                int *v = ex3(t);
                qsort(v, t, sizeof(int), comparar);
                printf("Vetor ordenado em ordem decrescente\n");
                for(int i=0;i<t;i++){
                    printf("%d ", v[i]);
                }
                printf("\n");
                free(v);
            }
            break;
            case 0:
            break;
            default: printf("Opcao invalida\n");
            break;
        }
        
    }while(op != 0);
    return 0;
}

int jogadorO(int* l, int* c, char **m){
    printf("Jogador O\n");
    char valor = 'O';
    int op;
    do{
        printf("Digite a linha a ser jogada(ex: 0, 1 ou 2): ");
        scanf("%d", l);
        if(*l != 0 && *l != 1 && *l != 2 ) {
            printf("Linha invalida\n");
            continue;
        }
        printf("Digite a coluna a ser jogada(ex: 0, 1 ou 2): ");
        scanf("%d", c);
        if(*c != 0 && *c != 1 && *c != 2 ) {
            printf("Coluna invalida\n");
            continue;
        }
        op = verifica_matriz(l, c, m, valor);
    }while(op != 1);
    exibir_jogo(m);
    return verifica_ganhador(m, valor);
}

int jogadorX(int* l, int* c, char **m){
    printf("Jogador X\n");
    char valor = 'X';
    int op;
    do{
        printf("Digite a linha a ser jogada(ex: 0, 1 ou 2): ");
        scanf("%d", l);
        if(*l != 0 && *l != 1 && *l != 2 ) {
            printf("Linha invalida\n");
            continue;
        }
        printf("Digite a coluna a ser jogada(ex: 0, 1 ou 2): ");
        scanf("%d", c);
        if(*c != 0 && *c != 1 && *c != 2 ) {
            printf("Coluna invalida\n");
            continue;
        }
        op = verifica_matriz(l, c, m, valor);
    }while(op != 1);
    exibir_jogo(m);
    return verifica_ganhador(m, valor);
}

int verifica_matriz(int* l, int* c, char** m, char valor){
    if(m[*l][*c] == 'O' || m[*l][*c] == 'X'){
        printf("Posicao ja esta ocupada\n");
        return 0;
    }
    m[*l][*c] = valor;
    return 1;
}

void exibir_jogo(char** m){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("| %c |", m[i][j]);
        }
        printf("\n------------------\n");
    }
}

int verifica_ganhador(char** m, char valor){
    if(m[0][0] == valor && m[0][1] == valor && m[0][2] == valor) return 1;
    if(m[1][0] == valor && m[1][1] == valor && m[1][2] == valor) return 1;
    if(m[2][0] == valor && m[2][1] == valor && m[2][2] == valor) return 1;
    if(m[0][0] == valor && m[1][0] == valor && m[2][0] == valor) return 1;
    if(m[0][1] == valor && m[1][1] == valor && m[2][1] == valor) return 1;
    if(m[0][2] == valor && m[1][2] == valor && m[2][2] == valor) return 1;
    if(m[0][0] == valor && m[1][1] == valor && m[2][2] == valor) return 1;
    if(m[0][2] == valor && m[1][1] == valor && m[2][0] == valor) return 1;
    
}

int verifica_velha(char** m){
    int cont=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(m[i][j] == 'X' || m[i][j] == 'O') cont++;
        }
    }
    return cont;
}

int* vetor1(int* t1){
    printf("Digite o tamanho do vetor 1: ");
    scanf("%d", t1);
    int *vetor1 = (int*)malloc((*t1)*sizeof(int));
    for(int i=0;i<(*t1);i++){
        printf("Digite o valor da posicao v1[%d]: ",i);
        scanf("%d", &vetor1[i]);
    }
    return vetor1;
}

int* vetor2(int* t2){
    printf("Digite o tamanho do vetor 2: ");
    scanf("%d", t2);
    int *vetor2 = (int*)malloc((*t2)*sizeof(int));
    for(int i=0;i<(*t2);i++){
        printf("Digite o valor da posicao v2[%d]: ",i);
        scanf("%d", &vetor2[i]);
    }
    return vetor2;
}

int* vetor3(int t1, int t2, int* vetor1, int* vetor2){
    int *vetor3 = (int*)malloc((t1+t2)*sizeof(int));
    for(int i=0; i<t1; i++){
        vetor3[i] = vetor1[i];
    }
    int j=0;
    for(int i=t1;i<(t1+t2);i++){
        vetor3[i] = vetor2[j];
        j++;
    }
    return vetor3;
}

int* ex3(int t){
    int *vetor = (int*)malloc(t*sizeof(int));
    for(int i=0;i<t;i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

int comparar(const void* a, const void* b){
    if(*(int*)a == *(int*)b) return 0;
    if(*(int*)a < *(int*)b) return 1;
    else return -1;
}