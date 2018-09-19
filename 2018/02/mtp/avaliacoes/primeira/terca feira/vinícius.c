#include <stdio.h>
#include <stdlib.h>

int menu();
void decrescente(int*, int t);
void velha (char***,int);
void vetor(int*,int*,int*,int,int,int);

int main(){
    int op;
    do{
        op = menu();
        switch(op){
            case 0:{
                printf("Obrigado por usar o programa.\n");
                break;
            }
            case 1:{
                char ***mat;
                int tam = 3,l;
                mat = (char***) malloc(tam * sizeof(char**) );
                for(l=0;l<tam;l++){
                    mat[l] = (char**) calloc(tam, sizeof(char*));
                }  
                for(l=0;l<tam;l++){
                    mat[l] = (char*) realloc(3, sizeof(char));
                }
                 velha(mat,tam);
                free(mat);

               break; 
            }
            case 2:{
                printf("informe o tamanho do vetor 1 e 2\n");
                int a,b,tam;
                scanf("%d",&a);
                scanf("%d",&b);
                tam = a+b;
                int* vet1;
                int* vet2;
                int* vet3;
                vet1 = (int*) malloc (a * sizeof(int));
                vet2 =  (int*) malloc (b * sizeof(int));
                vet3 =  (int*) malloc (tam* sizeof(int));
                
                vetor(vet1,vet2,vet3,a,b,tam);
                
                free(vet1);
                free(vet2);
                free(vet3);
                break;
            }
            case 3:{
                int* vet;
                int tam;
               
                printf("Informe o tamanho do vetor.\n");
                scanf("%d",&tam);
                
                vet = (int*) malloc(tam * sizeof(int));
                
                decrescente(vet,tam);
                
                free(vet);
            }
            break;
        }

    }while(op!=0);
}
int menu(){
    int op;
    printf("Para sair do programa digite 0.\n");
    printf("Para o problema do jogo da velha digite 1.\n");
    printf("Para unir dois vetores do vetor digite 2.\n");
    printf("Para ordenar um vetor em ordem decrescente digite 3.\n ");
    scanf("%d",&op);
    return op;

}
void velha(char ***m,int t){
    int i,j,k;
    int a,b;
    char e;
   


}
void vetor(int *v1,int *v2,int *v3,int a,int b,int t){
    int i,j,k=0,r;
   printf("Informe os númeors do primeiro vetor.\n");
    for(i = 0; i < a; i++){
        scanf("%d",&v1[i]);
    }
   printf("Informe os números do segundo vetor.\n");
    for(r = 0; r < b; r++){
        scanf("%d",&v2[r]);
    }   
    
    for(j = 0; j < t; j++){    
       if(j<a){
       v3[j] = v1[j];
       }
       if(j>=a){
           v3[j]=v2[k];
           k++;
       }
    }
 
    printf("vetor 3 = {");
  
    for(i = 0; i < t; i++){
     printf(" %d",v3[i]);
    }
    printf(" }\n");
    
}
void decrescente(int *v,int t){
    int i,a,j;
   
    printf("Informe os valore que seram inseridos dentro do vetor.\n");
    for(i=0;i<t;i++){
        scanf("%d",&v[i]);
    }
   
    for(i=0;i<t;i++){
      for(j=0;j<t;j++){
            if(v[i]>v[j]){
             a = v[i];
             v[i]=v[j];
             v[j]=a;
            }
        }
    }
    printf("vetor em ordem decrescente = ");
    for(i=0;i<t;i++){
        printf("%d > ",v[i]);
    }
    printf("\n\n\n");

}