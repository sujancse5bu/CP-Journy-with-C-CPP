#include<stdio.h>
#include<math.h>
int main()
{
	int i,p,o=2,x,y,x1,y1;
	scanf("%d",&p);
	if (p%2==0){x=p/2;y=x;}
	else {x=p/2;y=x+1;}
	while (o==2)
	{
		x1=0;y1=0;
		for (i=2; i<=sqrt(x); i++)
		{
			if (x%i==0) {x1=1;break;}
		}
		for (i=2; i<=sqrt(y); i++)
		{
			if (y%i==0) {y1=1;break;}
		}
		if (x1==1 && y1==1) o=1;
		else{y--;x++;}
	}
	printf("%d %d\n",x,y);
	return 0;
}