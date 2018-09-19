#include <stdio.h>
#include <stdlib.h>
 
int menu();
void leiaovetor(int*, int*);
void intercecao(int*,int*,int*,int*,int*);
void impressao(int*,int*,int*,int*,int*);
 void impressao2(int*,int*);
 
 int main(){
    int op;
    do{
         op = menu();
        switch(op){
            case 0: 
            printf("Obrigado por Utilizar este programa\n");
            break;
            case 2: {
                
                int tamanho1;
                int tamanho2;
                int *vetor0;
                int *vetor1;
                int *vetor2;
                int a;
                

                printf("Informe o tamanho do V1 \n");
                scanf("%d",&tamanho1);
                printf("Informe o tamanho do V2 \n");
                scanf("%d",&tamanho2);
                vetor0 = (int*) malloc(tamanho1 * sizeof(int));
                printf("Informe os numeros do V1\n");
                leiaovetor(vetor0, &tamanho1);
                vetor1 = (int*) malloc(tamanho2 * sizeof(int));
                printf("Informe os numeros do V2\n");
                leiaovetor(vetor1, &tamanho2);
                intercecao(vetor0,&tamanho1,vetor1,&tamanho2,vetor2);
                a = intercecao(vetor0,&tamanho1,vetor1,&tamanho2,vetor2);
                vetor2 = (int*) malloc(a* sizeof(int));
                impressao(vetor0,&tamanho1,vetor1,&tamanho2,vetor2);
                impressao2(vetor2,&a);
                free(vetor1);
                free(vetor2);
            }break;

            default: printf("Opção Invalida \n");
        }
    }while(op !=0);
    return 0;
 }

  int menu(){
    int v;
    printf("Digite 0 para SAIR\n");
    printf("Digite 1 para a QUESTAO 1\n");
    printf("Digite 2 para a QUESTAO 2\n");
    printf("Digite 3 para a QUESTAO 3\n");
    scanf("%d",&v);
    return v;
}

void leiaovetor(int *vetor, int *tamanho){
    int i= 0;
    for( ; i< *tamanho; i++){
        printf("Informe o %dº numero do vetor \n",i+1);
        scanf("%d",&vetor[i]);
    }

}



void intercecao(int *vetor,int *tamanho, int *vetor1, int *tamanho1, int *vetor2){
    int i = 0;
    int j = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    for(; i < *tamanho; i++){
        for(; j < *tamanho1; j++){
            if (vetor[i] == vetor1[j]){
                y = y+1;
                
            }
        }
    }
    return y;
} 

void impressao(int *vetor,int *tamanho, int *vetor1, int *tamanho1, int *vetor2){
    int i = 0;
    int j = 0;
    int x = 0;
    int y = 0;
    int z = 0;
        for(; i < *tamanho; i++){
        for(; j < *tamanho1; j++) {
            if (vetor[i] == vetor1[j]){
                vetor2[z] = vetor[j];
                z = z +1;
        }
    }
}   
}

void impressao2(int *vetor, int *tamanho){
    int i= 0;
    for( ; i< *tamanho; i++){
        printf("V3 = %d\n",vetor[i]);
    }

}

