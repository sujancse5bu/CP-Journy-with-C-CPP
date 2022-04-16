#include<stdio.h>
int main()
{
	int N,x,y;
	scanf("%d",&N);
	x=N%60;
	N=N/60;
	y=N%60;
	N=N/60;
	printf("%d:%d:%d\n",N,y,x);
}