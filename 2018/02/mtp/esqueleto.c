#include "stdio.h"

int menu();
int soma(int,int);
int main(){
    int op = 0;
    do{
         op = menu();
        switch(op){
            case 0: 
            printf("Obrigado por utilizar a aplicação\n");
            break;
            case 1: {
                int v1;
                int v2;
                printf("Informe o primeiro valor \n");
                scanf("%d",&v1);
                printf("Informe o segundo valor \n");
                scanf("%d",&v2);
                printf(" A soma de (%d) + (%d) = %d  \n",
                        v1,
                        v2,
                        soma(v1,v2));
            }
           
            break;
            case 2: 
            break;
            
            default: printf("Opção Inválida \n");
        }
    }while(op !=0);
    return 0;
}

int menu(){
    int v;
    printf("Digite 0 para Sair\n");
    printf("Digite 1 para executar  a soma de A + B \n");
    scanf("%d",&v);
    return v;
}

int soma(int a, int b){
    return a+ b;
}