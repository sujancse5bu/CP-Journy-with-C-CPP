#include<stdio.h>
int main()
{
	int x,d,s,p,f,i,j,k,e[15],o[15];
	j=0;
	k=0;
	d=0;
	for (i=0; i<15; i++)
	{
		scanf("%d",&x);
		if (x%2==0)
		{
			e[j]=x;
			j++;
		}
		else 
		{
			o[k]=x;
			k++;
		}
	}
	while (1)
	{
		if (j>0)
		{
			
			for (i=0; i<j && i<5; i++)
			{
				printf("par[%d] = %d\n",i,e[i]);
				d++;
			}
			j=j-i;
		}
		if (j>0) 
		{
			s=i;
			for (p=0;p<5 && p<j; p++,s++)
			{
				printf("par[%d] = %d\n",p,e[s]);
				d++;
				if (d==15) break;
				j=j-p;
			}
		}
		if (d==15) break;
	}
	return 0;
}