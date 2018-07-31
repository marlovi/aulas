#include "stdio.h"

int menu();
float soma(float,float);
int main(){
    int op = 0;

    do{
        op = menu();
        switch(op){
            case 0: printf("Obrigado por utilizar minha aplicação \n");
            break;
            case 1:{
                    printf("Opção de Soma   EX A + B \n");
                    printf("Informe um valor para  A \n");
                    float v1;
                    scanf("%f", &v1);
                    printf("Informe um valor para B \n");
                    float v2;
                    scanf("%f" , &v2);

                    printf("O Resultado de %f + %f  = %.2f" , 
                    v1,
                    v2,
                    soma(v1,v2));
                  }
            break;
            default: printf("Opção Inválida \n");
        }
    }while(op != 0);
    return 0;
}

int menu(){
    int op = 0;
    printf("Digite  0 para Sair \n");
    printf("Digite 1 para o primeiro exercício \n");
    scanf("%d", & op);
    return op;
}

float soma(float a, float b){
    return a + b;
}