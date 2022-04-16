#include<stdio.h>
int main()
{
	int i,j,x,y;
	scanf("%d%d",&y,&x);
	for (i=0;i<y;i++)
	{
		for (j=0;j<x;j++)
		{
			if (i%2==0) printf("#");
			else if (i%4==1 && j==x-1) printf("#");
			else if (i%4==3 && j==0) printf("#");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}