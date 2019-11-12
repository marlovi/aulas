#include "stdio.h"
#include "stdlib.h"

int menu();
int mdc(int, int);
void imprimeVetorInverso(int *, int);
int func(int);
int somaVetor(int *, int);
int menorElemento(int*, int, int);
int maiorElemento(int*, int, int);
int ackermann(int, int);

int main()
{
    int op;
    do
    {
        op = menu();
        switch (op)
        {
        case 0:
            break;
        case 1:
        {
            int x, y;
            printf("Digite o valor de x e y: ");
            scanf("%d %d", &x, &y);
            printf("mdc(%d, %d) = %d\n", x, y, mdc(x, y));
            break;
        }
        case 2:
        {
            int *v, tam, menor = 99999, maior = 0;
            printf("Digite o tamanho do vetor: ");
            scanf("%d", &tam);
            v = malloc(sizeof(int) * tam);
            for (int i = 0; i < tam; i++)
                scanf("%d", &v[i]);
            printf("Menor = %d\n", menorElemento(v, tam - 1, menor));
            printf("Maior = %d\n", maiorElemento(v, tam - 1, maior));
            printf("Soma de todos os elementos: %d\n", somaVetor(v, tam - 1));
            break;
        }
        case 3:
        {
            int m, n;
            printf("Digite o valor de m e n: ");
            scanf("%d %d", &m, &n);
            printf("A(%d, %d) = %d\n", m, n, ackermann(m, n));
            break;
        }
        case 4:
        {
            int *v, tam;
            printf("Digite o tamanho do vetor: ");
            scanf("%d", &tam);
            v = malloc(sizeof(int) * tam);
            for (int i = 0; i < tam; i++)
                v[i] = i;
            printf("Impressão normal: ");
            for (int i = 0; i < tam; i++)
            {
                if (i == tam - 1)
                {
                    printf("%d\n", v[i]);
                }
                else
                    printf("%d ", v[i]);
            }
            printf("Impressão inversa: ");
            imprimeVetorInverso(v, tam - 1);
            break;
        }
        default:
            printf("func(4) = %d\nfunc(5) = %d\n", func(4), func(5));
            break;
        }
    } while (op != 0);

    return 0;
}

int menu()
{
    int op;
    printf("Questão 1\nQuestão 2\nQuestão 3\nQuestão 4\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    return op;
}

int mdc(int x, int y)
{
    if (x >= y && x % y == 0)
        return y;
    else if (x < y)
        return mdc(y, x);
    else
        return mdc(y, x % y);
}

void imprimeVetorInverso(int *v, int i)
{
    if (i == 0)
        printf("%d\n", v[i]);
    else
    {
        printf("%d ", v[i]);
        return imprimeVetorInverso(v, (i - 1));
    }
}

int func(int n)
{
    if (n == 1)
        return 1;
    else
        return (n - 1) * func(n - 1);
}

int somaVetor(int *v, int i)
{
    if (i == 0)
        return v[i];
    else
        return v[i] + somaVetor(v, (i - 1));
}

int menorElemento(int *v, int i, int menor)
{
    if(i == -1){
        return menor;
    }
    else{
        if(v[i] < menor){
            menor = v[i];
            return menorElemento(v, (i - 1), menor);
        }
        else{
            return menorElemento(v, (i - 1), menor);
        }
    }
}

int maiorElemento(int *v, int i, int maior)
{
    if(i == -1){
        return maior;
    }
    else{
        if(v[i] > maior){
            maior = v[i];
            return maiorElemento(v, (i - 1), maior);
        }
        else{
            return maiorElemento(v, (i - 1), maior);
        }
    }
}

int ackermann(int m, int n){
    if(m == 0)
        return n + 1;
    else if(m > 0 && n == 0)
        return ackermann((m - 1), 1);
    else if(m > 0 && n > 0)
        return ackermann(m - 1, ackermann(m, n - 1));
}
