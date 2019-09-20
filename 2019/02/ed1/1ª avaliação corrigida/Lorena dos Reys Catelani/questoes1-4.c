#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float mdc(float, float);
int menor_valor(int*, int);
int maior_valor(int*, int);
int soma_vetor(int*, int);
int ler_vetor(int*, int);
int imprimir_vetor(int*, int);
int ordem_inversa(int*, int);
int ackermann(int, int);

int main(){
int x;
int* vet;
int tam;
float a;
float y;
int m;
int n;
int* b;
int* c;
int aux;

switch (x=1){
	case 1:{
			printf("Insira os valores de x e y para calcular o MDC\n");
			scanf("%f %f",&a,&y);
				printf("%f\n",mdc(a,y));
		}
		case 2:{
			printf("Insira o tamanho do vetor\n");
			scanf("%d",&tam);
			printf("Preencha o vetor para saber o menor numero\n");
			ler_vetor(vet,tam-1);
			printf("%d\n",menor_valor(vet,tam-1));
		}
		case 3:{
			printf("Insira o tamanho do vetor\n");
			scanf("%d",&tam);
			printf("Preencha o vetor para saber o maior numero\n");
			ler_vetor(vet,tam-1);
			printf("%d\n",maior_valor(vet,tam-1));
		}
		case 4:{
			printf("Insira o tamanho do vetor\n");
			scanf("%d",&tam);
			printf("Preencha o vetor para saber a soma dos numeros\n");
			ler_vetor(vet,tam-1);
			printf("%d\n",soma_vetor(vet,tam-1));
		}
		case 5:{
			printf("Insira o tamanho do vetor\n");
			scanf("%d",&tam);
			printf("Preencha o vetor para depois encontrar a ordem inversa\n");
			ler_vetor(vet,tam-1);
			printf("%d\n",ordem_inversa(vet, tam-1));
			
		}
		case 6:{
			printf("Entre com valores m e n para encontrar o valor da serie de Ackermann\n");
			scanf("%d %d",&m,&n);
			printf("%d\n",ackermann(m,n));
		}
	}

	return 0;
}

float mdc(float a, float y){
	if(a>=y&&fmod(y,a)==0) return y;
	if(a<y) return mdc(y,a);
	else {
		return mdc(y,fmod(a,y));
	}
}

int ler_vetor(int vet[], int tam){
	if(tam==0) return scanf("%d",&vet[0]);
	scanf("%d",&vet[tam]);
	return ler_vetor(vet,tam-1);
}

int imprimir_vetor(int vet[], int tam){
	if(tam==0) return printf("%d",vet[0]);
	printf("%d",vet[tam]);
	return ler_vetor(vet,tam-1);
}

int menor_valor(int vet[], int tam){
	if(tam==0) return vet[0];
		if(vet[tam] < maior_valor(vet,tam-1)) return vet[tam];
	return menor_valor(vet,tam-1);
}

int maior_valor(int vet[], int tam){
	if(tam==0) return vet[0];
		if(vet[tam] > maior_valor(vet,tam-1)) return vet[tam];
	return maior_valor(vet,tam-1);
}

int soma_vetor(int vet[], int tam){
	if(tam==0) return vet[0];
	return vet[tam]+soma_vetor(vet,tam-1);
}

int ordem_inversa(int vet[], int tam){
	if(tam==0) return printf("%d\n",vet[0]);
	return ordem_inversa(vet,tam-1);
	printf("%d\n",vet[tam]);
}

int ackermann(int m, int n){
	if(m==0) return n+1;
	if(m>0&&n==0) return ackermann(m-1,1);
	if(m>0&&n>0) return ackermann(m-1,ackermann(m,n-1));
}


