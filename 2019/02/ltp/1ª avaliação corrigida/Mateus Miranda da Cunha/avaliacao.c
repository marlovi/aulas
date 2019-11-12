#include <stdio.h>
#include <stdlib.h>

int menu();
int mdc(int, int);
void ler_vet(int[], int);
int soma_vetor(int[], int);
void ordem_inversa(int[], int, int);
int imprimir_vet(int[], int);
int ackermann(int, int);
int maior_elemento(int[], int);
int menor_elemento(int[], int);

int main()
{
    int op;
    int v1, v2, tam, i = 0;
    int *vetor;
    do
    {
        op = menu();
        switch (op)
        {
        case 0:
            printf("Saindo da apalicacao...\n");
            break;

        case 1:
            printf("Informe o valor de  V1: ");
            scanf("%d", &v1);
            printf("Informe o valor de  V2: ");
            scanf("%d", &v2);
            printf("O MDC entre %d e %d eh: %d\n", v1, v2, mdc(v1, v2));
            break;

        case 2:
            printf("Informe o tamanho do vetor: ");
            scanf("%d", &tam);
            fflush(stdin);
            vetor = (int *)malloc(tam * sizeof(int));
            ler_vet(vetor, tam);
            printf("O menor elemento do vetor eh: %d\n", menor_elemento(vetor, tam));
            printf("O maior elemento do vetor eh: %d\n", maior_elemento(vetor, tam));
            printf("A soma dos elementos do vetor eh: %d\n", soma_vetor(vetor, tam));
            break;
            free(vetor);

        case 3:
            printf("Informe o valor de  V1: ");
            scanf("%d", &v1);
            printf("Informe o valor de  V2: ");
            scanf("%d", &v2);
            printf("A serie de Ackermann de %d e %d eh: %d\n", v1, v2, ackermann(v1, v2));
            break;

        case 4:
            printf("Informe o tamanho do vetor: ");
            scanf("%d", &tam);
            vetor = (int *)malloc(tam * sizeof(int));
            ler_vet(vetor, tam);
            printf("------Vetor na ordem normal------\n");
            imprimir_vet(vetor, tam);
            fflush(stdin);
            ordem_inversa(vetor, 0, tam - 1);
            printf("------Vetor na ordem inversa------\n");
            imprimir_vet(vetor, tam);
            break;
            free(vetor);

        default:
            printf("Opcao Invalida..\n");
            break;
        }
    } while (op != 0);
}

int menu()
{
    int x;
    printf("-------MENU-------\n");
    printf("Digite 0 para: Sair da Aplicacao.\n");
    printf("Digite 1 para: Exercicio 1.\n");
    printf("Digite 2 para: Exercicio 2.\n");
    printf("Digite 3 para: Exercicio 3.\n");
    printf("Digite 4 para: Exercicio 4.\n");
    printf("Informe uma opcao valida: ");
    scanf("%d", &x);
    return x;
}

void ler_vet(int *v, int tam)
{
    int i = 0;
    for (; i < tam; i++)
    {
        printf("Informe o valor da posicao [%d]: ", i);
        scanf("%d", &v[i]);
    }
}

int imprimir_vet(int v[], int tam)
{
    int i = 0;
    for (; i < tam; i++)
    {
        printf("Vetor: %d\n", v[i]);
    }
}

int mdc(int v1, int v2)
{
    if (v2 == 0)
    {
        return v1;
    }
    if (v1 < v2)
    {
        return mdc(v2, v1);
    }
    return mdc(v2, v1 % v2);
}

int soma_vetor(int v[], int tam)
{
    if (tam == 0)
    {
        return v[0];
    }
    return v[tam] + soma_vetor(v, tam - 1);
}

void ordem_inversa(int v[], int inicio, int fim)
{
    int aux = v[fim];
    v[fim] = v[inicio];
    v[inicio] = aux;

    if (inicio >= fim)
    {
        return;
    }
    ordem_inversa(v, inicio + 1, fim - 1);
}

int ackermann(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    if (m > 0 && n == 0)
    {
        return ackermann(m - 1, 1);
    }
    if (m > 0 && n > 0)
    {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int maior_elemento(int vetor[], int tamanho)
{
    if (tamanho == 0)
    {
        return 0;
    }
    else if (tamanho == 1)
    {
        return vetor[0];
    }
    if (vetor[tamanho - 1] > maior_elemento(vetor, tamanho - 1))
    {
        return vetor[tamanho - 1];
    }
}

int menor_elemento(int vetor[], int tamanho)
{
    if (tamanho == 0)
    {
        return 0;
    }
    else if (tamanho == 1)
    {
        return vetor[0];
    }
    if (vetor[tamanho - 1] < menor_elemento(vetor, tamanho - 1))
    {
        return vetor[tamanho - 1];
    }
}