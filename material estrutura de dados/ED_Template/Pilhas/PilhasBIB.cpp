typedef struct noh
{
	 float info;
	 struct noh *prox;
} *PILHA;

void Push (PILHA *pp, float valor)
{
	 PILHA pNovo = (PILHA) malloc(sizeof(struct noh));
	 pNovo->info = valor;
	 pNovo->prox = *pp;
	 *pp = pNovo;
}

void Pop(PILHA *pp)
{
	PILHA pRem;
	if ((*pp) != NULL)
	{
		 pRem = *pp;
		 *pp=(*pp)->prox;
		 free(pRem);
	}
}

int Empty(PILHA p)
{
	  return (p == NULL);
}

float Top(PILHA p)
{
		  int ret;
		  PILHA topo = p;
		  if (p != NULL)
			  ret = topo->info;
		  return(ret);
}
