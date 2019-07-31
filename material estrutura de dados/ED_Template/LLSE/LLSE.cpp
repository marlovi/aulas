#include <iostream>
#include <stdlib.h>
#include <stdio.h>

typedef struct noh
{
   int info;
   struct noh *prox;
} *LLSE;

void mostrar_LLSE(LLSE l);
void ordenar_LLSE(LLSE *l);
void inserir_inicio_LLSE(LLSE *l, int vlr);
void inserir_final_LLSE(LLSE *l, int vlr);
void inserir_posicao_LLSE(LLSE *l, int vlr, int pos);
void inserir_ordenado_LLSE(LLSE *l, int vlr);
void remover_inicio_LLSE(LLSE *l);
void remover_final_LLSE(LLSE *l);
void remover_por_valor_LLSE(LLSE *l, int vlr);
int contar_elementos_LLSE(LLSE l);

int main()
{
    LLSE Lista=NULL;
    int opc = 99;
    int pos;
    int vlr;
    inserir_inicio_LLSE(&Lista, 60);
    inserir_inicio_LLSE(&Lista, 50);
    inserir_inicio_LLSE(&Lista, 40);
    inserir_inicio_LLSE(&Lista, 20);
    inserir_inicio_LLSE(&Lista, 30);
    inserir_inicio_LLSE(&Lista, 10);

    while (opc)
    {
          //system("CLS");
          puts("Listas Lineares Duplamente Encadeadas - LLSE's");
          puts("Selecione uma Opção");
          puts("[1] Inserir no início");
          puts("[2] Inserir no final");
          puts("[21] Inserir na posicao determinada");
          puts("[3] Inserir ordenado");
          puts("[4] Remover no início");
          puts("[5] Remover no final");
          puts("[6] Remover por valor");
          puts("[7] Ordenar lista");
          puts("[8] Mostrar lista");
 			 puts("[9] Contar elementos da lista");
          puts("[0] Sair");
          scanf("%i",&opc);
          switch (opc)
          {
                 case 1  :
                 {
                     //system("CLS");
                     puts("Digite o valor a ser inserido: ");
                     scanf("%i",&vlr);
                     inserir_inicio_LLSE(&Lista, vlr);
                     break;
                 }
                 case 2  :
                 {
                     //system("CLS");
                     puts("Digite o valor a ser inserido: ");
                     scanf("%i",&vlr);
                     inserir_final_LLSE(&Lista, vlr);
                     break;
                 }
                 case 21  :
                 {
                     //system("CLS");
                     puts("Digite o valor a ser inserido: ");
                     scanf("%i",&vlr);
							puts("Digite a posicao onde inserir: ");
                     scanf("%i",&pos);
                     inserir_posicao_LLSE(&Lista, vlr, pos);
                     break;
                 }
                 case 3  :
  				     {
					 //system("CLS");
                     puts("Digite o valor a ser inserido: ");
                     scanf("%i",&vlr);
                     inserir_ordenado_LLSE(&Lista, vlr);
                     break;
				 }
                 case 4  :
                 {
                     remover_inicio_LLSE(&Lista);
                     break;
                 }
                 case 5  :
                 {
                     remover_final_LLSE(&Lista);
                     break;
                 }
                 case 6  :
                 {
                     puts("Digite o valor a ser inserido: ");
                     scanf("%i",&vlr);
                 		remover_por_valor_LLSE(&Lista, vlr);
                     break;
                 }
                 case 7  :
                 {
                     //system("CLS");
                     ordenar_LLSE(&Lista);
                     break;
                 }
                 case 8  :
                 {
                     //system("CLS");
                     mostrar_LLSE(Lista);
                     break;
                 }
                 case 9  :
                 {
                     //system("CLS");
                     printf("O número de elementos da lista eh: %i\n\n", contar_elementos_LLSE(Lista));
                     break;
                 }
                 case 0  : {break;}
                 default : {printf("Opção inválida - Redigite");}
          }
    }
	return 0;
}

// Mostrar lista linear
void mostrar_LLSE(LLSE l)
{
    printf("\n\nLista->");
    if (l!=NULL)
	 {
       printf("[%i]", l->info);
       for(LLSE q=l->prox;q!=NULL;q=q->prox)
           printf("->[%i]", q->info);
    }
    printf("->%c\n",190);
    system("PAUSE");
}

// Inserir elementos no início da lista
void inserir_inicio_LLSE(LLSE *l, int vlr)
{
    LLSE novo=(LLSE) malloc(sizeof(struct noh));
    novo->info = vlr;
    novo->prox = *l;
    *l=novo;
}
// Inserir elementos no final da lista
void inserir_final_LLSE(LLSE *l, int vlr)
{
    LLSE q,novo=(LLSE) malloc(sizeof(struct noh));
    novo->info = vlr;
    novo->prox=NULL;
    if (*l!=NULL){
       for(q=*l;q->prox!=NULL;q=q->prox);
       q->prox = novo;
    }
    else
       *l=novo;
}

void inserir_posicao_LLSE(LLSE *l, int vlr, int pos)
{
    LLSE aux = *l, novo=(LLSE) malloc(sizeof(struct noh));
    int cont = 0;
    novo->info = vlr;
    if(pos > 0 && pos <= contar_elementos_LLSE(*l)){
        while(cont < pos){
        	  aux = aux->prox;
        }
        if(aux == *l){

        }
    }
}

// Inserir um elemento em ordem crescente.
void inserir_ordenado_LLSE(LLSE *l, int vlr)
{
   LLSE aux_prox,aux_ant,novo;

	if (*l==NULL) // Lista Vazia
	{
		inserir_inicio_LLSE(l, vlr);
	}
	else
	{
		if (vlr<(*l)->info) // Inserir no início
         inserir_inicio_LLSE(l, vlr);
		else
			if ((*l)->prox == NULL) // Inserir no final (lista com um noh)
			{
				inserir_final_LLSE(l, vlr);
			}
			else // Lista com vários nos (inserir no meio ou no final)
			{
         	novo=(LLSE) malloc(sizeof(struct noh));
            novo->info = vlr;
            aux_prox=*l;
            while(aux_prox->info<vlr) // Localizar a posição para inserir
            {
            	aux_ant = aux_prox;
               if (aux_prox->prox!=NULL)
            		aux_prox = aux_prox->prox;
               else
               	break;
            }
            if (aux_prox==aux_ant) // Fim da lista
            {
                aux_ant->prox = novo;
                novo->prox=NULL;
            }
            else // Meio da lista
            {
            	 aux_ant->prox = novo;
                novo->prox = aux_prox;
            }

			}
	}
}

// Remover o elemento inicial da lista
void remover_inicio_LLSE(LLSE *l)
{
    LLSE alvo=*l;
    if(*l) {
           *l=alvo->prox;
           free(alvo);
    }
}

// Remover o elemento final da lista
void remover_final_LLSE(LLSE *l)
{
    LLSE ult,alvo;
    if (*l!=NULL)
    {
        for(alvo=*l;alvo->prox!=NULL;ult=alvo,alvo=alvo->prox);
        ult->prox=NULL;
        free(alvo);
    }
}

// Remover os elementos cujo valor seja igual ao parâmetro
void remover_por_valor_LLSE(LLSE *l, int vlr)
{
	LLSE aux_prox,aux_ant,alvo;
   int encontrou=1;
	while (encontrou)
   {
      encontrou = 0;
      aux_ant=NULL;
      alvo = *l;
      while(alvo->info!=vlr) // Localizar a posição para inserir
      {
         aux_ant = alvo;
         if (alvo->prox!=NULL)
            alvo = alvo->prox;
         else
            break;
      }
      if (alvo->info==vlr)
      {
      	encontrou = 1;
         if(aux_ant==NULL)
         {
            (*l)=alvo->prox;
            if ((*l)==NULL)
            	encontrou=0;
         }
         else
         {
            if (alvo->prox==NULL)
               aux_ant->prox=NULL;
            else
            {
               aux_prox=alvo->prox;
               aux_ant->prox=aux_prox;
            }
         }
         free(alvo);
      }
   }
}

int contar_elementos_LLSE(LLSE l)
{
	int numero_elementos = 0;
   LLSE pList=l;
   while(pList!=NULL)
   {
		numero_elementos++;
      pList = pList->prox;
   }
   return(numero_elementos);
}

// Ordenar elementos de uma LLSE
void ordenar_LLSE(LLSE *l)
{
	LLSE aux_prox, aux_ant, alvo_prox, alvo_ant;
   int ordenado=0;
   if ((*l)!=NULL)
   {
   	if ((*l)->prox!=NULL)
      {
         while (!ordenado)
         {
            ordenado = 1;
            alvo_ant = NULL;
            alvo_prox = *l;
            while(alvo_prox->prox != NULL) // Localizar a posição para inserir
            {
               aux_ant = alvo_ant;
               alvo_ant = alvo_prox;
               alvo_prox = alvo_prox->prox;
               if (alvo_ant->info > alvo_prox->info)
               {
                  ordenado = 0;
                  if (aux_ant == NULL)
                  {
                     if (alvo_prox->prox == NULL)
                     	alvo_ant->prox = NULL;
                     else
                     {
                     	aux_prox = alvo_prox->prox;
								alvo_ant->prox = aux_prox;
                        aux_prox->ant = alvo_ant;
                     }
                     alvo_prox->prox = alvo_ant;
                  	alvo_prox->ant = NULL;
                     alvo_ant->ant = alvo_prox;
                     *l = alvo_prox;
                  }
                  else
                  {
                     if (alvo_prox->prox != NULL)
                     	alvo_ant->prox = NULL;
                     else
                     {
                     	alvo_prox->ant = aux_ant;
                        aux_ant->prox = alvo_prox;
                        alvo_ant->prox = aux_prox;
                        aux_prox->ant = alvo_ant;
                        alvo_prox->prox = alvo_ant;
                        alvo_ant->ant = alvo_prox;
                     }
                  }
               	break;
               }
            }
         }
      }
   }
}
