#include <stdio.h>
#define tam 5
int questao1(int x, int y);
int questao2a(int *v);
int questao3(int m, int n);
int questao4(int *v);
int main(){
    int x;
    printf("Insira o número da questão desejada\n");
    scanf("%d",&x);
    switch(x){
        case 1:{
            int x,y,mdc;
            printf("Insira os valores de 'x' e 'y' respectivamente para o cálculo do mdc\n");
            scanf("%d%d",&x,&y);
            mdc=questao1(x,y);
            printf("mdc entre %d e %d é %d\n",x,y,mdc);
            break;
        }
        case 2:{
            int i,soma;
            int v[tam];
            printf("Letra A\n");
            printf("Insira 5 valores inteiros para o vetor\n");
            for(i=0;i<tam;i++){
                printf("Posição %d\n",i);
                scanf("%d",&v[i]);
            }
            questao2a(v);
            break;
        }
            case 3:{
                int m,n,A;
                printf("Insira os valores de 'm' e 'n'\n");
                scanf("%d%d",&m,&n);
                A=questao3(m,n);
                printf("O valor da série de Ackermann é %d\n",A);
                break;
            }
           case 4:{
               int v[tam]={1,2,3,4,5};
           
        
            break;
           }
           default:{
               printf("Essa questão não existe\n");
        }
    }
    return 0;
}
int questao1(int x, int y){
    if(x>=y && (x%y)==0){
        return y;
    }
    else if(x<y){
        return questao1(y,x);
    }
    else{
        return questao1(y,x%y);
    }
}
int questao2a(int *v){
    int i;
    for(int i=0;i<tam;i++){
        printf("%d\n",v[i]);
    }
}
int questao2b(){

}

int questao3(int m, int n){
    if(m==0){
        return n+1;
    }
    else if(m>0 && n==0){
        return questao3(m-1,1);
    }
    else if(m>0 && n>0){
        return questao3(m-1,questao3(m,n-1));
    }
}
int questao4(int *v){
    if(*v==tam){
        return (tam-1);
    }
}