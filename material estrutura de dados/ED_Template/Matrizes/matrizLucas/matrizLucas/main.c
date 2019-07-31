#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 3

int main (void) {
    
    char matriz[2][3][4];
    int linha, coluna, face , facec, x;
    
    system("clear");
    
    facec=1;
    x=0;
    
    for (face=0;face<4;face++)
        for (linha=0;linha<2;linha++)
            for  (coluna=0;coluna<3;coluna++){
                matriz[linha][coluna][face]=65+x++;
                //printf("Elemento [%d][%d][%d]: ", linha+1, coluna+1, face+1);
                //scanf("%d",&matriz[linha][coluna][face]);
            }
    
    for (face=0;face<4;face++){
        for  (linha=0;linha<2;linha++) {
            for (coluna=0;coluna<3;coluna++)
                printf("%4c",matriz[linha][coluna][face]);
            printf("\n"); }
        printf("\n");
    }
    
    //diagonalprinci=matriz[0][0]*matriz[1][1]*matriz[2][2];
    //diagonalsecund=matriz[0][2]*matriz[1][1]*matriz[2][0];
    
    //printf("Diagonal Princial=%d\nDiagonal Secundaria=%d\n",diagonalprinci, diagonalsecund);
    
    return 0;
}

//Considere uma matriz 3D 2x3x4 de inteiros. Faça funções/procedimentos
//0.Preencher Matriz com Zeros
//1.Preencher matriz com valores digitados pelo usuário
//2.Somar todos elementos da matriz
//3.Construir um vetor com a soma dos elementos de cada face
//4.Construir uma matriz 2D com os elementos das diagonais principais de cada face
//5.Multiplicar os elementos por um valor 'k' ('k' informado pelo usuário)
