#include "stdio.h"
#include "stdlib.h"
int menu();
void leiaovetor(int*, int*);
void imprimaovetor(int*,int*,int*,int*);
void lermatriz(int**,int*);
void imprimirmatriz(int**t, int*);
int main(){
  int op =0;
  int x;
  int y,z;
     
     do{
         op = menu();
             switch(op){
             case 0:
             printf("OBRIGADO POR USAR A APLICAÇÃO\n");
             break;
             case 1:{

             }break;
             
             case 2:{
                int tam1;
                int tam2;
                int *vetor0;
                int *vetor1;
                int *vetor2;

                printf("Informe o tamanho do Vetor1 \n");
                scanf("%d",&tam1);
                printf("Informe o tamanho do Vetor2 \n");
                scanf("%d",&tam2);
                vetor0 = (int*) malloc(tam1 * sizeof(int));
                printf("Informe os numeros do Vetor1\n");
                leiaovetor(vetor0, &tam1);
                vetor1 = (int*) malloc(tam2 * sizeof(int));
                printf("Informe os numeros do Vetor2\n");
                leiaovetor(vetor1, &tam2);
                
                imprimaovetor(vetor0,&tam1,vetor1,&tam2);

                
                   }break;
                   case 3:{
                        int **mat,l,c,x,tamanho;
                        int n = 20;
                        int nota_final;
                        int matricula, media_prova, media_trabalho;
                        
                        mat = (int**)malloc(n*sizeof(int*));
                        
                        for(l = 0; l < 5;l++){
                            for(c=0; c < 4; c++){
                                mat[x] = (int*) malloc(n*sizeof(int));
                            }
                        }
                         
                         printf("Informe o numero da matricula\n");
                         scanf("%d",&matricula);
                        
                         printf("Infoeme a media das provas\n");
                         scanf("%d",&media_prova);
                         
                         printf("Infoeme a media dos trabalhos\n");
                         scanf("%d",&media_trabalho);
                         
                         nota_final = media_prova + media_trabalho;
                         printf("%d\n",nota_final);
                         
                         lermatriz(mat,&tamanho);
                         imprimirmatriz(mat,&tamanho);
                        
                            for(c<4;c=0;c--){
                                for(l<5;l=0;l--){
                                    free(**mat);
                            }
                        }
                        }
                            }
                         
                        

                   
 } while(op != 0);

 return 0;
} 
int menu(){
    int v;
    printf("MENU\n");
    printf("Digite 0 para sair\n");
    printf("Digite 1 para o primerio exercicio\n");
    printf("Digite 2 para o segundo exercicio\n");
    printf("Digite 3 para o terceiro exercicio \n");
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



void imprimaovetor(int *vetor,int *tamanho, int *vetor1, int *tamanho1){
    int i = 0;
    *tamanho = *tamanho + *tamanho1;
    for(; i < *tamanho; i++){
        if ((vetor[i] == vetor1[i]) && (vetor[i] != 0 ) && (vetor1[i] != 0)){
        printf("Vetor3 = %d \n",i+1,vetor[i]);
        }
    }
}


void lermatriz(int **mat,int *tamanho){
    int l;
    int c;
    int n =20;
    printf("informe os valores da matriz\n");
    for(c=0 ;c < 4;c++){
        for(l=0 ;l < 5;l++){
            scanf("%d",&mat[c][l]);

        }
    }
}
void imprimirmatriz(int **mat, int*tamanho){
    int l,c;
    for(c=0;c<4;c++){
        for(l=0;l<5;l++){
            printf("%d \n",mat[c][l]);
            printf("/n");
        }
    }
}
    
    