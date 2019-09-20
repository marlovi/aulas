#include <stdio.h>
#include <string.h>
int menor = 9999999;
int maior = -999999;


int leia_v(int*, int);
int vmenor(int*,int);
int vmaior(int*, int);
int soma(int*, int);
void inverso(int*, int);
int m(int, int);
int A(int,int);

int main()
{
    int entrada;
    do{
        printf("\n=============================================\n");
        printf("(0) Sair\n");
        printf("(1) MDC\n");
        printf("(2) Vetores \n");
        printf("(3) Função de Ackermann\n");
        printf("(4) Vetor na ordem inversa \n");
        scanf("%d",&entrada);
        printf("\n");
        switch(entrada){
            case 1:{
                int x,y;
                printf("Informe X:\n");
                scanf("%d",&x);
                printf("Informe Y:\n");
                scanf("%d", &y);
                printf("MDC = %d \n", m(x, y));
            }break;
            case 2:{
                int n;
                printf("Informe o tamanho do vetor:\n");
                scanf("%d",&n);
                int v[n];
                leia_v(v,n);
                printf("Menor: %d\n",vmenor(v,n-1));
                printf("Maior: %d\n", vmaior(v, n - 1));
                printf("Soma: %d\n", soma(v, n - 1));
            }break;
            case 3:{
                int m,n;
                printf("Informe m:\n");
                scanf("%d",&m);
                printf("Informe n:\n");
                scanf("%d", &n);
                printf("A(%d,%d) = %d\n",m,n,A(m,n));
            }break;
            case 4:{
                int n;
                printf("Informe o tamanho do vetor:\n");
                scanf("%d", &n);
                int v[n];
                leia_v(v, n);
                inverso(v, n-1);
            }break;
            case 0: break;
            default: break;
        }

    }while(entrada!=0);


    return 0;
}

int leia_v(int* v,int n){
    int i;
    for(i=0;i<n;i++){
        printf("V[%d] = \n",i);
        scanf("%d",&v[i]);
    }
}



int m(int x,int y){
    if(x>=y && x%y==0)return y;
    else if(x<y)return m(y,x);
    else return m(y,x%y);
}

int vmenor(int* v,int n){
    if(n==0){
        if(v[0]<menor){menor=v[0];}
        return menor;
    }
    else if(v[n]<menor){
        menor=v[n];
        return vmenor(v,n-1);
    }
}

int vmaior(int *v, int n)
{
    if (n == 0)
    {
        if (v[0] > maior)
        {
            maior = v[0];
        }
        return maior;
    }
    else if (v[n] > maior)
    {
        maior = v[n];
        return vmaior(v, n - 1);
    }
}

int soma(int *v, int n){
    if(n==0){
        return v[0];
    }
    else return v[n]+soma(v,n-1);
}

void inverso(int *v,int n){
    if(n==0){
        printf("V[%d] = %d\n",n,v[n]);
    }
    else{
        printf("V[%d] = %d\n", n, v[n]);
        return inverso(v,n-1);
    }
}



int A(int m, int n){
    if(m==0)return n+1;
    else if(m>0 && n==0)return A(m-1,1);
    else if(m>0 && n>0)return A(m-1,A(m,n-1));
}
