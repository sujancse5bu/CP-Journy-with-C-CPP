#include <stdio.h>
#include <iostream>
#define lli long long int
using namespace std;
bool isprime(lli n) /// This function returns 1 if the number is prime otherwise returns 0
{
	if (n==1) return 0;
	else if (n==2 || n==3) return 1;
	else if (n%2==0||n%3==0) return 0;
	else
	{
		lli i=5;
		while (i*i<=n)
		{
			if(n%i==0 || n%(i+2)==0) return 0;
			i+=6;
		}
		return 1;
	}
}
lli revrc (lli n)
{
    lli i,d;
    d=0;
    while (n!=0)
    {
        i=n%10;
        d+=i;
        n/=10;
        if (n!=0) d*=10;
    }
    return d;
}
int main ()
{
	lli n,v,t,x;
	while (scanf("%lld",&n)!=EOF)
    {
        v=isprime(n);
        if (v==0) cout<<n<<" is not prime."<<endl;
        else
        {
            x=revrc (n);
            t=isprime(n);
            if (t==0) cout<<n<<" is prime."<<endl;
            else cout<<n<<" is emirp."<<endl;
        }

    }

	return 0;
}
