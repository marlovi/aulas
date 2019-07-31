#include <stdio.h>
#include <string.h>
#include "PilhasBIB.cpp"

int validar_par(char *str); // Validar escopo de parênteses de expressões
int validar_pcc(char *str); // Validar escopo de parênteses, colchetes e chaves de expressões

int main()
{
	char expr[50];
	printf("\nDigite a expressao: \n");
	scanf("%s",expr);
	if (validar_par(expr))
		printf("\n Expressao Valida!!\n");
	else
		printf("\n @@@@@@@ Expressao Invalida!!\n");
}

int validar_par(char *str)
{
	PILHA p = NULL;
	int erro = 0,i;
	for(i=0; i<strlen(str);i++)	{
	        if (str[i] == '(')
			push(&p, str[i]);
		else
			if(str[i] == ')')
				if(!pilha_vazia(p))
					pop(&p);
				else
					erro = 1; //Mais parenteses de fechamento que de abertura
	}
	return(!erro && pilha_vazia(p)); // se pilha for vazia OK senão for indica mais parenteses de abertura que de fechamento
}

int validar_pcc(char *str)
{
	PILHA p = NULL;
	int erro = 0, elem, i;
	for(i=0; i<strlen(str);i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			push(&p, str[i]);
		else
		    if(!pilha_vazia(p))
		    {
		       elem = eTopo(p); 
		       if(str[i] == ')')
				   if(elem=='(') (void) pop(&p);
		 		   else erro = 1; //Mais PARENTESES de fechamento que de abertura
		       else
		           if(str[i] == ']')
                      if(elem=='[') (void) pop(&p);
     				  else erro = 1; //Mais COLCHETES de fechamento que de abertura
   				   else
                      if(str[i] == '}')
                         if(elem=='{') (void) pop(&p);
     				     else erro = 1; //Mais CHAVES de fechamento que de abertura
		    }
            else erro = 1;
	}
	return(!erro && pilha_vazia(p)); // se pilha for vazia OK senão for indica mais parenteses de abertura que de fechamento
}
