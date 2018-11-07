#include "stdio.h"
#include "stdlib.h"
#include "stdio_ext.h"
    typedef struct {
        int dia;
        int mes;
        int ano;
    }Data;

    typedef struct{
        int ddd;
        char numero[10]; //98136-0644
    }Telefone;

    typedef struct{
        char logradouro[10];
        int numero;
        char bairro[30];
        char estado[30];
        char cep[14];
        char cidade[30];
    }Endereco;

    typedef struct {
        char nome[300];
        Data aniversario;
        char email[300];
        Endereco *endereco;
        Telefone *telefone;
    }Pessoa;
void imprimir_telefone(Telefone*); 
void ler_telefone(Telefone*);
int main(){
    Pessoa *agenda = malloc(sizeof(Pessoa)*10);
   // agenda->aniversario.ano = 2015;
 //  agenda[0].endereco->bairro 
 Telefone fone;
   /* fone.ddd = 64;
    fgets(fone.numero,10,stdin);*/
    ler_telefone(&fone);
    imprimir_telefone(&fone);
    
}

void ler_telefone(Telefone *t){
    printf("Informe o DDD\n");
    scanf("%d",&t->ddd);
    printf("Informe o telefone \n");
    __fpurge(stdin);
    //fflush(stdin); windows
    fgets(t->numero,10,stdin);
}

void imprimir_telefone(Telefone *t){
    printf("FONE = %d  %s    ",t->ddd,t->numero);
}

