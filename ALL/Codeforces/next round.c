///   OmShantiHari
///   Sujan Mridha
///   CSE, University of Barishal
#include<stdio.h>
int main()
{
	int a,i,b,c,x,y,n;
	scanf("%d %d",&a,&b);
	i=0;
	n=0;
	y=0;
	while (i<a)
	{
        scanf("%d",&x);
        if (i<b && x!=0)
        {
            n++;
            y=x;
        }
        if (i>=b&& y==x && x>0)
        {
            n++;
            y=x;
        }
        i++;
	}
	printf("%d\n",n);
	return 0;
}
