#include <stdio.h>
long long int lcm (long long int x, int y)
{
    int i,v,z;
    if (x>y)
	{
		v=x;
		x=y;
		y=v;
	}
	if (x==0) return x;
	v=y;
	while (y%x!=0) y+=v;
	return y;
}
int main ()
{
    int i,n,x,a[100000];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    i=1;
    while (i<n)
    {
        a[i]=lcm (a[i-1],a[i]);
        i++;
    }
    printf ("%d\n",a[i-1]);
    return 0;
}
