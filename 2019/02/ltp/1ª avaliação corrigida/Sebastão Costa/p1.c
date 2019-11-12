#include <stdio.h>
#include <stdlib.h>

int menu(){
    printf("Digite 2 para manipulaçã de vetores\n");
    printf("Digite 3 para função de Ackermann\n");
    printf("Digite 4 Imprimir vetor na ordem inversa\n");
    printf("Digite 5 Imprimir vetor na ordem inversa\n");
    printf("Digite 0 para retornar ao munu principal\n");
    int op;
    scanf("%d",&op);
    return op;
}


int menor_valor(int*, int, int);
int maior_valor(int* v, int i, int);
int soma_valores(int* v, int i);
int funcAckermann(int a, int b);
int imprimeVetorInverso(int* v, int i);

//int teste(int q);

int main(){
    int op;

    do{
        op = menu();

        switch(op){
            case 0:
                break;
            case 2:{
                system("clear");
                int op2;
                printf("Informe os valores para um vetor de 5 elementos: \n");
                int v[5];
                for(int i=0;i<5;i++) scanf("%d",&v[i]);
                int n = 1000000, n1 = -1000000;
                break;

                do{

                    printf("Digite 1 para retornar o menor elemento do vetor:\n");
                    printf("Digite 2 para retornar o maior elemento do vetor: \n");
                    printf("Digite 3 para retornar a soma dos elementos do vetor: \n");
                    printf("Digite 0 para retornar ao munu principal:\n");
                    scanf("%d",&op2);

                    switch(op2){
                        case 0:
                            break;
                        case 1:
                            system("clear");
                            printf("O menor valor encontrado foi: %d\n\n",menor_valor(v,4,n));
                            break;
                        case 2:
                            system("clear");
                            printf("O maior valor encontrado foi: %d\n\n",maior_valor(v,4,n1));
                            break;    
                        case 3:
                            system("clear");
                            printf("A soma dos elementos é igual a : %d\n\n",soma_valores(v,4));
                            break;                
                        default:
                            system("clear");
                            printf("Opção invállida!\n\n");
                    }


                }while(op2!=0);
            }break;
            case 3:{
                system("clear");
                int m, n;
                printf("Informe uma valor para m: ");
                scanf("%d",&m);
                printf("Informe uma valor para n: ");
                scanf("%d",&n);
               
                printf("Valor A(%d,%d) =  %d\n\n",m,n,funcAckermann(1,2));
            }break;          

            case 4:{
                system("clear");
                printf("Informe os valores para um vetor de 5 elementos: \n");
                int v2[5];
                for(int i=0;i<5;i++) scanf("%d",&v2[i]);
                printf("%d", imprimeVetorInverso(v2, 4));
                printf("\n");
            }break;    
            case 5:
            //printf("%d\n",teste(4));
            break;          
            default:
                printf("Opção inválida!\n");
                break;
        }

    }while(op != 0);

    return 0;
}

int menor_valor(int* v, int i, int menor){
    if(i== -1){
        return menor;
    }
    else{
        if(v[i] < menor) menor = v[i];
        return menor_valor(v,i-1,menor);
    } 
}

int maior_valor(int* v, int i, int maior){
    if(i== -1){
        return maior;
    }
    else{
        if(v[i] > maior) maior = v[i];
        return maior_valor(v,i-1,maior);
    } 
}

int soma_valores(int* v, int i){
    if(i==0) return v[i];
    else return soma_valores(v, i-1)+v[i];
}

int funcAckermann(int m, int n){
    if(m==0) return n+1;
    else if(m>0 && n == 0) return funcAckermann(m-1, 1);
    else return funcAckermann(m-1, funcAckermann(m,n-1));
}

int imprimeVetorInverso(int* v, int i){
    if(i==0) return v[i];
    else{ 
     printf("%d ",v[i]);
     return imprimeVetorInverso(v, i-1);
    }
}

/*

int teste(int n){
    if(n==1) return n;
    else return (n-1)*teste(n-1);
}





Questão 5

 f(4) = 6
 f(5) = 24

*/
