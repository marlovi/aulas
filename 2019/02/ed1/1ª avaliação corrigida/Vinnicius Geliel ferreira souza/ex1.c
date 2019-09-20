#include <stdio.h>
#include <stdlib.h>
int ex3(int ,int ,int);
int main()
{
	int  n=0;
	scanf("%d",&n);
	if (n==1)
	{

	}
	if (n==2)
	{
		/* code */
	}
	if (n==3)
	{
		int x, y, a;
		scanf ("%d",&x);
		scanf ("%d",&y);
		printf("%d\n",ex3(x,y,a));

	}
	if (n==4)
	{
		int x[5];
        int i;
        for(i=0;i<=5;i++){
            scanf("%d",&x[i]);
        }
        for(i=0;i<=5;i++){
            printf("%d\n",x[i]);
        }
	}

	return 0;
}

void ex1(float x,float y){
}
int ex2(int x,int y){
}
int ex3(int x,int y,int a){
	if (x==0)
	{
		return y+1;
	}
	else if (x>0 && y==0)
	{
		return a=(x-1,1);
	}
	else if (x>0 && y>0)
	{
		return a=(x-1,a=(x,y-1));
	}
}
