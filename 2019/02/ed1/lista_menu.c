#include "stdio.h"
#include "stdlib.h"

/*
  código de barras
  nome
  preco de compra
  preco de venda
  marca
*/

int menu();
int main(){

  int op = 0;
  do{
    op = menu();

    switch(op){
      //programar todos os casos

    }
  }while(op !=0);

}

int menu(){
  printf("Digite 0 para sair\n");
  printf("Digite 1 para criar uma LISTASE\n");
  printf("Digite 2 para adicinar um produto no início da LISTASE \n");
  printf("Digite 3 para adicionar  um produto no final da LISTASE \n");
  printf("Digite 4 para adicinar um produto em um index específico da lista informado pelo usuário\n");
  printf("Digite 5 para imprimir toda a LISTASE\n");
  printf("Digite 6 para pesquisar se um produto está na lista \n");
  printf("Digite 7 para remover um produto específico da lista\n");
  printf("Digite 8 para remover todos os produtos da lista \n");
  printf("Digite 9 para alterar um produto específico pesquisando pelo código de barras \n");
  printf("Digite 10 para contar quantos produtos há na listase\n");

} 
