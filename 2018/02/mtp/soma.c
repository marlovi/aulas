#include "stdio.h"
#include "stdlib.h"


void troca_elementos(int*, int, int);
void troca(int*,int*b);
void ler(int*,int);
int somatorio(int *,int,int);
int main(){
    int tamanho = 5; 
    int *v = malloc(tamanho * sizeof(int));

    int a = 10;
    int b = 5;

    v[0] = 1;
    v[1] = 2;
  v[2] = 3;
    v[3] = 4;
  v[4] = 5;
   
 int i = 0;
 int inicio  = 0;
 int fim = tamanho -1;
  /* for( ; i< tamanho; i++){//marlus.guitar@gmail.com 
        printf("Inicio = %d    fim = %d\n",inicio,fim);
       if(inicio == fim) break;
       else 
        troca(&v[inicio],&v[fim]);
        inicio++;
        fim--;
   }
*/

    troca_elementos(v,0,tamanho-1);
    
    for( i = 0; i< tamanho ; i++)
        printf("V[%i] = %d \n",i,v[i]);


    //printf("A = %d   B = %d",a,b);
    //ler(v,tamanho);

    //printf("somade de todos os elementos é %d    \n",somatorio(v,tamanho,0));

    free(v);


return 0;
}

void troca_elementos(int* v, int inicio, int fim){
    if(inicio == fim)
        return ;
    else{
        troca(&v[inicio],&v[fim]);//troca de elementos
        troca_elementos(v,inicio+1,fim-1);//chamada recursiva
    }
}

void troca(int *a, int *b){
    int aux = *a; 
    *a = *b;
    *b = aux;
}

int somatorio(int *v,int tamanho, int i){
   // v = {10,0,1,2}
   // v {2,1,0,10}
   // i = 0 
    if( i == tamanho - 1 ){
        return v[i];
    }else 
        return v[i] + somatorio(v,tamanho, i + 1 );
}

void ler(int *v,int tamanho){
    int i = 0;
    for( ; i<tamanho;i++){
        printf("Informe o V[%d] = \n",i);
        scanf("%d",&v[i]);
    }
}