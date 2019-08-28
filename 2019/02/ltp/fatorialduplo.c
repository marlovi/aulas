#include "stdio.h"
int duploF(int v);
int main(){
	int v;
	printf("Informe um valor para calcular o fatorial duplo \n");
	scanf("%d",&v);

	printf("Fatorial duplo de %d    é    %d  \n ",v,duploF(v));
}

int duploF(int v){
	printf("%d      ",v);
	if(v==0) return 1;
	else if( ((v) % 2 ) != 0){
		printf(" \n impar  %d ",v);
		return v * duploF(v-1);
	}else return v * 1;
}