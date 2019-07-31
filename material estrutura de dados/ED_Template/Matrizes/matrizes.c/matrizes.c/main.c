//
//  main.c
//  matrizes.c
//
//  Created by Rogério Sousa e Silva on 23/19/16.
//  Copyright © 2116 Rogério Sousa e Silva. All rights reserved.
//

#include <stdio.h>
#define L 11
#define C 11
void desenhaMatriz(char m[L][C]);
void giraMatriz90d(char m[L][C], char inv[L][C]);
void giraMatriz90e(char m[L][C], char inv[L][C]);
void espelhaMatriz(char m[L][C], char inv[L][C]);
void espelhaMatriznaDiagonal(char m[L][C], char inv[L][C]);
void matSeta(char m[L][C]);
void matDiagonal(char m[L][C]);
void matEspelho(char m[L][C]);


int main(int argc, const char * argv[]) {
    char mat[L][C];
    char mat_inv[L][C];
    matSeta(mat);
    printf("Matriz original\n");
    desenhaMatriz(mat);
    printf("\nMatriz girada 90º à esquerda!\n");
    giraMatriz90e(mat,mat_inv);
    desenhaMatriz(mat_inv);
    printf("\nMatriz girada mais 90º (180º) à esquerda!\n");
    giraMatriz90e(mat_inv,mat);
    desenhaMatriz(mat);
    printf("\nMatriz girada mais 90º (270º) à esquerda!\n");
    giraMatriz90e(mat,mat_inv);
    desenhaMatriz(mat_inv);
    printf("\nMatriz girada mais 90º (360º) à esquerda!, De volta a origem!\n");
    giraMatriz90e(mat_inv,mat);
    desenhaMatriz(mat);
    printf("\nMatriz Original! (Para observar o espelhamento)\n");
    matEspelho(mat);
    desenhaMatriz(mat);
    printf("\nMatriz espelhada! Observe o numero 8 (encontre o 8,kkkk)\n");
    espelhaMatriz(mat, mat_inv);
    desenhaMatriz(mat_inv);
    printf("\nMatriz Original! (Para observar o espelhamento)\n");
    matDiagonal(mat);
    desenhaMatriz(mat);
    printf("\nMatriz espelhada sobre a diagonal principal! (estragou a seta...)\n");
    espelhaMatriznaDiagonal(mat, mat_inv);
    desenhaMatriz(mat_inv);
    return 0;
}

void giraMatriz90e(char m[L][C], char inv[L][C]){
    int  i, j;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++)
            inv[i][j]=m[j][C-i-1];
        }
}

void giraMatriz90d(char m[L][C], char inv[L][C]){
    int  i, j;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++)
            inv[i][j]=m[L-j-1][i];
    }
}

void espelhaMatriz(char m[L][C], char inv[L][C]){
    int  i, j;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++)
            inv[i][C-1-j]=m[i][j];
    }
}
void espelhaMatriznaDiagonal(char m[L][C], char inv[L][C]){
    int  i, j;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++)
            inv[i][j]=m[j][i];
    }
}
void desenhaMatriz(char m[L][C]){
    int  j, k;
    for(j=0;j<L;j++){
        printf("\n[");
        for(k=0;k<C-1;k++)
            printf("%c ",m[j][k]);
        printf("%c]\n",m[j][k]);
    }
    printf("\n");
}

void matSeta(char m[L][C]){
    char mat[L][C] =
       {{'.','.','.','.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','#','.','.','.','.','.'},
        {'.','.','.','.','#','#','#','.','.','.','.'},
        {'.','.','.','#','#','#','#','#','.','.','.'},
        {'.','.','#','#','#','#','#','#','#','.','.'},
        {'8','#','#','#','#','#','#','#','#','#','.'},
        {'.','.','.','.','#','#','#','.','.','.','.'},
        {'.','.','.','.','#','#','#','.','.','.','.'},
        {'.','.','.','.','#','#','#','.','.','.','.'},
        {'.','.','.','.','#','#','#','.','.','.','.'},
        {'.','.','.','.','#','#','#' ,'.','.','.','.'}};
    for(int i=0;i<L;i++)
        for(int j=0;j<C;j++)
            m[i][j]=mat[i][j];
}

void matDiagonal(char m[L][C]){
    char mat[L][C] =
       {{'D','E','S','S','S','S','S','S','S','S','S'},
        {'I','D','S','S','S','S','S','S','S','S','S'},
        {'I','I','D','S','S','S','S','S','S','S','S'},
        {'I','I','I','D','S','S','S','S','S','S','S'},
        {'I','I','I','I','D','S','S','S','S','S','S'},
        {'8','I','I','I','I','D','S','S','S','S','S'},
        {'I','I','I','I','I','I','D','S','S','S','S'},
        {'I','I','I','I','I','I','I','D','S','S','S'},
        {'I','I','I','I','I','I','I','I','D','S','S'},
        {'I','I','I','I','I','I','I','I','I','D','S'},
        {'I','I','I','I','I','I','I','I','I','I','D'}};
    for(int i=0;i<L;i++)
        for(int j=0;j<C;j++)
            m[i][j]=mat[i][j];
}

void matEspelho(char m[L][C]){
    char mat[L][C] =
       {{'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'8','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'},
        {'E','E','E','E','E','M','D','D','D','D','D'}};
    for(int i=0;i<L;i++)
        for(int j=0;j<C;j++)
            m[i][j]=mat[i][j];
}

