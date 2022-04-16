#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,ev=0,o=0,p=0,n=0;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a%2==0) ev=1;
	if (b%2==0) ev=ev+1;
	if (c%2==0) ev=ev+1;
	if (d%2==0) ev=ev+1;
	if (e%2==0) ev=ev+1;
	if (abs(a%2)==1) o=1;
	if (abs(b%2)==1) o=o+1;
	if (abs(c%2)==1) o=o+1;
	if (abs(d%2)==1) o=o+1;
	if (abs(e%2)==1) o=o+1;
	if (a>0) p=1;
	if (b>0) p=p+1;
	if (c>0) p=p+1;
	if (d>0) p=p+1;
	if (e>0) p=p+1;
	if (a<0) n=n+1;
	if (b<0) n=n+1;
	if (c<0) n=n+1;
	if (d<0) n=n+1;
	if (e<0) n=n+1;
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",ev,o,p,n);
	return 0;
}