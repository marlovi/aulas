#include "stdio.h"
#include "stdlib.h"

 
typedef struct {
    char nome[200];
    int idade;
    float salario;
} Funcionario;
Funcionario func[10];


int main(){
    Funcionario* a = malloc( sizeof(Funcionario));

    
    printf("Informe um nome \n");
   fgets(func[0].nome,200,stdin);

   printf("Informe nome dinamico \n");
   fgets(a->nome,200,stdin);

    printf("O Nome informado foi %s ",func[0].nome);
     printf("O Nome informado foi %s ",a->nome);
     free(a);
    return 0;
}