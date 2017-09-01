#include "stdio.h"
#include "math.h"
//#include <stdio.h> 
float tribonacci(float);   
float eleva(float,float);
float media(int*,int,int);
int soma(int*,int,int);
void decrescente(int);
int somatorio_classico(int);
int somatorio_nao_classico(int,int);
int cubo_elementos(int,int);
int menu();
void crescente(int,int);
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
                int v;
                printf("Informe um valor para N \n");
                scanf("%d",&v);
                crescente(v,0);
            } break;
            case 4:{
                int v;
                printf("Informe um valor para N postivo \n");
                scanf("%d",&v);
                decrescente(v);
            }break;
            case 5:{
               int tamanho=0,i=0;
                printf("Informe o tamanho do vetor\n");
                scanf("%d",&tamanho);
                int vetor[tamanho];
                for( ; i<tamanho;i++){
                    printf("Informe um valor V[%d] ",i);
                    scanf("%d",&vetor[i]);
                }

                printf("A soma é %d \n\n\n",soma(vetor,tamanho,0));



            }break;
            case 6:{
                int tamanho=0,i=0;
                 printf("Informe o tamanho do vetor\n");
                 scanf("%d",&tamanho);
                 int vetor[tamanho];
                 for( ; i<tamanho;i++){
                     printf("Informe um valor V[%d] ",i);
                     scanf("%d",&vetor[i]);
                 }
 
                 printf("\n A media é %f \n\n\n",media(vetor,tamanho,0));
 
 
 
             }break;
             case 7 : { 
                 float k, n;
                 printf("Informe um valor  k \n");
                 scanf("%f",&k);
                 printf("Informe um valor para N  (k^n)\n");
                 scanf("%f",&n);
                 printf(" \n\n\n %f\n\n ",eleva(k,n));
             } break;
             case 8:{
                 float n;
                 printf("Informe um valor \n");
                 scanf("%f",&n);
                 printf("Elemento  é %f  \n",tribonacci(n));
             }break;
            default:
                printf("Opção Inválida");
        }
    }while(op!=0);
    


    return 0;
}

float tribonacci(float n){
    if( n == 0 )
       return 0.f;
    if(n == 1 )
       return 0.f;
    if(n == 2 )
     return 1.f;
    if(n > 2)
     return ((tribonacci(n-1) + tribonacci(n-2))+tribonacci(n-3));
}

float eleva(float k,float n){
   // 5³  = 5 * 5 * 5 ........ ???
   if(n==0)
    return 1;
   if(n == 1){
       return k;
   } else
    return k * eleva(k,n-1);

}

float media(int *vetor,int tamanho,int index){
    if(tamanho-1==index){
     return vetor[index]/(float)tamanho;
 
    }else{
       
        return (((vetor[index]/(float)tamanho) + media(vetor,tamanho,index+1)));
       
    }
}
int soma(int *vetor,int tamanho,int index){
    if(tamanho==index){
        return vetor[index];
    }else{
        return vetor[index] + soma(vetor,tamanho,index+1);
    }
}


int cubo_elementos(int valor, int elemento){
    if(elemento == valor) return pow(valor,3);
    else 
    return (elemento*elemento*elemento) +  cubo_elementos(valor,elemento + 1);// 1³ + 2³ + 3³ + 0  
}

int menu(){
    int o;
    printf("Digite 1 para executar o exercício número 1\n");
    printf("Digite 2 para executar o exercício número 2\n");
    printf("Digite 3 para executar o exercício número 3\n");
    printf("Digite 4 para executar o exercício número 4\n");
    printf("Digite 5 para executar o exercício número 5\n");
    printf("Digite 6 para executar o exercício número 6\n");
    printf("Digite 7 para executar o exercício número 7\n");
    printf("Digite 8 para excutar o exercício número 8\n");
    scanf("%d",&o);
    return o;
}

void decrescente(int valor){
    if(valor > -1){
        printf(" %d  ,",valor);
        decrescente(valor - 1); // pq return ? 
    }else{
        printf("\n\n\n");
        return ; //
    }
}
void crescente(int valor,int elemento){
    if(elemento > valor){ 
        printf("\n");    
        return ;
    }
    else {
        printf("%d , ",elemento);
        crescente(valor,elemento+1);
    }
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

