#include  "stdio.h"
#include "stdlib.h"

int mdc(int x, int y){
    if(x >= y  && x % y == 0){
        return y;
    }else if(x < y){
        return mdc(y,x);
    }else{ return mdc(y, x % y);}
}

int menor(int *vetor,int index,int tamanho,int menor1){
   menor1 = vetor[0]; 
   index  =   1;
  if(vetor[index] <= menor1){
      return menor(vetor, index+1, tamanho, menor1);
  }
}
int soma(int *vetor, int index,int tamanho){
    if(index > tamanho){
        return 1;
    }else{
        return vetor[index] + soma(vetor,index+1,tamanho);;
    }
}

long long int Acke(int m, int n){
    if(m == 0){
        return n + 1;
    }else if(m > 0 && n == 0){
        return Acke(m - 1,1);
    }else if(m > 0 && n > 0){return Acke(m - 1,Acke(m,n-1));}
}
 
int inversa(int index, int *vetor, int tamanho){
    index = tamanho;
    if(index <= 0){
        return 0;
    }else{return inversa(index-1, vetor, tamanho);}
}
int main(){
    
    int entrada,x,y;
    printf("Escolha um exericio de 1 a 4.\n");
    scanf("%d", &entrada);

    switch(entrada){
        case 1:{
            printf("Digite o valor de x e y para calcular o MDC.\n");
            scanf("%d %d", &x,&y);
            printf("O MDC de %d e %d = %d\n",x,y,mdc(x,y));
            break;
        }
        case 2:{
            int tamanho,index = 0, menor1;
            printf("Digite o tamanho do vetor.\nDigite os valores do vetor.\n");
            scanf("%d", &tamanho);
            int vetor[tamanho];
            for(index = 0; index < tamanho; index++){
                scanf("%d", &vetor[index]);
            }
            menor1 = menor(vetor, index, tamanho, menor1);
            printf("Menor: %d\n", menor1);
            printf("Soma: %d\n", soma(vetor,index,tamanho));
            break;
        }
        case 3:{
            long long int m, n;
            printf("Digite os valores de m e n.\n");
            scanf("%lld %lld", &m ,&n);
            printf("%lld\n", Acke(m,n));
            break;
        }
        case 4:{
            int tamanho, index;
            printf("Digite o tamanho do vetor.\nDigites os valores para obter a ordem inversa.\n");
            scanf("%d", &tamanho);
            int vetor[tamanho];
            for(index = 0; index < tamanho; index++){
                scanf("%d", &vetor[index]);
            }

            for(index = tamanho; index >= 0; index--){
                printf("%d\n",inversa(index, vetor, tamanho));
            }
        }
    }


    return 0;
}