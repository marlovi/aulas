#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhasBIB.cpp"

int validar_par(char *str); // Validar escopo de parênteses de expressões
int validar_pcc(char *str); // Validar escopo de parênteses, colchetes e chaves de expressões
void converter_pos_pcc(char ea_in[], char ea_pos[]);
void converter_pos(char ea_in[], char ea_pos[]);
int prior_operadores(char oper);
void ler_valores(char ea_in[], float ea_vr[]);
double aval_expressao(char ea_in[]);
float calcular(char oper, float vr1, float vr2);
double elevar(float x, float y);

int main()
{
	char expr[50], exp_pos[50] = "";
	printf("\nDigite a expressao: \n");
	gets(expr);
	if (validar_pcc(expr))
	{
		converter_pos(expr, exp_pos);
		printf("\n Expressao In-Fixa :[ %s ]", expr);
		printf("\n Expressao Pos-Fixa:[ %s ]\n", exp_pos);
		printf("Resultado: [%2.2f]\n",aval_expressao(exp_pos));
	}
	else
		printf("\n Expressao Invalida!!\n");

	system("PAUSE");
}

int validar_par(char *str)
{
	PILHA p = NULL;
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
	PILHA ps = NULL;
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
	PILHA ps = NULL;
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
	PILHA ps = NULL;
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

void ler_valores(char ea_in[], float ea_vr[])
{
	int i=0;
	printf("\n");
	while(ea_in[i]!='\0')
	{
		if(strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",ea_in[i])!=NULL)
		{
			printf("Digite um valor para %c:", ea_in[i]);
			scanf("%f", &ea_vr[i]);
		}
		else
			ea_vr[i]=0;
		i++;
	}
}

float calcular(char oper, float vr1, float vr2)
{
	float result=0;
	switch(oper)
	{
		case '+':
			result = vr1+vr2;
			break;
		case '-':
			result = vr1-vr2;
			break;
		case '*':
			result = vr1*vr2;
			break;
		case '/':
			result = vr1/vr2;
			break;
		case '^':
			result = elevar(vr1,vr2);
			break;
	}
	return result;
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
	PILHA ps = NULL;
	int i=0;
	float vr_dois, vr_um;
	float ea_valores[50];
	printf("\nDigite os valores das variáveis: ");
	ler_valores(ea_in, ea_valores);
	while(ea_in[i]!='\0')
	{
		if(strchr("+-*/^",ea_in[i])!=NULL)
		{
			vr_dois = Top(ps);
			Pop(&ps);
			vr_um = Top(ps);
			Pop(&ps);
			Push(&ps,calcular(ea_in[i],vr_um,vr_dois));
		}
		else
			if(strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",ea_in[i])!=NULL)
				Push(&ps, ea_valores[i]);
		i++;
	}
	return (Top(ps));
}


