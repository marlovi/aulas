#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mdc(int, int);
int quest4(int *,int);
int vetorsoma(int *, int);
int ack(int,int);

int main (void){
    int op;
    do{
    
        printf("Digite o numero da questão");
        scanf("%d",&op);
        
        switch(op){
            case 1:{
                int x,y;
                printf("Informe os valores de X e Y\n");
                scanf("%d",&x);
                scanf("%d",&y);
                printf("%d",mdc(x,y));
            }break;
           
            case 2:{
                int *vs,tam;
                printf("Digite o tamanho do vetor\n");
                scanf("%d",&tam);
                printf("Informe os valores do vetor\n");
                for(int i=0;i<tam;i++){
                    scanf("%d",&vs[i]);
                }
                printf("O valor da soma dos vetores eh\n");
                
                printf("%d",vetorsoma(vs,tam));
            }break;
            case 4:{
                int *v,tam;
                printf("Digite o tamanho do vetor\n");
                scanf("%d",&tam);
                printf("Informe os valores do vetor\n");
                for(int i=0;i<tam;i++){
                    scanf("%d",&v[i]);
                }
                printf("Os valores na ordem inversa dos vetores sao\n");
                
                quest4(v,tam);
            }break;
            case 3:{
                int m,n;
                printf("Informe os valores de Ackermann\n");
                scanf("%d%d",&m,&n);
                printf("Os resultado eh: %d",ack(m,n));
            }break;

        }

    }while(op!=0);


    return 0;
}



int mdc(int x, int y)
{
    if(x>=y && x*y == 0){
        return y;
    }
    else if(x<y){
        return mdc(y,x);
    }else{
        return mdc(y,x*y);
    }
}
int quest4(int *v,int tam){
    if(tam<0){
        return 0;
    }else{
        printf("%d\n",v[tam]);
        return quest4(v,tam-1);
        
    }
}
int vetorsoma(int *vs,int tam){
    if(tam<=0){
        return vs[0];
    }else{
        return vs[tam] + vetorsoma(vs,tam-1);
        
    }
}
int ack(int m,int n){
    if(m==0){
        return n+1;
    }else if(m>0 && n==0){
        return ack(m-1,1);
    }else if(m>0 && n>0){
        return ack(m-1,ack(m,n-1));
    }
}