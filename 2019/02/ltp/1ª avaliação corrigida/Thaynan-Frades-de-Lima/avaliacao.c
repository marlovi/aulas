#include <stdio.h>
#include <stdlib.h>

int menu();
int mdc1(int, int);
int menorVet2(int *, int, int);
int maiorVet2(int *, int, int);
int somaVet2(int *, int);
long long int a3(int, int);
int vetInverso4(int *, int);
int func5(int);

int main(){
    int questao;

    do{
        questao = menu();
        switch(questao){
            case 1:
                printf("\nNÂO FIZ :(\n");
            break;

            case 2:{
                int i = 0;
                int num;
                int *vetor = malloc(sizeof(int));
                int menor = TMP_MAX;
                int maior = 0;
                int soma = 0;

                printf("\nDigite termos de um vetor para manipulá-lo:\n");
                do{
                    printf("\nDigite o %dº termo do vetor (n <= -1 para PARAR): ", i+1);
                    scanf("%d", &num);

                    if(num < 0) break;

                    i++;
                    vetor = realloc(vetor, sizeof(int) * i);
                    vetor[i-1] = num;

                }while(num > -1);

                printf("\n");

                printf("\nO Menor elemneto do vetor inserido eh: %d.", menorVet2(vetor, i-1, menor));
                printf("\nO Maior elemneto do vetor inserido eh: %d.", maiorVet2(vetor, i-1, maior));
                printf("\nA Soma de todos os elemnetos do vetor inserido eh: %d.\n", somaVet2(vetor, i-1));

            }break;

            case 3:{
                int m;
                int n;

                printf("\nInforme @ valores para a Função de Ackermann (M e N) respectivamente:\n");
                printf("\nm = ");
                scanf("%d", &m);
                printf("n = ");
                scanf("%d", &n);

                printf("\nFuncao de Ackermann para (%d, %d): %lld.\n", m, n, a3(m, n));
            }break;

            case 4:{
                int i = 0;
                int num;
                int *vetor = malloc(sizeof(int));

                printf("\nDigite termos de um vetor para inverte-lo:\n");
                do{
                    printf("\nDigite o %dº termo do vetor (n <= -1 para PARAR): ", i+1);
                    scanf("%d", &num);

                    if(num < 0) break;

                    i++;
                    vetor = realloc(vetor, sizeof(int) * i);
                    vetor[i-1] = num;

                }while(num > -1);

                printf("\nO vetor na Forma Inversa:\n");

                vetInverso4(vetor, i-1);
            
                printf("\n");
            }break;

            case 5:{
                // printf("\nfunc(1) = %d.", func5(1));
                // printf("\nfunc(3) = %d.", func5(3));
                printf("\nfunc(4) = %d.", func5(4));
                printf("\nfunc(5) = %d.", func5(5));
                // printf("\nfunc(6) = %d.", func5(6));
                // printf("\nfunc(7) = %d.", func5(7));
                // printf("\nfunc(8) = %d.", func5(8));
                // printf("\nfunc(9) = %d.", func5(9));
                // printf("\nfunc(10) = %d.", func5(10));
                // printf("\nfunc(11) = %d.", func5(11));

                printf("\n");
            }break;

            case 0:
                system("clear");
            break;

            default:
                printf("\ninvalido\n");
            
        }
    }while(questao != 0);

return 0;
}

int menu(){
    int questao;

    printf("\nDigite o numero da respectiva questao que quer resolver (0 para Sair): ");
    scanf("%d", &questao);
    return questao;
}

int menorVet2(int *v, int t, int men){
    if(v[t] < men) men = v[t];

    if(t == 0)return men;
    else return menorVet2(v, t-1, men);
}

int maiorVet2(int *v, int t, int maior){
    if(v[t] > maior) maior = v[t];

    if(t == 0) return maior;
    else return maiorVet2(v, t-1, maior);
}

int somaVet2(int *v, int t){
    if(t < 0) return v[t];
    else return v[t] + somaVet2(v, t-1);
}

long long int a3(int m, int n){
    if(m == 0) return n+1;

    else if(m > 0 && n == 0) return a3(m-1, 1);

    else if(m > 0 && n > 0) return a3(m-1, a3(m, n-1));
}

int vetInverso4(int *v, int t){
    printf("\nv[%d] = %d.",t ,v[t]);

    if(t == 0) return v[t];
    else return vetInverso4(v, t-1);
}

int func5(int num){
    if(num == 1) return 1;

    else return num-1 * func5(num-1);
}