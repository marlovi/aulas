#include "stdio.h"
#include "stdlib.h"





int main(){
    int linha = 5; 
    int coluna =3;
    int i,j;
    int aux =0;
     int **p; // reservando um espaço de memória
          p = ( int**) malloc(sizeof( int*)*linha); //allocando um espaço onde a primeira dimensão aponta para outra dismensão 

    for(i = 0 ; i< linha  ; i++){      
        
        p[i] = ( int*) malloc(sizeof( int)*coluna);
        if(p[i]==NULL) 
            printf("Não alocou a posição %d ",i);
    }



    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            p[i][j] = aux;
            aux = aux + 2;
        }
    }

    //printf("\n\n   %d ",p[4][4]);
    for(i=0;i<linha;i++){
        if(p[i]!=NULL)
        for(j=0;j<coluna;j++){
            printf("m[%d][%d] = %d ",i,j,p[i][j]);
        }
        printf("\n");
    }


    return 0;
}

