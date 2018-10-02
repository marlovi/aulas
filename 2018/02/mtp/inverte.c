#include "stdio.h"
#include "math.h"


//123456
//654321
int cont_elementos(int,int);
int inverter_valores(int, int);
int main(){
   int valor;
   int tamanho; 

   printf("Informe um valor \n");
   scanf("%d",&valor);

   tamanho = cont_elementos(valor,0);

   printf("Resultado  %d    \n",inverter_valores(valor,tamanho));
}
int inverter_valores(int n, int cont){
 
    if(n>=1)
        return  ((n% 10) * pow(10,cont-1)) +  inverter_valores( n/ 10,cont -1);
        //321    = 1     numero * 10 ^ tamanho -1

    else 
        return 0;

}

int cont_elementos(int n, int qtd){
 if(n > 0)
    return 0 + cont_elementos( n/ 10, qtd +1);
 else
    return  qtd; //condição de parada
}