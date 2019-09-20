#include "stdio.h"
#include "stdlib.h"
#define DIM 5
void imprimir(int[DIM][DIM],int,int);
int main(){
    int matrix[DIM][DIM] = {  {1, 2, 3, 4,5}, 
                              {6, 7, 8, 9,10}, 
                              {11, 12, 13, 14,15},
                              {16, 17, 18, 19,20},
                              {21, 22, 23, 24,25}};



   
    imprimir(matrix,0,0);
    return 0;
}




void imprimir(int m[DIM][DIM],int i,int j){
    printf("Index i = %d INDEX j = %d \n",m[i][j]);
    if(i == DIM && j == DIM){
        printf("parou \n");
        return ;
    }else
    if(i <= DIM-1){
        printf("\n");
        imprimir(m,i+1,j);
    }else
    if(j <= DIM-j){
        printf("%d ",m[i][j]);
        imprimir(m,i,j+1);
    }else{
         printf("%d ",m[i][j]);
         imprimir(m,i,j+1);

    }
        
}