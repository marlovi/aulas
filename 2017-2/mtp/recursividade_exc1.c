#include "stdio.h"
#include "math.h"
//#include <stdio.h>


int somatorio_classico(int);
int somatorio_nao_classico(int,int);
int cubo_elementos(int,int);
int menu();
int main(){
    int op=-1;
    
    do{
        op = menu();
        switch(op){
            case 1: {
                int x;
                printf("Informe um valor positivo N para somar os elementos de 1 até N ");
                scanf("%d",&x);
                //int total = somatorio_classico(x) ; printf(total)
                printf("Somatório é  %d    \n",somatorio_classico(x));
                printf("Somatorio não classico %d    \n",somatorio_nao_classico(x,0));
                
            }

            break;
            case 2:{
                //1³ + 2³  + 3³ ..... + N³
                int v;
                printf("Informe um valor para N \n");
                scanf("%d",&v);
                int resposta = cubo_elementos(v,1);
                printf("Resultado %d  \n",resposta);
            } break;
            case 3:{

            } break;
        }
    }while(op!=0);
    


    return 0;
}

int cubo_elementos(int valor, int elemento){
    if(elemento == valor) return pow(valor,3);
    else 
    return (elemento*elemento*elemento) +  cubo_elementos(valor,elemento + 1);// 1³ + 2³ + 3³ + 0  
}

int menu(){
    int o;
    printf("Digite 1 para executar o exercício número 2\n");
    printf("Digite 2 para executar o exercício número 2\n");
    scanf("%d",&o);
    return o;
}
int somatorio_classico(int n){
    if( n == 0 )
        return 0;
    else 
        return n + somatorio_classico(n -1);
}

int somatorio_nao_classico(int valor, int elemento){
    if(valor == elemento)
        return valor;
    else 
        return elemento + somatorio_nao_classico(valor,elemento+1);
}

