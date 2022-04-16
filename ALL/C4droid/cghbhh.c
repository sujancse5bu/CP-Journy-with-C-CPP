#include<stdio.h>
int main()
{
int a,b,i,j,k;
long long int x,y,z;

scanf("%d",&a);
b=a;
for (i=1; i<b+1; i++)
{
x=1;
y=1;
a=b;
for (j=a,k=1;j<i,k<i; k++, j--)
{
x=x*a;
a--;
y=y*k;
}
z=x/y;
printf("%lld ",z);
}
printf("1\n");
return 0;
}