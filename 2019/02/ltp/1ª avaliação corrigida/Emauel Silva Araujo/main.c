#include<stdio.h>

#define print printf

void menu();
void mostra_menu();
void cont();
int mdc(int, int);
int maior(int *, int, int);
int menor(int *, int, int);
int soma(int*, int);
unsigned long long int A(unsigned long long int, unsigned long long int);
void vetor_inverso(int*, int);
int func(int);
int main(){
    menu();
    return 0;
}

void menu(){
    int opc;
    do{
        mostra_menu();
        scanf("%d", &opc);
        switch(opc){
            case 0:
                print("Bye...\n");
                break;
            case 1:{
                int x, y;
                print("-----------------------MDC-----------------------\n");
                print("Informe o valor de X:\t");
                scanf("%d",&x);
                print("Informe o valor de Y:\t");
                scanf("%d", &y);
                print("O mdc entr %d e %d é:\t%d\n", x, y, mdc(x, y));
                print("-----------------------MDC-----------------------\n");
                cont();
                }break;
            case 2:{
                int N;
                print("-----------------------VETORES-----------------------\n");
                print("informe o tamanho do vetor:\t");
                scanf("%d", &N);
                int v[N];
                print("Digite os valores do vetor separado por espaço:\t");
                for(int i = 0; i <N; i++)
                    scanf("%d", &v[i]);
                print("o menor elemento é: %d\n", menor(v, N, v[N-1]));
                print("o maior elemento é: %d\n", maior(v, N, v[N-1]));
                print("A soma dos elementos é: %d\n", soma(v, N));
                print("-----------------------VETORES-----------------------\n");
                cont();
                }break;
            case 3:{
                unsigned long long int m, n;
                print("-----------------------Ackermann-----------------------\n");
                print("Informe o valor M:\t");
                scanf("%lld", &m);
                print("Informe o valor N:\t");
                scanf("%lld", &n);
                print("Ackermann(%lld,%lld) =\t%lld\n", m, n, A(m,n));
                print("-----------------------Ackermann-----------------------\n");
                cont();
                }break;
            case 4:{
                int N;
                print("-----------------------Inverso-----------------------\n");
                print("informe o tamanho do vetor:\t");
                scanf("%d", &N);
                int v[N];
                print("Digite os valores do vetor separado por espaço:\t");
                for (int i = 0; i < N; i++)
                    scanf("%d", &v[i]);
                print("o vetor na ordem inversa é:\n");
                vetor_inverso(v, N);
                print("\n");
                print("-----------------------Inverso-----------------------\n");
                cont();
                }break;
            case 5:{
                print("-----------------------func-----------------------\n");
                print("func(4)= %d \n", func(4));
                print("func(5)= %d \n", func(5));
                print("-----------------------func-----------------------\n");
                cont();
            }break;   
            default:
                print("Opção invalida \n");
                break;
        }

    }while(opc != 0);
}

void mostra_menu(){
    char sp[70];
    for(int i = 0; i < 70; i++)
        sp[i] = '-';
    print("%s", sp);
    print("\n");
    print("1- Calcular MDC\n");
    print("%s", sp);
    print("\n");
    print("2- Manipular vetores\n");
    print("%s", sp);
    print("\n");
    print("3- função de Ackermann\n");
    print("%s", sp);
    print("\n");
    print("4- Imprimir veto em ordem inversa\n");
    print("%s", sp);
    print("\n");
    print("5- func(4) e func(5)\n");
    print("%s", sp);
    print("\n");
    print("0- Sair\n");
    print("%s", sp);
    print("\n");
}

int mdc(int x, int y){
    if(x >= y && x%y ==0) return y;
    if(x < y) return mdc(y, x);
    return mdc(y, x%y);
}

int menor(int *v, int N, int M){
    if(N <= 1){
        if (M > *v)
            return *v;
        return M;
    }
    if (M > *v)
        return menor(v + 1, N - 1, *v);
    return menor(v + 1, N - 1, M);
}
int maior(int * v, int N, int M){
    if (N <= 1){
        if (M < *v)
            return *v;
        return M;
    }
    if (M < *v)
        return maior(v + 1, N - 1, *v);
    return maior(v + 1, N - 1, M);
}
int soma(int *v, int N){
    if(N <= 1) return *v;
    return *v + soma(v+1, N-1);
}

unsigned long long int A(unsigned long long int m, unsigned long long int n)
{
    if (m == 0) return n+1;
    if(n == 0) return A(m-1, 1);
    return A(m-1, A(m, n-1));
}

void vetor_inverso(int * v, int n){
    if(n <= 1){
    print("%d ", *v);    
    } 
    else{
    vetor_inverso(v+1, n-1);
    print("%d ", *v);
    }
}

int func(int n){
    if(n == 1) return 1;
    return ((n-1)*func(n-1));
}

void cont(){
    print("Aperte Enter para Continuar\t");
    getchar();
    getchar();
    print("\n");
}