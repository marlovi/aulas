#include <stdio.h>



int q5(int);


int main(){
    printf("F(4) = %d\nF(5) = %d\n",q5(4),q5(5));

    return 0;
}

int q5(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
        return (n - 1) * q5(n - 1);
}