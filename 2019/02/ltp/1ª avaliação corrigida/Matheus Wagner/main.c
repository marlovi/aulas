#include <stdio.h>
#include <stdlib.h>
#define TAM 5


int mdc(int,int); //1)
int menorElemento(int*,int); //2)
int maiorElemento(int*,int); //2)
int somaVet(int*,int); //2)
int ackermann(int,int); //3)
void imprimeInverso(int*,int,int); //4)

int menu();
int subMenu();

int main(void){
    int op;
    do{
        op = menu();
        switch(op){
            case 0:
                break;
            case 1:{
                int x, y;
                printf("Informe os valores: ");
                scanf("%d %d", &x, &y);
                printf("O MDC é %d\n", mdc(x,y));
                break;
            }
            case 2:{
                int vet[TAM], op2;
                printf("Informe os elementos do vetor: ");
                for(int i=0; i<TAM; i++){
                    scanf("%d", &vet[i]);
                }
                do{
                    op2=subMenu();
                    switch(op2){
                        case 1:
                            printf("O menor elemento é %d\n", menorElemento(vet,TAM-1));
                            break;
                        case 2:
                            printf("O maior elemento é %d\n", maiorElemento(vet,TAM-1));
                            break;
                        case 3:
                            printf("A soma dos elementos do vetor é %d\n", somaVet(vet,TAM-1));
                            break;
                    }
                }while(op2!=0);
                break;
            }
            case 3:{
                int m,n;
                printf("Informe os valores de m e n: ");
                scanf("%d %d", &m, &n);
                printf("O valor da série de Ackermann é %d\n", ackermann(m,n));
                break;
            }
            case 4:{
                int vet[TAM];
                printf("Informe os elementos do vetor: ");
                for(int i=0; i<TAM; i++){
                    scanf("%d", &vet[i]);
                }
                printf("Impressão na ordem inversa: ");
                imprimeInverso(vet,0,TAM);
                printf("\n");
                break;
            }
        }
    }while(op!=0);
    return 0;
}

int menu(){
    int op;
    printf("-------------------\n");
    printf(" AVALIAÇÃO PRÁTICA \n");
    printf("-------------------\n");
    printf("[0] Sair\n");
    printf("[1] Primeira questão\n");
    printf("[2] Segunda questão\n");
    printf("[3] Terceira questão\n");
    printf("[4] Quarta questão\n");
    scanf("%d", &op);
    system("clear");
    return op;
}

int subMenu(){
    int op;
    printf("Informe a operação desejada\n");
    printf("[0] Voltar\n");
    printf("[1] Localizar Menor elemento\n");
    printf("[2] Localizar o Maior elemento\n");
    printf("[3] Soma de todos os elementos\n");
    scanf("%d", &op);
    system("clear");
    return op;
}

int mdc(int x, int y){
    if((x>=y)&&(x%y==0)) return y;
    if(x<y) return mdc(y,x);
    return mdc(y,x%y);
} 

int menorElemento(int *vet, int i){
    if(i==0) return vet[i];
    if(vet[i]<menorElemento(vet,i-1)){
        return vet[i];
    }else{
        return menorElemento(vet,i-1);
    }
}

int maiorElemento(int *vet, int i){
    if(i==0) return vet[i];
    if(vet[i]>maiorElemento(vet,i-1)){
        return vet[i];
    }else{
        return maiorElemento(vet,i-1);
    }
}

int somaVet(int *vet, int i){
    if(i<0) return 0;
    return vet[i]+somaVet(vet,i-1);
}

int ackermann(int m, int n){
    if(m==0) return n+1;
    if((m>0)&&(n==0)) return ackermann(m-1, 1);
    else return ackermann(m-1,ackermann(m,n-1));
}

void imprimeInverso(int *vet, int i, int tam){
    if(i>=tam) return;
    imprimeInverso(vet,i+1,tam);
    printf("%d ", vet[i]);
}