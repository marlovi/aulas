#include "stdio.h"
#include "stdlib.h"

int menu();
void ler_vetor(int*, int*);
void imprimir_vetor(int*, int*);
void inter_vet(int*, int*, int*, int*, int*, int*);
void ler_aluno(int**, int*, int*);
int Compara(const void*, const void*);
int menu_aluno();
void print_mat(int**, int*, int*);
int verifica_vet(int*, int*, int*, int*);

int main(){
    int op = 0;

    do{
        op = menu();
        switch(op){
            case 0:{
                printf("Obrigado por utilizar a aplicacao\n");
            }
            break;
            case 1:{
                int **mat;
                int tamL = 12;
                int tamC = 5;
                int x;
                int a;
                int p1, p2;
                mat = (int*) calloc (tamL, sizeof(int*));

                for(x=0; x<tamL; x++){
                    mat[x] = (int) calloc (tamC, sizeof(int));
                
                }

                printf("Digite qual acento deseja comprar\n");
                scanf("%d", &p1);
                scanf("%d", &p2);
                acento(mat, p1, p2);
                printf("Digite 0 para sair\n");
                scanf("%d", &a);
                if(a == 0) break;


            }
            break;
            case 2:{
                int *v1;
                int *v2;
                int *v3;
                int tam1=0;
                int tam2=0;
                int tam3=0;

                printf("Digite o tamanho do primeiro vetor\n");
                scanf("%d", &tam1);
                v1 = (int) calloc (tam1, sizeof(int));
                ler_vetor(v1, &tam1);
                imprimir_vetor(v1, &tam1);

                printf("Digite o tamanho do segundo vetor\n");
                scanf("%d", &tam2);
                v2 = (int) calloc (tam2,  sizeof(int));
                ler_vetor(v2, &tam2);
                imprimir_vetor(v2, &tam2);

                tam3 = verifica_vet(v1, v2, &tam1, &tam2);
                printf("%d\n", tam3);

                v3 = (int*) malloc (tam3 * sizeof(int));

                inter_vet(v1, &tam1, v2, &tam2, v3, &tam3);

                imprimir_vetor(v3, &tam3);


                free(v1);
                free(v2);
                free(v3);
            }
            break;
            case 3:{
                int **mat;
                int Linha = 4;
                int Coluna = 3;
                int a;
                int x;
                int y=0;

                mat = (int*) calloc (Linha, sizeof(int));

                for(x=0; x<Linha; x++){
                    mat[x] = (int) calloc (Coluna, sizeof(int));
                }

                ler_aluno(mat, &Linha, &Coluna);
                
                do{
                a = menu_aluno();

                
                }while(a != 0);

                y = Linha;
                for(; y>=0; y--){
                    free(mat[y]);
                }
            }
            break;
        }

    }while(op != 0);

    return 0;
}
int acento(int **Mat, int a, int b){
    if(Mat[a][b] == 0){
        printf("cadeira livre\n");
        Mat[a][b] = 2;
    }else if(Mat[a][b] == 2){
        printf("Cadeira ocupada\n");

    }
}
int verifica_vet(int *v1, int *v2, int *t1, int *t2){
    int x;
    int y;
    int cont=0;
    for(x=0; x<*t1; x++){
        for(y=0; y<*t2; y++){
            if(v1[x] == v2[y]){
                cont++;
                break;
            }
            
        }
    }
    return cont;
}

void inter_vet(int *v1, int *t1, int *v2, int *t2, int *v3, int *t3){
    int x;
    int y;
    int i;
    
    for(x=0; x<*t1; x++){
        for(y=0; y<*t2; y++){
            if(v1[x] == v2[y]){
                v3[i] = v2[y];
                i++;
                break;
            }
            
        }
    }
    
}
int Compara(const void *p1, const void *p2){
    if (*(int*)p1 == *(int*)p2) return 0;
    else if (*(int*)p1 < *(int*)p2) return -1;
    else return 1;
 
}
void ler_aluno(int **mat, int *l, int *c){
    int x;
    for(x=0; x<*l-1; x++){
    printf("Digite o numero de matricula\n");
    scanf("%d", &mat[x][0]);
    printf("Digite a media das provas\n");
    scanf("%d", &mat[x][1]);
    printf("Digite a media dos trabalhos\n");
    scanf("%d", &mat[x][2]);
    mat[x][3] = ((mat[x][1]+mat[x][2])/2);
    printf("%d\n", mat[x][3]);
    }
    
}

int menu_aluno(){
    int op;
    printf("Digite uma opcao\n");
    printf("1 Ver as maiores notas\n");
    printf("2 para ver todas as notas finais\n");
    printf("3 para ver as notas em ordem decrescente\n");
    printf("0 para sair\n");
    scanf("%d", &op);
    return op;
}





void imprimir_vetor(int *vetor, int *tam){
    int x;

    for(x=0; x<*tam; x++){
        printf("%d ", vetor[x]);
    }
    printf("\n");
}

void ler_vetor(int *vetor, int *tam){
    int x;
    int a;
    printf("Digite os valores\n");
    for(x=0; x<*(tam); x++){
        printf("Posicao [%d]\n", x);
        scanf("%d", &vetor[x]);

    }
}

int menu(){
    int op;
    printf("__MENU__\n");
    printf("Exercicio 1\n");
    printf("Exercicio 2\n");
    printf("Exercicio 3\n");
    printf("Digite 0 para sair\n");
    scanf("%d", &op);
    return op;
}