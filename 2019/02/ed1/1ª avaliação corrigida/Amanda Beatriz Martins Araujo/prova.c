#include <stdio.h>
#include <stdlib.h>

int menu();
int mdc(int, int);
int serie(int , int );
int func( int );
int soma(int* , int );
int ler(int *, int );

int main(){
	int op;
	do{
		op=menu();
		switch(op){
			case 1:{
				int x; 
				int y;
				printf("Insira o valor de x\n");
				scanf("%d",&x);
				printf("Insira o valor de y\n");
				scanf("%d",&y);
				printf("Mdc é igual a : %d\n",mdc(x,y));
				}break;

			case 2:{
				int i;
				int tam;
				scanf("%d",&tam);
				int vet;
				ler(vet,i);
				printf("%d",soma(vet[i], tam -1));
				}break;

			case 3:{
				int m;
				int n;
				printf("Insira o valor de m\n");
				scanf("%d",&m);
				printf("Insira o valor de n\n");
				scanf("%d",&n);
				printf("%d\n",serie(m,n));
			    }break;

			case 5:{
				int n;
				scanf("%d",&n);
				printf("func(%d) = %d \n",n,func(n));
				}break;

			default:{
				printf("->Opção invalida");

				}break;
		}
			


	}while(op!=0);


}

int menu(){
	int op;
	printf("-> Digite (0) para sair do menu\n");
	printf("-> igite (1) para acessar a primeira questão\n");
	printf("-> Digite (2) para acessar a questão 2-c\n");
	printf("-> Digite (3) para acessar a questão 3\n");
	printf("-> Digite (5) para acessar a questão 5\n");

	scanf("%d",&op);
	return op;
}

int mdc(int x, int y){
	if((x>=y)&&(x%y==0)){
	 return y;}
	else if (x<y) {
		return mdc(y,x);}
	else if(y<x){
		return mdc(y,(x%y));
	}
	
}
int serie(int m, int n){
	if(m=0) return n+1;
	else if((m>0)&&(n=0)) return serie(m-1,1);
	else if((m>0)&&(n>0)) return serie(m-1,serie(m,n-1));

}

int func( int n){
	if(n==1) return 1;
	else return (n-1) * func(n-1);

}
int ler(int *vet, int tam){
	int i;
	for(i=0;i<tam;i++){
		scanf("%d",&vet[i]);
	}
}



int soma(int* vet, int i){

	if(i==0){ 
		return vet[0];}


	else {
		return  vet[i] + soma(vet[i]-1);}
}




