#include <stdio.h>
#include <stdlib.h>

int MDC(int a,int b);
int menor(int n, int v[]);
int maior(int n, int v[]);
int somaVetor(int n,int v[]);
int ackermann(int m, int n);
int lerVetor(int v[], int tamanho);
int imprimeVetor(int v[], int tamanho);
int imprimeVetorInverso(int v[], int tamanho);

int main(){

    int opcao;
    printf("(1) Calculo do MDC\n");
    printf("(2) Operacoes em vetores\n");
    printf("(3) Funcao de Ackermann\n");
    printf("(4) Imprime vetor na ordem inversa\n");
    printf("(0) Sair\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:{
        
        int a;
        int b;
        printf("Esse exercicio calcula o MDC entre 2 valores a e b\n");
        printf("Informe o valor de a\n");
        scanf("%d", &a);
        printf("Informe o valor de b\n");
        scanf("%d", &b);
        printf("A MDC entre %d e %d eh: %d\n",a,b,MDC(a,b));

        }break;
        case 2:{
        int escolha;
        printf("Escolha uma opcao\n\n");
        printf("(1) Menor elemento no vetor\n");
        printf("(2) Maior elemento no vetor\n");
        printf("(3) soma elementos do vetor\n");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:{

            int tam;
            /*int vetor[tam];*/
            int *vetor;
            printf("Informeo tamanho do vetor\n");
            scanf("%d", &tam);
            vetor=(int*)malloc(sizeof(int)*tam);
            lerVetor(vetor,tam);

            printf("O menor elemento eh: %d\n",menor(tam,vetor));

            
            }break;
            case 2:{

            int tam;
            /*int vetor[tam];*/
            int *vetor;
            printf("Informeo tamanho do vetor\n");
            scanf("%d", &tam);
            vetor=(int*)malloc(sizeof(int)*tam);
            lerVetor(vetor,tam);

            printf("O maior elemento eh: %d\n",maior(tam,vetor));
            }break;
            case 3:{

            int tam;
            /*int vetor[tam];*/
            int *vetor;
            printf("Informeo tamanho do vetor\n");
            scanf("%d", &tam);
            vetor=(int*)malloc(sizeof(int)*tam);
            lerVetor(vetor,tam);
            printf("A soma dos elementos do vetor eh: %d\n",somaVetor(tam,vetor));


            }
        
        }
        }break;
        case 3:{
        int m;
        int n;
        printf("Informe um valor para M\n");
        scanf("%d", &m);
        printf("Informe um valor para N\n");
        scanf("%d", &n);
        printf("Valor da serie: %d\n",ackermann(m,n));

        }break;
        case 4:{
            printf("Este programa imprime um vetor na ordem inversa\n");
            int tam;
            /*int vetor[tam];*/
            int *vetor;
            printf("Informeo tamanho do vetor\n");
            scanf("%d", &tam);
            vetor=(int*)malloc(sizeof(int)*tam);
            lerVetor(vetor,tam);
            imprimeVetorInverso(vetor,tam-1);


        }break;

    default:
    printf("Opcao invalida\n");
    }



    return 0;
}


int MDC(int a,int b){
    if(b==0)
    return a;

    return MDC(b,a%b);

}

int menor(int n, int v[]){

    int x=9999999;
    if(n==1) x=v[0];
    else{
        x=menor(n-1,v);
        if(x>v[n-1]) x=v[n-1];
    return x;
    }

}

int maior(int n, int v[]){

    int x;
    if(n==1) x=v[0];
    else{
        x=maior(n-1,v);
        if(x<v[n-1]) x=v[n-1];
    return x;
    }

}

int somaVetor(int n,int v[]){
int soma;
int i=n;
if(n==0) return soma;
else{
    soma=soma+somaVetor(n-1,v);
}


}

int lerVetor(int v[], int tamanho){
int i;
for(i=0;i<tamanho;i++){
    printf("Informe o valor da posicao [%d]\n",i);
    scanf("%d", &v[i]);
}

}

int imprimeVetor(int v[], int tamanho){
int i;
for(i=0;i<tamanho;i++){
    printf("%d\n",v[i]);
}

}

int imprimeVetorInverso(int v[], int tamanho){
int i;
for(i=tamanho;i>=0;i--){
    printf("%d\n",v[i]);
}

}

int ackermann(int m, int n){

    if(m==0){
         return n+1;
    }
    if((m>0)&&(n==0)){
    ackermann(m-1,1);
    }else if((m>0)&&(n>0)){
    ackermann(m-1,ackermann(m,n-1));
    }

}