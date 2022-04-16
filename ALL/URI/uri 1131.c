#include<stdio.h>
int main()
{
	int a,b,c,x,y,z,k;
	x=0;
	y=0;
	z=0;
	k=0;
	do
	{
		scanf("%d%d",&a,&b);
		printf("Novo grenal (1-sim 2-nao)\n");
		if (a>b) x++;
		else if (b>a) y++;
		else z++;
		k++;
	}
	while (scanf("%d",&c)==1 && c==1);
	printf("%d grenais\n",k);
	printf("Inter:%d\n",x);
	printf("Gremio:%d\n",y);
	printf("Empates:%d\n",z);
	printf("Inter venceu mais\n");
	return 0;
}