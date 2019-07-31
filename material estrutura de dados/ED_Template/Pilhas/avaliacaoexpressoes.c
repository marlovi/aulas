#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhas.cpp"

int validar_par(char *str); // Validar escopo de parênteses de expressões
int validar_pcc(char *str); // Validar escopo de parênteses, colchetes e chaves de expressões

int main()
{
	char expr[50];
	printf("\nDigite a expressao: \n");
	scanf("%s",&expr);
	//gets(expr);
	if (validar_par(expr))
		printf("\n Expressao Valida!!\n");
	else
		printf("\n @@@@@@@ Expressao Invalida!!\n");
	system("pause");
   return 1;
}

int validar_par(char *str)
{
	PILHA p = NULL;
	unsigned int i;
	for(i=0; i<strlen(str);i++)
	{
		if (str[i] == '(')
			push(&p, str[i]);
		else
			if(str[i] == ')')
				if(!pilha_vazia(&p))
					pop(&p);
				else
					return 0; //Mais parenteses de fechamento que de abertura
	}
	return(pilha_vazia(&p)); // se pilha for vazia OK senão for indica mais parenteses de abertura que de fechamento
}

int validar_pcc(char *str)
{
	return 0;
}
