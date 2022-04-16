#include<stdio.h>
int main()
{
	int i,p,m,n,a[100009];
	i=0;m=0;p=0;
	scanf("%d",&n);
	while (i<n)
	{
		scanf("%d",&a[i]);
		if (i!=0)
		{
			if (a[i]>0)p=p+a[i];
			else if (a[i]==-1 && p==0) m+=1;
			else if (a[i]==-1 && p>0) p-=1;
		}
		else
		{
			if (a[i]>0) p=a[i];
			else m=1;
		}
		i++;
	}
	printf("%d\n",m);
	return 0;
}