#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhas_vetor.cpp"

int validar_par(char *str); // Validar escopo de parênteses de expressões
int validar_pcc(char *str); // Validar escopo de parênteses, colchetes e chaves de expressões
void converter_pos_pcc(char ea_in[], char ea_pos[]);
void converter_pos(char ea_in[], char ea_pos[]);
int prior_operadores(char oper);
double aval_expressao(char ea_in[]);
double elevar(float x, float y);

int main()
{
	char expr[50], exp_pos[50] = "";
	printf("\nDigite a expressao: \n");
	gets(expr);
	if (validar_pcc(expr))
	{
		converter_pos(expr, exp_pos);
		printf("\n Expressao In-Fixa :[ %s ]\n", expr);
		printf("\n Expressao Pos-Fixa:[ %s ]\n", exp_pos);
		printf("\n Resultado da avaliação da expressão: EM DESENVOLVIMENTO\n");
	}
	else
		printf("\n Expressao Invalida!!\n");

	system("PAUSE");
}

int validar_par(char *str)
{
	PILHA p;
   Create(&p);
	unsigned int i;
	for(i=0; i<strlen(str);i++)
	{
		if (str[i] == '(')
			Push(&p, str[i]);
		else
			if(str[i] == ')')
				if(!Empty(p))
					Pop(&p);
				else
					return 0; //Mais parenteses de fechamento que de abertura
	}
	return(Empty(p)); // se pilha for vazia OK senão for indica mais parenteses de abertura que de fechamento
}

int validar_pcc(char *str)
{
	PILHA ps;
   Create(&ps);
	int i;
	for(i=0; i<strlen(str);i++)
	{
	  if(strchr("({[",str[i])!=NULL)
		 Push(&ps,str[i]);
	  else
		  if(str[i]=='}')
			  if(Empty(ps))
			return(0);
		else
				  if(Top(ps)=='{')
					  Pop(&ps);
				else
					return(0);
		  else
			  if(str[i]==']')
			if(Empty(ps))
				return(0);
				else
					  if(Top(ps)=='[')
						 Pop(&ps);
		 else
						  return(0);
			  else
				  if(str[i]==')')
				if(Empty(ps))
					return(0);
				else
						  if(Top(ps)=='(')
							  Pop(&ps);
			 else
							  return(0);
	}
	return (Empty(ps));
}

void converter_pos_pcc(char ea_in[], char ea_pos[])
{
	PILHA ps;
   Create(&ps);
	int i=0;
	char *str_pos=ea_pos;
	while(ea_in[i]!='\0')
	{
		if(strchr("+-*/^",ea_in[i])!=NULL)
			Push(&ps,ea_in[i]);
		else
			if(strchr("}])",ea_in[i])!=NULL)
			{
				*str_pos++ = (char) Top(ps);
				Pop(&ps);
			}
			else
				if(strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",ea_in[i])!=NULL)
					*str_pos++ =ea_in[i];
		i++;
	}
}

int prior_operadores(char oper)
{
	int prior;
	switch (oper)
	{
	case '(':
	case '[':
	case '{':
		prior=1;
		break;
	case '+':
	case '-':
		prior=2;
		break;
	case '*':
	case '/':
		prior=3;
		break;
	case '^':
		prior=4;
		break;
	default:
		prior=0;
	}
	return prior;
}

void converter_pos(char ea_in[], char ea_pos[])
{
	PILHA ps;
   Create(&ps);
	int i=0;
	char *str_pos=ea_pos;
	while(ea_in[i]!='\0')
	{
		if(strchr("+-*/^",ea_in[i])!=NULL)
		{
			while((!Empty(ps)) && (prior_operadores(ea_in[i])<=prior_operadores(Top(ps))))
			{
				*str_pos++ = (char) Top(ps);
				Pop(&ps);
			}
			Push(&ps,ea_in[i]);
		}
		else
			if(strchr("}])",ea_in[i])!=NULL)
			{
				while((!Empty(ps)) && (strchr("({[",Top(ps))==NULL))
				{
					*str_pos++ = (char) Top(ps);
					Pop(&ps);
				}
				Pop(&ps);
			}
			else
				if(strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",ea_in[i])!=NULL)
					*str_pos++ =ea_in[i];
				else
					if(strchr("{[(",ea_in[i])!=NULL)
						Push(&ps,ea_in[i]);

		i++;
	}
	while(!Empty(ps))
	{
		*str_pos++ = (char) Top(ps);
		Pop(&ps);
	}
}

double elevar(float x, float y)
{
	if(y>0)
		return x * elevar(x,y-1);
	else
		return 1;
}

double aval_expressao(char ea_in[])
{
	// esta vc tem que desenvolver
}

