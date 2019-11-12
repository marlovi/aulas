/*Desenvolva opção no menu e uma função recursiva para calcular o máximo divisor
comum (mdc):
○ mdc(x,y) = y , se x maior e igual y e x módulo y = 0
○ mdc(x,y) = mdc(y,x), se x < y
○ mdc(x,y) = mdc(y, x módulo y), caso contrário*/

#include <stdio.h>
#include <stdlib.h>

char Opcoes();
void Questao1(char op, int a, int b);
int setNumber();

int main()
{
    int a = setNumber();
    int b = setNumber();
    Questao1(Opcoes(), a, b);
    return 0;
}

char Opcoes()
{
    char op;
    printf("Escolha as a letra da questão que deseja ter acesso:\n\n");
    printf("A)mdc(x,y) = y , se x maior e igual y e x módulo y = 0:\n");
    printf("B)mdc(x,y) = mdc(y,x), se x < y:\n");
    printf("C)mdc(x,y) = mdc(y, x módulo y), caso contrário:\n");
    scanf("%s", &op);
    return op;
}
void Questao1(char op, int a, int b)
{
    switch (op)
    {
    case 'A':
        printf("mdc(x,y) = y , se x maior e igual y e x módulo y = 0:\n");
        break;
    case 'B':
        printf("mdc(x,y) = mdc(y,x), se x < y: \n");
        break;
    case 'C':
        printf("mdc(x,y) = mdc(y, x módulo y), caso contrário: \n");
        break;
    default:
        printf("Opção invalida!\n");
        break;
    }
}
int setNumber()
{
    int number;
    int static cont = 0;
    if (cont == 0)
    {
        printf("Digite o valor de x:\n");
    }
    else
    {
        printf("Digite o valor de y:\n");
    }
    scanf("%d", &number);
    cont++;
    return number;
}
void mdc(int x, int y)
{
}
void QuestaoB(int a, int b)
{
}