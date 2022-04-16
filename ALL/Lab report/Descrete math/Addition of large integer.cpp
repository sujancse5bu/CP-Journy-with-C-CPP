#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main ()
{
	lli i,j,k,l,m=0,n=0,x,y,z;
	char a[100000],b[100000],c[100000];
	cout<<"Please enter the first number: ";
	cin>>a;
	cout<<"Please enter the second number: ";
	cin>>b;
	k=strlen(a);
	l=strlen(b);
	x=0;
	while(k>0 && l>0)
	{
		k--;
		l--;
		m=n;
		m+=(a[k]-48);
		m+=(b[l]-48);
		n=m/10;
		m=m%10;
		c[x]=m+48;
		x++;
	}
	if (k>0)
	{
		for(y=k-1;y>=0;y--)
		{
			m=n;
	    	m+=(a[y]-48);
	    	n=m/10;
	    	m=m%10;
    		c[x]=m+48;
	    	x++;
		}
	}
	else if (l>0)
	{
    	for(y=l-1;y>=0;y--)
		{
			m=n;
	    	m+=(b[y]-48);
	    	n=m/10;
	    	m=m%10;
    		c[x]=m+48;
	    	x++;
		}
	}
	cout<<"  The Additional result: ";
	if (n>0) printf("%d",n);
	for (i=x-1;i>=0;i--) printf("%c",c[i]);
	return 0;
}
