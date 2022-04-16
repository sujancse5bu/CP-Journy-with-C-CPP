#include<stdio.h>
//void quicksort(int a[], int p,int r );
int partition(int a[],int ,int);
int i ,j,m,n,temp;

void quicksort(int a[],int p,int r )
{
	if(p<r)
	{
		int q;
		q=partition(a[20],p,r);
		quicksort(a[20],p,q-1);
		quicksort(a[20],q+1,r);
	}

}
int partition(int a[],int p, int r)
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

int main()
{
	int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	quicksort(a[20],0,n-1);
	for(i=0;i<n;i++) printf("%d",a[i]);
	return 0;
}
