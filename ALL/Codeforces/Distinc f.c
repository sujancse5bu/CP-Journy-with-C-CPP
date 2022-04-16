#include <stdio.h>
int main ()
{
    int i,j,d,n,a[100];
    scanf("%d",&n);
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        d=0;
        for (j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                d=2;
                break;
            }
        }
        if (d==0) printf("%d ",a[i]);
    }
    return 0;
}
