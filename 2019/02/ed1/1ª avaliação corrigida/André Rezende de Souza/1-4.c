#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mdc(x, y) {
	if(x>=y && (modf(x,y)==0)) {
		return y;
	}
	else if(x<y) {
		return mdc(y, x);
	} else {
		return mdc(y, modf(x,y));
	}
}

int menor_elemento() {
	int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int menor=100000; // teoricamente substituível pelo maior valor suportado por int
	for(int h=10; h--; h==0) {
		if (A[h] < menor)
			menor = A[h];
	}
	return menor;
}

int maior_elemento() {
	int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int maior=0;

	for(int h=0; h++; h==10) {
		if (A[h] > maior)
			maior = A[h];
	}
	return maior;
}

int soma_elementos() {
	int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int soma=0;
	int tamanho = sizeof(A);

	for(int h=0; h++; h<tamanho) {
		soma = A[h] + soma;
	}
	return soma;
}

int ack(m, n) {
	if(m==0) {
		return n+1;
	} else if(m>0 && n==0) {
		return ack(m-1, 1);
	} else if (m>0 && n>0) {
		return ack(m-1, ack(m, n-1));
	}
}

int ordem_reversa() {
	int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int h=10; h--; h==0) {
		printf("%d", h);
		printf("%d, ", A[h]);
	}
}

int main() {
	int i=0, m, n;

	while(i==0) {
		printf("[1] Maximo Divisor Comum\n");
		printf("[2] Menor elemento de um vetor\n");
		printf("[3] Maior elemento de um vetor\n");
		printf("[4] Somar elementos de um vetor\n");
		printf("[5] Imprimir elementos de um vetor em ordem inversa\n");
		printf("[6] Função de Ackermann\n");
		scanf("%d", &i);

		if(i==1) {
			printf("MDC = %d\n", mdc(10, 20));
		} else if(i==2) {
			printf("Menor elemento: %d\n", menor_elemento());
		} else if(i==3) {
			printf("Maior elemento: %d\n", maior_elemento());
		} else if(i==4) {
			printf("Soma dos elementos: %d\n", soma_elementos());
		} else if(i==5) {
			ordem_reversa();
		} else if(i==6) {
			printf("Digite os valores m e n para a função de Ackermann: ");
			scanf("%d", &m);
			scanf("%d", &n);
			printf("Valor de Ackermann: %d\n", ack(m, n));
		}
	}
}
