#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int op;
int um(int,int);
float quatro(int);
void cinco();
int main(){
    printf("Digite 1 para calcular o mdc.\n");
    printf("Digite 4 para o exercicio sobre vetor.\n");
    printf("Digite 5 para saber os valores de fun(4) e fun(5) .\n");
   switch(op){
   case 1:{
   int x, y,res;
   res=um(x,y);
   printf("O valor mdc será: %d\n", res);
   }
   break;
    case 2:{
   printf("Em branco\n");
   }
   break;
    case 3:{
   printf("Em branco\n");
   }
   break;
    case 4:{
   float res;
   float v,i;
   printf("Digite o valor do vetor\n.");
   res=quatro(i);
   printf("%f\n", res);
   }
   break;
    case 5:{
    cinco();
   }
   break;
  
}
return 0;
}
int um(int x,int y){
scanf("%d%d",&x,&y);
if(x%y==0){
    return 1;
}else{
    return 0;
}
}
float quatro(int i){
    float v[10];
    scanf("%f",&v);
    for(i=0;i<=v;i++){
        printf("%f\n",v[10]);
    }return ;
}
void cinco(){
    printf("fun(4) vale 9 pois a conta se baseia em (4-1)*(4-1),\n");
    printf("fun(5) vale 16 pois a conta se baseia em (5-1)*(5-1),\n");
    return cinco;
}
