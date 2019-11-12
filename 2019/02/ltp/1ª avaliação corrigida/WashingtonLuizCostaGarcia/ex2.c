/*2) Desenvolva uma opção no meu, para manipular vetores de forma recursiva:
a) a primeira função deve localizar o menor elemento presente em um vetor de
inteiros informado pelo usuário.
b) a segunda função deve localizar o maior elemento presente em um vetor de
inteiros informado pelo usuário.
c) a terceira função deve calcular a soma de todos os elementos do vetor de
inteiro informado pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>

int setTamanho();
int *AlocarArray(int tamanho);
void setArray(int *array, int tamanho);
void getArray(int *array, int tamanho);
void ordernarArray(int *array, int tamanho);
int menorElemento(int *array, int tamanho);
int maiorElemento(int *array, int tamanho);
int somaElementos(int *array, int tamanho);
char Opcoes();
void Questao2(char op, int *array, int tamanho);
int main()
{
    int tam = setTamanho();
    int *array = AlocarArray(tam);
    setArray(array, tam);
    getArray(array, tam);
    ordernarArray(array, tam);
    getArray(array, tam);
    char op = Opcoes();
    Questao2(op, array, tam);
    return 0;
}

int setTamanho()
{
    int tamanho;
    printf("Digite o tamanho do array:\n");
    scanf("%d", &tamanho);
    return tamanho;
}

int *AlocarArray(int tamanho)
{
    int *array = (int *)malloc(sizeof(int) * tamanho);
    return array;
}
void setArray(int *array, int tamanho)
{
    int number;
    for (int cont = 0; cont < tamanho; cont++)
    {
        printf("Digite o valor do %d° elemento do array:\n", cont);
        scanf("%d", &number);
        array[cont] = number;
    }
}

void getArray(int *array, int tamanho)
{
    for (int cont = 0; cont < tamanho; cont++)
    {
        printf("valor do %d° elemento do array: %d\n", cont, array[cont]);
    }
}

void ordernarArray(int *array, int tamanho)
{
    int aux;
    for (int cont1 = 0; cont1 < tamanho; cont1++)
    {
        for (int cont = 0; cont < tamanho; cont++)
        {
            if (array[cont] > array[cont + 1])
            {
                if (array[cont + 1] == 0)
                {
                    break;
                }
                aux = array[cont];
                array[cont] = array[cont + 1];
                array[cont + 1] = aux;
            }
        }
    }
}
int menorElemento(int *array, int tamanho)
{
    ordernarArray(array, tamanho);
    return array[0];
}
int maiorElemento(int *array, int tamanho)
{
    ordernarArray(array, tamanho);
    return array[0];
}

int somaElementos(int *array, int tamanho)
{
    int sum = 0;
    for (int cont = 0; cont < tamanho; cont++)
    {
        sum += array[cont];
    }
    return sum;
}
char Opcoes()
{
    char op;
    printf("Escolha as a letra da questão que deseja ter acesso:\n");
    scanf("%s", &op);
    return op;
}
void Questao2(char op, int *array, int tamanho)
{
    switch (op)
    {
    case 'a':
        printf("Menor elemento: %d\n", menorElemento(array, tamanho));
        break;
    case 'b':
        printf("Maior elemento: %d\n", maiorElemento(array, tamanho));
        break;
    case 'c':
        printf("A soma dos elemento: %d\n", somaElementos(array, tamanho));
        break;
    default:
        printf("Opção invalida!\n");
        break;
    }
}
