#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------------------------------------

int ex1(int, int);

//-----
int ex2();
int ex2A(int *, long int, int *, int);
int ex2B(int *, long int, int *, int);
int ex2C(int *, int);
//-----

int ex3(int, int);

void ex4(int *, int);

//--------------------------------------------------------------------------------

int main(){

    int opcao;

    do{
        printf("----------Menu----------\n");
        
        printf("Digite o numero da questao(0 para sair):\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 0:{} break;
            
            case 1:{
                int mdc, x, y;

                printf("\n----------Exercicio 01----------\n");
                
                printf("Digite um valor para x:\n");
                scanf("%d", &x);

                printf("Digite um valor para y:\n");
                scanf("%d", &y);

                mdc = ex1(x, y);

                printf("\nO Maximo Divisor Comum de %d e %d eh:\n", x, y);
                printf("%d\n", mdc);

            } break;

            case 2:{

                ex2();

            } break;

            case 3:{
                int m, n, numeroDeAckermann;

                printf("----------Exercicio 03----------\n");
                
                printf("Digite um valor para o m:\n");
                scanf("%d", &m);

                printf("Digite um valor para o n:\n");
                scanf("%d", &n);

                numeroDeAckermann = ex3(m, n);

                printf("\nO numero de Ackermann para %d e %d eh:\n", m, n);
                printf("%d\n", numeroDeAckermann);

            } break;

            case 4:{
                int *vetor, tamanho, i;
                
                printf("----------Exercicio 04----------\n");
                
                printf("Digite o tamanho do vetor:\n");
                scanf("%d", &tamanho);
                
                vetor = (int*) calloc(tamanho, sizeof(int));

                printf("Digite os elementos do vetor:\n");
                for(i = 0; i < tamanho; i++) scanf("%d", &vetor[i]);

                printf("\nO vetor impresso na ordem lida eh:\n");
                for(i = 0; i < tamanho; i++) 
                    (i != tamanho-1) ? printf("%d ", vetor[i]) : printf("%d\n", vetor[i]);
                
                printf("O vetor impresso na ordem inversa a lida eh:\n");
                ex4(vetor, tamanho-1);
                
            } break;

            default:{
                printf("Opcao Invalida\n");
            } break;
        }

        printf("\n");
    } while(opcao != 0);

    return 0;
}

//--------------------------------------------------------------------------------

int ex1(int x, int y){

    if((x >= y) && (x % y == 0)) return y;

    else if(x < y) return ex1(y, x);

    else return ex1(y, x % y);

}

//-----
int ex2(){
    char letra;
    
    do{
        printf("\n----------Exercicio 02----------\n");
        printf("Digite a letra da questao(S/s para Sair):\n");
        scanf("\n%c", &letra);
        
        switch(letra){
            case 'S':
            case 's':{} break;

            case 'A':
            case 'a':{
                int *vetor, menor, tamanho, i, posicao = 0;
                
                printf("----------Letra A----------\n");
                
                printf("Digite o tamanho do vetor:\n");
                scanf("%d", &tamanho);
                
                vetor = (int*) calloc(tamanho, sizeof(int));

                printf("Digite os elementos do vetor:\n");
                for(i = 0; i < tamanho; i++) scanf("%d", &vetor[i]);

                menor = ex2A(vetor, 3000000000, &posicao, tamanho-1);

                printf("\nO menor elemento do vetor eh:\n");
                printf("Vetor[%d] = %d\n", posicao+1, menor);

            } break;

            case 'B':
            case 'b':{
                int *vetor, maior, tamanho, i, posicao = 0;
                
                printf("----------Letra B----------\n");
                
                printf("Digite o tamanho do vetor:\n");
                scanf("%d", &tamanho);
                
                vetor = (int*) calloc(tamanho, sizeof(int));

                printf("Digite os elementos do vetor:\n");
                for(i = 0; i < tamanho; i++) scanf("%d", &vetor[i]);

                maior = ex2B(vetor, -3000000000, &posicao, tamanho-1);

                printf("\nO maior elemento do vetor eh:\n");
                printf("Vetor[%d] = %d\n", posicao+1, maior);

            } break;

            case 'C':
            case 'c':{
                int *vetor, soma, tamanho, i;
                
                printf("----------Letra C----------\n");
                
                printf("Digite o tamanho do vetor:\n");
                scanf("%d", &tamanho);
                
                vetor = (int*) calloc(tamanho, sizeof(int));

                printf("Digite os elementos do vetor:\n");
                for(i = 0; i < tamanho; i++) scanf("%d", &vetor[i]);

                soma = ex2C(vetor, tamanho-1);

                printf("\nA soma dos elementos do vetor eh:\n");
                printf("%d\n", soma);

            } break;

            default:{
                printf("Letra Inválida\n");
            } break;

        }

        printf("\n");
    } while(letra != 'S' && letra != 's');

}

int ex2A(int *vetor, long int menor, int *posicao, int index){
    if(vetor[index] < menor){
        menor = vetor[index];
        *posicao = index;
    } 
    
    if(index == 0) return menor;

    else return ex2A(vetor, menor, posicao, index-1);
}

int ex2B(int *vetor, long int maior, int *posicao, int index){
    if(vetor[index] > maior){
        maior = vetor[index];
        *posicao = index;
    } 
    
    if(index == 0) return maior;

    else return ex2B(vetor, maior, posicao, index-1);
}

int ex2C(int *vetor, int index){
    if(index == 0) return vetor[index];

    else return vetor[index] + ex2C(vetor, index-1);
}
//-----

int ex3(int m, int n){

    if(m == 0) return n+1;

    else if(m > 0 && n == 0) return ex3(m-1, 1);

    else return ex3(m-1, ex3(m, n-1));

}

void ex4(int *vetor, int tamanho){

    if(tamanho == 0){
        printf("%d\n", vetor[tamanho]);   
    }

    else{
        printf("%d ", vetor[tamanho]);
        return ex4(vetor, tamanho-1);
    }
}

//--------------------------------------------------------------------------------