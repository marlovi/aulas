#include <stdio.h>
#include <stdlib.h>

int menu(int);
void leituravetor(int*, int);
int menorelemento(int*, int);
int maiorelemento(int*, int);
int somaelementos(int*, int);
int func(int);


int main(){
    int op;
    int men;
    do{
        op=menu(men);
    switch(op){
        case 2:{
            printf("Informe o tamanho desejado para o vetor\n");
            int n;
            int *v[n];
            leituravetor(*v, n);
            menorelemento(*v, n);
            maiorelemento(*v, n);
            somaelementos(*v, n);

        } break;
        case 5:{
            int n;
            scanf("%d", &n);
            func(n);
        } break;
    }
    }while(op!=0);
    return 0;
}

int menu(int men){
    printf("Informe o número da questao desejada ou digite 0 para sair do menu\n");
    scanf("%d", &men);
    return men;
}

void leituravetor(int *v,int n){
    int i;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
}

int menorelemento(int *v, int n){
    int i;
    int aux;
    aux=v[0];
    for(i=1;i<n;i++){
        if(aux>v[i]){
            aux=v[i];
        }
    }
    printf("Menor elemento do vetor:\n");
    return aux;
}

int maiorelemento(int *v, int n){
    int i;
    int aux;
    aux=v[0];
    for(i=1;i<n;i++){
        if(aux<v[i]){
            aux=v[i];
        }
    }
    printf("Maior elemento do vetor:\n");
    return aux;
}

int somaelementos(int *v, int n){
    int i;
    int soma=0;
    for(i=0;i<n;i++){
        soma=v[i]+soma;
    }
    printf("Soma dos elementos do vetor:\n");
    return soma;
}

int func(n){
    return (4-1) * func(4-1);
}