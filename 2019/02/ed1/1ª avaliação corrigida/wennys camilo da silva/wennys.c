#include <stdio.h>
#include <stdlib.h>
int menu();
int mdc(int v1,int v2);
void ler_vetor(int *vetor,int tamanho);
void imprimir_vetor(int *vetor,int tamanho);
int menor_elemento(int *vet,int tamanho);
int maior_elemento(int *vet,int tamanho);
int soma_vetor(int *vetor,int tam);
int ackerman(int m,int n);
int quest5(int n);
int main(){
int op = 0;
do{
    op = menu();
    switch(op){
    
    case 0:
    printf("Obrigado \n");
    break;


    case 1:{
    int x;
    int y;
    printf("Informe o Valor de X \n");
    scanf("%d",&x);
    printf("Informe o valor de Y \n");
    scanf("%d",&y);
    printf("O mdc entre os valores é %d \n",mdc(x,y));


    }break;


    case 2:{
    int *vetor;
    int tam;
    printf("Informe o tamanho do vetor \n");
    scanf("%d",&tam);
    vetor = (int*)malloc(tam*sizeof(int));
    ler_vetor(vetor,tam);
    printf("O menor elemento do vetor é %d \n",menor_elemento(vetor,tam));
    }break;

    case 3:{
    int *vetor;
    int tam;
    printf("Informe o tamanho do vetor \n");
    scanf("%d",&tam);
    vetor = (int*)malloc(tam*sizeof(int));
    ler_vetor(vetor,tam);
    printf("O maior elemento do vetor é %d \n",maior_elemento(vetor,tam));

    }break;

    case 4:{
    int *vetor;
    int tamanho;
    printf("Informe o tamanho do Vetor \n");
    scanf("%d",&tamanho);
    vetor = (int*)malloc(tamanho*sizeof(int));
    ler_vetor(vetor,tamanho);
    imprimir_vetor(vetor,tamanho);
    printf("A soma dos valores adicionados no vetor será de %d \n",soma_vetor(vetor,tamanho-1));


    }break;

    case 5:{
    int m;
    int n;
    printf("Informe o Valor de M \n");
    scanf("%d",&m);
    printf("Informe o valor de N \n");
    scanf("%d",&n);
    printf("O resultado é %d\n",ackerman(m,n));

    }break;

    case 6:{
    int n;
    printf("Os valores F(4) é %d \n",quest5(4));
    printf("Os valores F(5) é %d \n",quest5(5));


    }break;

    default : printf("Opcao Invalida \n");
    }

}while(op!=0);


}
int menu(){
int op;
printf("[0]-PARA SAIR\n");
printf("1 - QUESTAO 1 MDC\n");
printf("2 - QUESTAO 2(a) - Menor elemento\n");
printf("3 - Questao 2(b) - Maior elemento\n");
printf("4 - Questao 2(c) - Soma vetor\n");
printf("5 - QUESTAO 3 - Serie de Ackerman\n");
printf("6 - Questao 5 - f(4) e f(5)\n");
printf("Informe a opcão desejada: ");
scanf("%d",&op);
return op;
}

int mdc(int v1,int v2){
    if(v2==0){
    return v1;
    }else{
    return mdc(v2,v1%v2);
    }
}

int menor_elemento(int *vet,int tamanho){
    if(tamanho == 0){
    return 0;
    }else if(tamanho == 1){
    return vet[0];
    }
    if(vet[tamanho - 1] < menor_elemento(vet,tamanho - 1)){
    return vet[tamanho - 1];
    }
}
int maior_elemento(int *vet,int tamanho){
    if(tamanho == 0){
    return 0;
    }else if(tamanho == 1){
    return vet[0];
    }
    if(vet[tamanho - 1] > maior_elemento(vet,tamanho - 1)){
    return vet[tamanho - 1];
    }
}

void ler_vetor(int *vetor,int tamanho){
    int i=0;
    for(;i<tamanho;i++){
        printf("Infome v[%d]\n",i+1);
        scanf("%d",&vetor[i]);
    }
}

void imprimir_vetor(int *vetor,int tamanho){
    int i=0;
    for(;i<tamanho;i++){
        printf("V[%d] = %d\n",i+1,vetor[i]);
    }
}
int soma_vetor(int *vetor, int tamanho){
    if(tamanho==0)
    return vetor[tamanho];
    else 
    return vetor[tamanho]+soma_vetor(vetor,tamanho-1);
}

int ackerman(int m,int n){
    if(m==0){
    return n+1;
    }
    if(m>0 && n==0){
    return ackerman(m-1,1);
    }
    if(m>0 && n>0){
    return ackerman(m-1,ackerman(m,n-1));
    }
}

int quest5(int n){
    if(n==1)
    return 1;
    else
    return
    (n-1)*quest5(n-1);
}
