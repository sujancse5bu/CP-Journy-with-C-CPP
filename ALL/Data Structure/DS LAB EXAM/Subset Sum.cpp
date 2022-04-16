#include <math.h>
#include <stdio.h>
#include <string.h>
int a[1000],b[1000],x[1000];
char c[1000][1000];
void binary_driver (int n)
{
	for (int i=1;i<=n;i++)
	{
		int j=0;
		int q=i;
		while (q>0)
		{
			int p=q%2;
			if (p==0) c[i][j]='0';
			else c[i][j]='1';
			j++;
			q/=2;
		}
	}
}
int main ()
{
	int i,j,k,l,n,s,d;
	scanf ("%d",&n);
	scanf ("%d",&d);
	for (i=0;i<n;i++) scanf ("%d",&a[i]);
	binary_driver(pow(2,n));
	l=pow(2,n);
	for (i=0;i<=l;i++) 
	{
		k=strlen(c[i]);
		s=0;
		for (j=0;j<k;j++) 
		{
			if (c[i][j]=='1') s+=a[j];
		}
		if (s==d)
		{
			printf ("YES.\nSubset: ");
			for (j=0;j<k;j++) 
		{
			if (c[i][j]=='1') printf ("%d ",a[j]);
		}
			
			
			return 0;
		}
	}
	
	
	return 0;
}
