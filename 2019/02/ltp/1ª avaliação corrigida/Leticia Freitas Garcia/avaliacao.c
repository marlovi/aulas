#include <stdio.h>

//declarar funcoes
int menu(int escolha);
int mdc(int x, int y);
int a(int m, int n);



int main()
{
	
    int escolha;
    do
    {
        escolha = menu(escolha);
    } while (escolha != 0);

    return 0;
}

int menu(int escolha)
{
    printf("Digite um exercicio de 1 ao 5\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
    {
        int result;
        int x;
        int y;

        printf("Questao 1\n");
        printf("Digite os valores de x e y\n");
        scanf("%d %d", &x, &y);

        result = mdc(x, y);

        printf("Os valores do mdc sao respectivamente:\n %d\n %d\n", x, y);

        break;
    }

    case 2:
    {
        int m;
        int n;
        int result;

        printf("Questao 3\n");
        printf("Fornecer dados para m e n\n");
        scanf("%d %d", &m, &n);

        result = a(m, n);

        printf("%d\n", result);
    }

    case 3:
    {
        printf("Questao 5\n");
        printf("f(4) = 6 e f(5) = 12\n");
    }

    default:
        break;
    }
}

int mdc(int x, int y)
{
      
    if (x >= y)
    {
        return mdc(x, y) == y;
    }
    else if (x < y)
    {
        return mdc(x, y);
    }
    else
    {
        return mdc(y, x);
    }
}

int a(int m, int n)
{
    if (m == 0)
    {
        return  n + 1;
    }
    else if (m > 0 && n == 0)
    {
        return a(m-1 , 1 ) ;
    }
    else if (m > 0 && n > 0)
    {
        return a(m - 1, a(m, n - 1));
    }
}


