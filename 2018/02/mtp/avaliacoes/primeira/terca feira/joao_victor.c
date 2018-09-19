#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int interface();
int processa_menu(int);
void imprime(int * , int );

void proc_questao1();

void proc_questao2();
int func_leitura(int *, int);
void junta_vetor(int * , int , int * , int , int * );

void proc_questao3();
void ordena(int * , int );



int main(){
	int opcao = 1;
	system("clear||cls");
	do{
		opcao = interface();
		processa_menu(opcao);
	}while(opcao != 0);
	return 0;
}

int interface(){
	int opcao;
	printf("____________________MENU____________________\n");
	printf("Opção 1:......................Jogo da Velha.\n");
	printf("Opção 2:..................Vetores dinamicos.\n");
	printf("Opção 3:.........Vetor dinamico decrescente.\n");
	printf("Opção 0:......................Sair.\n");
	printf("Escolha uma opção: ");
	scanf("\n%d", &opcao);
	return opcao;
}

int processa_menu(int opcao){
	switch(opcao){
		case 0:{
			system("clear||cls");
			printf("Bye. Obrigado por vir! <3\n");
			return 0;
		}
		case 1:{
			proc_questao1();
			break;
		}
		case 2:{
			proc_questao2();
			break;
		}
		case 3:{
			proc_questao3();
			break;
		}
		default:{
			printf("Opção não selecionada.\n");
			break;
		}
	}
}

void proc_questao1(){
	system("clear||cls");
	printf("Opção 1: Jogo da velha. Jogo onde se jogam dois jogadores.\n");
	printf("O jogador 1 é a letra 'X' e o jogador 2 é a letra 'O'. O jogo inicia sempre na vez do jogador 1.\n");
	printf("O jogador indicará as posições de x e y, dois valores inteiros, para poder marcar a posição da peça, um lugar já marcado não pode ser marcado novamente.\n");
	char matriz[3][3];
	char botao;
	int i;
	int x,y = 0;
	int jogador = 1;
	memset(matriz,0,sizeof(matriz));
	printf("Insira uma letra e pressione enter para começar.");
	scanf("\n%c", &botao);
	system("clear||cls");
	for(i = 0; i < 3; i++ ){
		for(int j = 0; j < 3; j++){
			matriz[i][j] = ' ';
			printf("%c",matriz[i][j]);
		}
		printf(".\n");
	}
	for(i = 0; i < 9; i++){
		system("clear||cls");
		printf("___Y1__Y2__Y3_\n");
		printf("X1| %c | %c | %c |\n", matriz[0][0], matriz[0][1], matriz[0][2]);
		printf("-------------\n");
		printf("X2| %c | %c | %c |\n", matriz[1][0], matriz[1][1], matriz[1][2]);
		printf("-------------\n");
		printf("X3| %c | %c | %c |\n", matriz[2][0], matriz[2][1], matriz[2][2]);
		printf("-------------\n");

		if((matriz[0][0] == 'O' && matriz[0][1] == 'O' && matriz[0][2] == 'O' || matriz[1][0] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O' || matriz[2][0] == 'O' && matriz[2][1] == 'O'&& matriz[2][2] == 'O' || matriz[0][0] == 'O' && matriz[1][1] == 'O' && matriz[2][2] == 'O' || matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O') || (matriz[0][0] == 'O' && matriz[1][0] == 'O' && matriz[2][0] == 'O' || matriz[0][1] == 'O' && matriz[1][1] == 'O' && matriz[2][1] == 'O' || matriz[0][2] == 'O' && matriz[1][2] == 'O'&& matriz[2][2] == 'O')){
			printf("Jogador 2 venceu.\n");
			break;
		}
		if((matriz[0][0] == 'X' && matriz[0][1] == 'X' && matriz[0][2] == 'X' || matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X' || matriz[2][0] == 'X' && matriz[2][1] == 'X'&& matriz[2][2] == 'X' || matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X' || matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X') || (matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X' || matriz[0][1] == 'X' && matriz[1][1] == 'X' && matriz[2][1] == 'X' || matriz[0][2] == 'X' && matriz[1][2] == 'X'&& matriz[2][2] == 'X')){
			printf("Jogador 1 venceu.\n");
			break;
		}
		leitura: printf("Insira as posições (x,y): ");
		scanf("\n%d%d", &x,&y);
		if(jogador == 1){
			if(matriz[x-1][y-1] ==' '){
				matriz[x-1][y-1] = 'X';
				jogador = 2;
			}else{	
				goto leitura;
			}
		}else{
			if(matriz[x-1][y-1] == ' ' ){
				matriz[x-1][y-1] = 'O';
				jogador = 1;
			}else{
				goto leitura;
			}
		}
	}
}


void proc_questao2(){
	system("clear||cls");
	printf("Questão 2: Vetores dinamicos.");
	printf("A entrada sera o tamanho do primeiro vetor, depois seu preechimento. Logo em seguida o tamanho do segundo vetor e seu preenchimento.\n");
	printf("A saída será um terceiro vetor resultante com os valores do primeiro e segundo vetor.\n");
	int tam_vet1;
	int tam_vet2;
	printf("Insira o tamanho do vetor 1: ");
	scanf("\n%d", &tam_vet1);
	int * vetor1;
	vetor1 = (int *) calloc(tam_vet1, sizeof(int));
	
	func_leitura(vetor1,tam_vet1);

	printf("Insira o tamanho do vetor 2: ");
	scanf("\n%d", &tam_vet2);
	int * vetor2;
	vetor2 = (int *) calloc(tam_vet2, sizeof(int));
	
	func_leitura(vetor2,tam_vet2);
	int tam_vet3 = tam_vet2+tam_vet1;
	int * vetor3;
	vetor3 = (int *) calloc (tam_vet3, sizeof(int));

	junta_vetor(vetor1,tam_vet1,vetor2,tam_vet2,vetor3);

	imprime(vetor3, tam_vet3);
	printf("\n");
	free(vetor1);
	free(vetor2);
	free(vetor3);

}

int func_leitura(int * vetor, int tamanho){
	for(int i = 0; i < tamanho; i ++){
		printf("Insira um valor para o índice %d do vetor: ", i+1);
		scanf("\n%d", &vetor[i]);
	}
}

void junta_vetor(int * vetor1, int tam_vet1, int * vetor2, int tam_vet2, int * vetor3){
	for(int i = 0; i < tam_vet1; i++){
		vetor3[i] = vetor1[i];
	}
	int tam_vet3 = tam_vet1+tam_vet2;
	for(int j=0, i = tam_vet1; i < tam_vet3;j++, i++){
		vetor3[i] = vetor2[j];
	}
}

void proc_questao3(){
	system("clear||cls");
	printf("Opção 3: Vetor de tamanho N colocado em ordem decrescente.\n");
	printf("Entrada: Consiste em o tamanho do vetor, com um número inteiro: e depois os valores para preenchimento do vetor\n");
	printf("Saída: Será o vetor em ordem crescente.\n");
	int tamanho;
	printf("Informe o tamanho desejado para o vetor: ");
	scanf("\n%d", &tamanho);
	printf("Preenchimento do vetor.\n");
	int * vetor = (int *) calloc (tamanho, sizeof(int));
	func_leitura(vetor, tamanho);
	ordena(vetor, tamanho);
	imprime(vetor, tamanho);
	free(vetor);
}


void ordena(int * vetor, int tamanho){
	int aux;
	for (int i = 0; i < tamanho; ++i){
		for (int j = i; j < tamanho; ++j){
			if(vetor[i] < vetor[j]){
				aux = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = aux;
			}
		}
	}
}

void imprime(int * vetor, int tamanho){
	for (int i = 0; i < tamanho; ++i){
		printf("Vetor[%d] = %d\n", i+1, vetor[i]);
	}
}
