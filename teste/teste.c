#include "stdio.h"


int fat(int *n){
    if(*n == 0 ) return 1;
    else{
        int v = *n -1;
        return (*n) * fat( (*n -1 ) );    
    
    } 
}


int main(){
    int n=5;
    printf("%d ",fat(&n));
    return 0;
}