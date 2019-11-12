#include "stdio.h"
#define VETOR 3
int menu();
int mdc(int um,int dois);
int Vetor(int v[],int posicao);
int Ackermann(int m,int n);
int VetorInverso(int vet[]);
int UltimaFuncao(int);
int main(){
    int op;
    do{ 
        op = menu();
        switch(op){

        case 1:{
            int x,y;
            printf("Declare dois valores para calculo do maximo divisor comum: \n");
            scanf("%d %d",&x,&y);
            int aux=0;
            aux = mdc(x,y);
            printf("O valor do calculo do mdc será: %d\n",aux);
            return 0;
        }
        case 2:{
            int vet[VETOR] = {1,2,3};
            int posicao=0;
            //printf("Informe os valores para este vetor: \n");
            //for(int i=0;i<VET;i++){
                //scanf("%d",&vet[i]);
            //}
            int aux=0;
            aux = Vetor(vet,posicao);
            printf("O menor elemento do vetor será: %d\n",aux);
            // TRES PARAMETRO (MENOR, POSICAO, VERT)
            return 0;
        }
        case 3:{
            int m,n;
            printf("Declare os tamanhos m e n \n");
            scanf("%d %d",&m,&n);
            int aux=0;
            aux = Ackermann(m,n);
            printf("O resultado da função matemática será de:%d\n",aux);
            return 0;
        }
        case 4:{
            int vetor[VETOR];
            int aux=0;
            printf("Neste programa vc verá a ordem de um vetor iversa!\n");
            aux = VetorInverso(vetor);
            printf("A ordem será: %d\n",aux);
            
            return 0;        
        }
        case 5:{
            printf("Neste exercício voce verá a resposta para a funcao!\n");
            int aux=0;
            int valor;
            printf("Digite um valor para análise na funcção!\n");
            scanf("%d",&valor);
            aux = UltimaFuncao(valor);
            printf("A resposta será de: %d\n",aux);
            return 0;
        }

        break;
        }
        

    }while(op!=0);

    return 0;
}

int menu(){
    
    int op;
    printf("Digite os numeros de 1 a 5 para o exercicio que querer: \n");
    printf("Digite 0 para sair!\n");
    scanf("%d",&op);

    return op;

}

int mdc(int um,int dois){
    if(um >= dois  && um % dois == 0){
        return (dois); // 
    }  
    else if(um < dois){
        return (dois,um);
    }
    else {
        return mdc(dois,um%dois);
    }

}
int Vetor(int v[],int posicao){
    if(posicao == 0){
        return v[0];
    }
    else if(posicao == v[VETOR]){
        return v[VETOR];
    }
    
    }
    
int Ackermann(int m,int n){
    if(m==0){
        return (n+1);
    }
    else if(m>0 && n==0){
        return Ackermann(m-1,1);
    }
    else {
        return Ackermann(m-1,Ackermann(m,n-1));
    }

}
int VetorInverso(int vet[]){

    return VetorInverso(vet-1);
}
int UltimaFuncao(int n){
    if(n == 1){
        return n;
    }
    else {
    return UltimaFuncao(n-1)*(n-1);
    printf("Portanto, os valores de F(4) É 6 e F(5) É 24!");

}
}


