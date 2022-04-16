#include<stdio.h>
int main()
{
	int a[11]={1,10,20,30,40,50,60,70,80,90,100};
	int m,l,h,n;
	l=0;
	h=10;
	scanf("%d",&n);
	while (l<=h)
	{
		m=(l+h)/2;
		if (n==a[m])
		{
			break;
		}
		else if (n<a[m]) h=m+1;
		else l=m+1;
	}
	if (h<l)
	printf("not found");
	else printf("found");
	return 0;
}