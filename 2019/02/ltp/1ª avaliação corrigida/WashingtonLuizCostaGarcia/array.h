#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>

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
                aux = array[cont];
                array[cont] = array[cont + 1];
                array[cont + 1] = aux;
            }
        }
    }
}

#endif