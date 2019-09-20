#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int Amn(double,int);
int main (){
    int n;
    double m;
    printf("M");
    scanf("%lf", &m);    
    printf("N");
    scanf("%d", &n);    
    Amn(m,n);
    return 0;
}

int Amn(double m, int n){
    int aux=0;
    if(m==0){
        return Amn(m, n+1);
        printf("%lf %d\n",m, n);
    }else if(m > 0 && n == 0){   
        return Amn(m -1.1,n);
        printf("%lf %d\n",m, n);
    }else if(m>0&&n>0){
        return Amn(m-1,Amn(m,n-1));
        printf("%lf %d\n",m, n);
    }
    return 0;
}
