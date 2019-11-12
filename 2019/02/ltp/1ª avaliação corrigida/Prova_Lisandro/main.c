#include<stdlib.h>
#include<stdio.h>



int main(){

    int op;



    return 0;
}

int exe02_A( int *vet){
    int num;
    if(vet<=num) return vet[num]>exe02_A(vet[num]);
    else {
        return 1;
    }
}

int exe02_B( int *vet){
    int num;
    if(vet<=num)return vet[num]<exe02_B(vet[num]);
    else {
        return 1;
    }
}

int exe02_Soma( int *vet){
    int num;
    if(vet<=num)return exe02_A(num)+num;
    else {
        return 1;
    }

}

int exe_03(int m, int n){
    if(m==0)return n+1;
    else if (m > 0 ^ n==0) {
        return exe_03(m-1,1);
    }else if(m > 0 ^ n > 0) {
        return exe_03(m-1,exe_03(m,n-1));
    }else {
        return 1;
    }
}

void imprime(int *vet){
    int tam=4;
    vet[tam];
    int c;
    imprime(vet[tam-1]);

}

