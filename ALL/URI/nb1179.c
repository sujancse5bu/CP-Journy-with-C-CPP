#include<stdio.h>
int main()
{
	int i,j,s,t,e[20],o[20];
	s=0;
	t=0;
	for (i=0; i<15; i++)
	{
		scanf("%d",&j);
		if (j%2==0)
		{
			e[s]=j;
			s++;
		}
		else
		{
			o[t]=j;
			t++;
		}
	}
	i=0;
	while (i<s && i<5)
	{
		printf("par[%d] = %d\n",i,e[i]);
		i++;
	}
	j=0;
	int q=0;
	while ( j<t && j<10)
	{
		printf("impar[%d] = %d\n",q,o[j]);
		j++;
		q++;
		if (q==5) q=0;
	}
	q=0;
	while (i<s)
	{
		printf("par[%d] = %d\n",q,e[i]);
		q++;
		i++;
		if (q==5) q=0;
	}
	q=0;
	while ( j<t)
	{
		printf("impar[%d] = %d\n",q,o[j]);
		j++;
		q++;
		if (q==5) q=0;
	}
	return 0;
}