#include<stdio.h>
#include<stdlib.h>

int menu()
{
   int opcao=0;
   printf("Digite 2 para exercicio 2: \n");
   printf("Digite 0 para sair !!!\n");
   scanf("%d", &opcao);
   printf("----------------------------\n");
   return opcao;
}
int main()
{
  int tamanho=0;
  int vetor1;
  int vetor2;
  int vetor3;
  int i=0;
  int j=0;
  
    case 2:
    {
        printf("Informe o tamanho do vetor1: \n");
        scanf("%d", &tamanho);
        vetor=calloc(tamanho,sizeof(int));
        ler_vetor(vetor1,tamanho);
        printf("Informe o tamanho do vetor2: \n");
        scanf("%d", &tamanho);
        vetor=calloc(tamanho,sizeof(int));
        ler_vetor(vetor2,tamanho);
        printf("Elementos adicionados no vetor3; \n");
        ler_vetor(vetor3,tamanho);
        free(vetor);
        for(int i=0; i<tamanho; i++);
        if(vetor[i]==vetor[j]);
        for(int j=0; j<tamanho; j++);
        if(vetor[j]==vetor[i]);   
        break;
    }        
}

