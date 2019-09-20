#include<stdio.h>

int menu();
int mdc(int ,int );
int ackermann(int m,int n);
int soma_vet(int *v,int n,int soma);

int main(){

    int op1;

    do{
        op1=menu(); 
        switch(op1){
        
            case 0:{
                printf("Até Mais!!!\n\n");
            }break;

            case 1:{
                printf("========Questão 1======\n\n");

                int x,y;
                printf("Digite dois Valores (x,y):\n");
                scanf("%d\n",&x);
                scanf("%d",&y);
                mdc(x,y);
                printf("O mdc é : %d\n\n",mdc(x,y));
            }break;

            case 2:{
                printf("========Questão 2======\n\n");
                int vetor,i,tam;
                printf("Digite o Tamnho do Vetor:\n");
                scanf("%d",&tam);
                printf("Preencha o Vetor:\n");
                for(i=0;i<tam;i++){ 
                    scanf("%d",&vetor);
                }
            }break;
            
            case 3:{
                printf("========Questão 3======\n\n");

                int m1,n1;
                printf("Digite dois Valores (m,n):\n");
                scanf("%d\n",&m1);
                scanf("%d",&n1);
                ackermann(m1,n1);
                printf("O valor da Função é : %d\n\n",ackermann(m1,n1));
            }break;

            case 4:{}break;

            default:
            printf("Operação Invalida!!!\n\n");
        }
    }while( op1 != 0 );

    return 0;
}

int menu(){
    int op;
    printf("Digite de 1 a 4 para resolução das questões.\n");
    printf("Digite 0 para sair.\n");
    scanf("%d",&op);
}

int mdc(int x,int y){
    if(x<y){
        return 1;
    }else if(x>=y){
        return y;
    }else{
        return mdc(y,x-y);
    }
}

int ackermann(int m,int n){
    if(n==0){
        return n+1;
    }else if( m>0 && n==0){
        return ackermann(m-1,1);
    }else if( m>0 && n>0){
        return ackermann(m-1,ackermann(m,n-1));
    }
}

/*int vet(int *v,int i){
    if(i==0){
        return v[0];
    }else{
        return vet(v,i-1);
    }
}*/

/*int vet_in(int *v,int *v1,int tam){
    int aux[tam];
    int i,j;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(v[i]>v1[j]){
                aux[i]=v[i];
                v[i]=v1[j];
                v1[j]=aux[j];
            }
        }
            
    }
}*/

/*int fun_menor(int *v,int *v1,int tam){
    if(tam==0){
        return v[0];
    }else if(v>v1){
        return 
    }
}*/

int soma_vet(int *v,int n,int soma){
    if(n==0){
        return soma+=*v;
    }else{
        return soma+=soma_vet(v,n-1,soma);
    }
}