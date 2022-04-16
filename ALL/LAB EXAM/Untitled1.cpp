
#include<stdio.h>
//void quicksort(int a[], int p,int r );
int i,j,m,n,temp,a[30];

int partition(int p, int r)
{
	m=a[r];
	i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=m)
		{
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return i+1;
}
void quicksort(int p,int r )
{
	if(p<r)
	{
		int q;
		q=partition(p,r);
		quicksort(p,q-1);
		quicksort(q+1,r);
	}
}
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	quicksort(0,n-1);
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
