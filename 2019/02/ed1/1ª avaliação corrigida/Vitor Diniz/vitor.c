#include "stdio.h"

int menu();
int mdc(int, int);
int func(int);
int ack(int, int);

int main(){
    int i;
    
    do{
        i = menu();
        switch(i){
            case 1:{
                int x, y;
                printf("Digite o valor de X: ");
                scanf("%d", &x);
                printf("Digite o valor de Y: ");
                scanf("%d", &y);
                mdc(x, y);
                
                
            }break;

            case 3:{
                int m, n, i;
                printf("Digite o valor de m: ");
                scanf("%d", &m);
                printf("Digite o valor de n: ");
                scanf("%d", &n);
                i = ack(m, n);
                printf("%d\n", i);
                
            }break;

            case 5:{
                int n, x;
                printf("Digite o valor de n: ");
                scanf("%d", &n);

                x = func(n);
                
                printf("%d\n", x);
                

            }break;
            case 0: break;
        }
    }while(i != 0);

    return 0;
}

int menu(){
    int n;
    printf("Digite 1 para Calcular o MDC de 2 numeros \n");
    printf("Digite 3 para Calcular usando a Função de Ackermann \n");
    printf("Digite 5 para Ver valor de N \n");
    printf("Digite 0 para sair\n");

    scanf("%d", &n);
    return n;
}

int mdc(int x, int y){
    if(x >= y && y == 0){
        printf("O MDC de %i e %i é 0\n", x, y);
    }
    if(x < y){
        int a = mdc(x, y);
        printf("%d", a);
    }
    else{
        mdc(y, x * y);
    }
}

int ack(int m, int n){
    if(m == 0) {
        n + 1;
    }
    else if(m > 0 && n == 0) {
        ack(m - 1, 1);
    }
    else if(m > 0 && n > 0) {
        ack(m - 1, ack(m, n - 1));
    }
}

int func(int n){
    int x;
    if(n == 1){
        x = 1;
    }else if (n == 0){
        x = 0;
    }
    else{
        x = (n - 1) * func(n - 1);        
    }

    return x;
    
}