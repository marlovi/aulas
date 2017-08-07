#include "stdio.h"

void soma(int*,int*);
int main(){
  int x=10,y=30;

  soma(&x,&y);
  printf (" x = %d    Y = %d     \n",x,y);   
  return 0;
}

void soma(int *a, int *b){
  (*a)++;
  (*b)++;

  
}
