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

int main ()
{
	lli n;
	cout<<"  This program for checking Prime number."<<endl;
	cout<<"  Enter less than one for end."<<endl;
	cout<<endl<<" Please Enter a number:";
	while (scanf("%lld",&n)!=EOF)
    {
    	if (n<1) break;
        if (isprime(n)) cout<<"  "<<n<<" is Prime."<<endl;
        else cout<<"  "<<n<<" isn't Prime."<<endl;
        cout<<endl<<" Please Enter another number:";
    }
    cout<<"       Thanks"<<endl;
	return 0;
}
