#include <stdio.h>

int arckermann(int m, int n){
    if (m == 0){
        return n + 1;
    }else if(m > 0 && n == 0){
        return arckermann(m -1,1);
    }else if(m > 0 && n > 0){
        return arckermann(m - 1, arckermann(m,n-1));
    }
}

int mdc(int x, int y){
    if(x >= y && x%y == 0){
        return y;
    }else if(x < y){
        return mdc(y,x);
    }else{
        return mdc(y,x%y);
    }
}

int vetor(int vet[], int tam)
{
    if (tam == 1){
        return vet[0];
    }
    else{
        printf("[%d]",vet[tam-1]);
        return vetor(vet, tam - 1);
    }
}

int menor_vetor(int vet[], int tam){

}

int maior_vetor(int vet[], int tam){

}

int soma_vetor(int vet [],int tam){
    if(tam == 1){
        return vet[0];
    }else{
        return vet[tam-1] + soma_vetor(vet,tam - 1);
    }
}







int main(){
    int v;
    do{
      
        printf("Selecione a questao desejada: ");
        scanf("%d",&v);

        switch(v){
            case 0: printf("Bye\n");
                break;
            case 1:{
                int res, x, y;
                printf("Digite os valore x e y da funcao mdc(x,y):  ");
                scanf("%d %d", &x, &y);
                res = mdc(x, y);
                printf("%d\n", res);
            }
                break;
            case 2:{
                int tam = 3, resa, resb,resc;
                int vet[tam];

                for(int i = 0;i < tam; i++){
                    scanf("%d",&vet[i]);
                }

                resc = soma_vetor(vet,tam);
                printf("%d\n",resc);

            }
                break;
            case 3:{
                int res,m,n;
                printf("Digite os valore m e n da funcao ackermann(m,n):  ");
                scanf("%d %d",&m,&n);
                res = arckermann(m,n);
                printf("%d\n",res);
            }
                break;
            case 4:{
                int tam = 3, res;
                int vet[tam];

                for (int i = 0; i < tam; i++)
                {
                    scanf("%d", &vet[i]);
                }

                res = vetor(vet, tam);
                printf("[%d]\n",res);
            }
            default: printf("Opcao Invalida\n");
                break;
        }

    }while(v != 0);
    return 0;
}