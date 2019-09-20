#include "stdio.h"
#include "stdlib.h"

int menu();
int mdc(int, int);
int menorVet(int *, int, int);
int maiorVet(int *, int, int);
int somaVet(int *, int, int);
int Ackermann(int, int);
int inverter(int *, int);

int main(){

    int opc;

    do{

        opc = menu();

        switch (opc){
            case 1:{

                printf("\tFunção MDC\n");
                printf("Digite os numeros X e Y: ");

                int x,y;

                scanf("%d %d", &x, &y);

                printf("O MDC de %d e %d é %d\n\n", x,y, mdc(x,y));

            }break;

            case 2:{

                printf("\tManipulação de Vetores\n");
                int i, tam;
                printf("Digite o tamanho do vetor: ");
                scanf("%d", &tam);
                int v[tam];
                printf("Digite os valores do vetor:\n");

                for(i = 0; i < tam; i++){
                    scanf("%d", &v[i]);
                }

                tam = v[i];

                printf("O MENOR elemento do vetor é: %d\n", menorVet(v, i-1,tam));
                printf("O MAIOR elemento do vetor é: %d\n", maiorVet(v, i-1, 0));
                printf("A soma do vetor é: %d\n\n", somaVet(v, i-1, 0));

            }break;

            case 3:{

                printf("\tFunção de Ackermann\n");
                printf("Digite os valores de m e n:");

                int m, n;

                scanf("%d %d", &m, &n);

                printf("A série de Ackermann é : %d\n\n", Ackermann(m,n));

            }break;

            case 4:{

                printf("\tFunção Inverter\n");

                int i, tam;
                printf("Digite o tamanho do vetor: ");
                scanf("%d", &tam);
                int v[tam];
                printf("Digite os valores do vetor:\n");

                for(i = 0; i < tam; i++){
                    scanf("%d", &v[i]);
                }

                    printf("A ordem inversa desse vetor é:\n\n");
                    inverter(v,i-1);

            }break;
        }

    }while(opc != 0);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////q

int menu(){


    int opc;

    printf("Digite o numero do exercicio (1 a 4) ou 0 para sair: ");
    scanf("%d", &opc);

    system("clear");

    return opc;

}

int mdc(int x, int y){

    if(x%y == 0 && x > y){      //Condição de parada
        return y;
    }
    
    else if(x == y){
        return y;
    }

    else if(x < y){            //Caso x seja maior que y, inverte os valores
        return mdc(y,x);
    }
    
    else{
        return mdc(y, x%y);     //Calculo recursivo, X = Y, Y = Modulo
    }

}

int menorVet(int *v, int i, int menor){
    if(i < 0){
        return menor;
    }else if(menor > v[i]){
        menor = v[i];
        return menorVet(v, i, v[i]);
    }else{
        return menorVet(v, i-1, menor);
    }
}

int maiorVet(int *v, int i, int maior){

    if(i < 0){
        return maior;
    }else if(maior < v[i]){
        maior = v[i];
        return maiorVet(v, i, maior);
    }else{
        return maiorVet(v, i-1, maior);
    }
}

int somaVet(int *v, int i, int res){

    if(i < 0){
        return res;
    }
    else{
        return somaVet(v, i-1, res+v[i]);
    }
}

int Ackermann(int m, int n){

    if(m == 0){
        return n+1;
    }else if(n == 0){
        return Ackermann(m-1, 1);
    }else{
        return Ackermann(m-1,Ackermann(m,n-1));
    }
}

int inverter(int *v, int i){

    if(i <= 0){
        return printf("| %d |\n\n", v[i]);
    }

    else{
        printf(" |%d| ", v[i]);
        return inverter(v, i-1);
    }
}