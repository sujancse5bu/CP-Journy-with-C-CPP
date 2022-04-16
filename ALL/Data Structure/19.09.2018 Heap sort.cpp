#include <stdio.h>
int a[10000];
void heipyfy(int a[],int n,int i)
{
	int largest=i,l,r,tmp;
	l=2*i+1;
	r=2*i+2;
	if(l<n&&a[l]>a[largest]) largest=l;
	if(r<n&&a[r]>a[largest]) largest=r;
	if(largest!=i) 
	{
		tmp=a[i];
		a[i]=a[largest];
		a[largest]=tmp;
		heipyfy(a,n,largest);
	}
	
}
void HeapSort(int a[],int n)
{
	int i,tmp;
	for(i=n/2-1;i>=0;i--) heipyfy(a,n,i);
	for(i=n-1;i>=0;i--)
	{
		tmp=a[i];
		a[i]=a[0];
		a[0]=tmp;
		heipyfy(a,i,0);
	}
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    HeapSort(a,n);
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
