#include <stdio.h>

int A(int m, int n);
int soma(int *v,int n);
int maior(int *v,int n);
int menor(int *v,int n);
int mdc(int x,int y);
int main()
{
int op;

    do{
    printf("digite o 1 para entrar no primeiro exercicio: \n");
    printf("digite o 2 para entrar no segundo exercicio: \n");
    printf("digite o 3 para entrar no terceiro exercicio: \n");

    printf("digite 0 para encerrar\n");
    scanf("%d",&op);
        switch(op){

            case 1:
            {
                int x,y;
                printf("digite o valor de x e y para saber o mdc: ");
                scanf("%d%d",&x,&y);

                printf("o valor do mdc eh %d\n ",mdc(x,y));
                break;
            }
            case 2:
            {
                int i,n;
                printf("informe o tamanho do vetor: ");
                scanf("%d",&n);
                int v[n];
                    for(i=0;i<n;i++)
                    {
                        printf("informe o vetor[%d]: ",i);
                        scanf("%d",&v[i]);
                    }
                int oi;
                do{
                printf("\n\nAgora,por favor,insira a opção que deseja para manipular o vetor\nDigite 1 para localizar o menor\nDigite 2 para localizar o maior\nDigite 3 para calcular a soma do vetor\nDigite 0 para sair\n");
                    scanf("%d",&oi);
                    switch(oi)
                    {
                        case 1:
                        {
                            printf("o menor é %d\n",menor(v,n));
                            break;
                        }
                        case 2:
                        {
                            printf("o maior é %d\n",maior(v,n));
                            break;
                        }
                        case 3:
                        {
                            printf("o maior é %d\n",soma(v,n));
                            break;
                        }
                    }
                }while (oi!=0);
                break;
            
            }
            case 3:
            {
                int m,n;
                printf("insira o valor de M e N: ");
                scanf("%d%d",&m,&n);
                printf("o valor é %d\n",A(m,n));

            }
            
        }

    }while(op!=0);


    return 0;
}

//funções

int mdc(int x,int y)
{
    if(x%y==0)
    {
        return y;
    }
    else
    {
        
        int res=x%y;
        return mdc(y,res);
    }
}
int menor(int *v,int n)
{
    int i;
    int crtl;

    for(i=0;i<n;i++)
    {
        if(v[i]<v[i+1])
        {
            return v[i];
        }  
      
    }
}
int maior(int *v,int n)
{
    int i;
    int crtl;

    for(i=0;i<n;i++)
    {
        if(v[i]>v[i+1])
        {
            return v[i];
        }  
      
    }
            

}
int soma(int *v,int n)
{
    int crtl=0;
    int i;
    for(i=0;i<n;i++)
    {
        crtl=crtl+v[i];
    }
    return crtl;

}
int A(int m, int n)
{
    if(m==0)
    {
        return n+1;
    }
    if(m>0 && n == 0)
    {
        return A(m-1,1);
    }
    if (m>0 && n>0)    
    {
        printf("oi\n");
        return A(m-1,A(m,n-1));
    }  
}