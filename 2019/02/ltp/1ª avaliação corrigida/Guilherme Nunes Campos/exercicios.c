#include <stdio.h>
#include <math.h>

//Exercicio 1

int MDC(int x,int y){
    if(x%y==0){
        return (y);
    }else{
        return MDC(y,x%y);
    }
}

//Exercicio 2        ***FALHA DE SEGMENTACAO***

int menor(int n,int vet[n]){
    int i=0,j=1,k;
    if(i<n-1&&j<n){
        return (vet[0]);
    }else{
        if(vet[i]>vet[j]){
            k=vet[i];
            vet[i]=vet[j];
            vet[j]=k;
        }
        i++;
        j++;
        return menor(n,vet);
    }
}

//Exercicio 3        ***FALHA DE SEGMENTACAO***

int acker(int n,int m){
    if(m==0){
        return (n+1);
    }else if(m>0&&n==0){
        return acker(m-1,1);
    }else{
        return acker(m-1,acker(m,n-1));
    }
}

//Exercicio 4

int inv(int n,int vet[n]){
    if(n<0){
        return 8;
    }else{
        printf("Elemento [%d] = %d\n",n,vet[n]);
        return inv(n-1,vet);
    }
}

void inter(int num){
    if(num==1){
        int res,x,y;
        printf("\nExercicio 1: MDC\n");
        printf("Digite os numeros que serao verificados: ");
        scanf("%d %d",&x,&y);
        res=MDC(x,y);
        printf("O MDC entre %d e %d eh %d.\n",x,y,res);
    }else if(num==2){
        int res,j,i,n,vet[n];
        printf("\nExercicio 2: Manipulacao de vetor\n");
        printf("Digite o tamanho do vetor a ser verificado: ");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("Digite o elemento [%d] do vetor: ",i);
            scanf("%d",&vet[i]);
        }
        n--;
        res=menor(n,vet);
        printf("O menor elemento do vetor eh %d.\n",res);
    }else if(num==3){
        int res,m,n;
        printf("\nExercicio 3: Funcao Ackermann\n");
        printf("Digite dois valores inteiros positivos: ");
        scanf("%d %d",&m,&n);
        res=acker(n,m);
        printf("O valor da serie de Ackermann eh %d.",res);
    }else if(num==4){
        int i,n,vet[n];
        printf("\nExercicio 4: Inversao de vetor\n");
        printf("Digite o tamanho do vetor: ");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("Digite o valor do elemento [%d]: ",i);
            scanf("%d",&vet[i]);
        }
        n=n-1;
        inv(n,vet);
    }
}

int main(){
    int num;
    do{
    printf("\n...AVALIACAO I...\n");
    printf("Exercicio disponiveis:\n");
    printf("[1]Maximo Divisor Comum\n");
    printf("[4]Vetor Inverso\n");
    printf("[0]Sair\n");
    printf("Digite o numero do exercicio que deseja iniciar: ");
    scanf("%d",&num);
    inter(num);
    }while(num!=0);
    return 0;
}