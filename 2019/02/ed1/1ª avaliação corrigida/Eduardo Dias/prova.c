#include"stdio.h"

int inversa(int *vet,int );
int acker(int , int);
int soma(int *vet, int);
int maior(int *vet, int);
int menor(int *vet, int);
int menor(int*,int);
int mdc(int, int );
int main(){
    int op;

    printf("|----------------------------------------|\n");
    printf("|--Digite 1 para a Primeira questao------|\n");
    printf("|--Digite 2 para a Segunda questao-------|\n");
    printf("|--Digite 3 para a Terceira questao------|\n");
    printf("|--Digite 4 para a Quarta questao--------|\n");
    printf("|----------------------------------------|\n");
    
    printf("Digite a sua opcao:");
    scanf("%d",&op);

    do{
    switch(op){

        case 0:{
            break;
        }

        case 1:{
            int x,y;

            printf("Digite o valor de X:");
            scanf("%d",&x);
            printf("Digite o valor de Y:");
            scanf("%d",&y);

            printf("O maximo divisor comum entre X e Y e: %d",mdc(y,x));
            return 0;
        }break;

        case 2:{
        int tam=5;
        int valor,vet[tam];
        

        printf("O maior valor e:%d\n",menor(vet,valor));
        printf("O menor valor e:%d\n",maior(vet,valor));
        printf("A soma dos valor e:%d\n",soma(vet,valor));

        }break;

        case 3:{
            int m,n;

            printf("Digite o valor de M:");
            scanf("%d",&m);
            printf("Digite o valor de N:");
            scanf("%d",&n);

            printf("O resultado e: %d\n",acker(m,n));

            return 0;

        }break;
        case 4:{
            int tamanho=5;
            int val,vet[tamanho];
            
            printf("Digite os valores do Vetor:");
            scanf("%d",&*vet);

            printf("A ordem inversa do vetor e:%d\n",inversa(vet ,tamanho));

        }break;
        default:
        break;
    }
    }while(op!=0);
}

int mdc(int x , int y){
    if((x>=y) && (x%y==0)){
        return y;
    }
    if(x<y){
        return mdc(x,y);
    }
    else{
        return mdc(x%y,y);
    }
}

int menor(int *vet,int tam){
    int mn=10000,i,valor;
    scanf("%d",&tam);
    for(i=0;i<tam;i++){
        printf("Digite os valores do Vetor:");
        scanf("%d",&*vet);

        if(i==tam){
            return vet[i];
        }
        else if(valor < mn){
            mn=valor;
            return menor(vet,tam-1);
        }
    }

}

int maior(int *vet,int tam){
    int mr=0,i,valor;
    
    for(i=0;i<tam;i++){
        if(i==tam){
            return vet[i];
        }
        else if(valor > mr){
            mr=valor;
            return maior(vet,tam-1);
        }
    }

}

int soma(int *vet,int tam){
    int i;
    
    for(i=0;i<tam;i++){
        if(i==tam){
            return vet[i];
        }
        else {
            return *vet + soma(vet,tam-1);
        }
    }

}

int acker(int m , int n){
    if(m==0){
        return n+1;
    }
    if(m>0 && n==0){
        return acker(m-1,1);
    }
    if(m>0 && n>0){
        return acker(m-1,acker(m,n-1));
    }

}

int inversa(int *vet , int tamanho){
    int val,i;

    for(i=0;i<tamanho;i++){
        if(i==tamanho){
            return vet[i];
        }
        else{
            return inversa(vet--,tamanho+1);
        }
    }

}