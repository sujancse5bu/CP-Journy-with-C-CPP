#include <stdio.h>
#define lli long long int
lli a[10000];
void quicksort(lli start,lli shes);
lli Partition(lli start,lli shes);
int main ()
{
    lli n,i;
    n=10;
    scanf ("%d",&n);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    quicksort(0,n-1);
    for(i=0;i<n;i++) printf("%lld ",a[i]);
    return 0;
}

void quicksort(lli start,lli shes)
{
    if(start<shes)
    {
        lli q=Partition(start, shes);
        quicksort(start,q-1);
        quicksort(q+1,shes);
    }
}

lli Partition(lli start,lli shes)
{
    lli x=a[shes];
    lli i=start-1;
    for (lli j=start;j<=shes-1;j++)
    {
        if (a[j]<=x)
        {
            i++;
            lli y=a[i];
            a[i]=a[j];
            a[j]=y;
        }
    }
    lli y=a[i+1];
    a[i+1]=a[shes];
    a[shes]=y;
    return i+1;
}

