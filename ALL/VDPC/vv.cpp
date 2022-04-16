#include <stdio.h>
#include <iostream>
#include <cmath>
#define lli long long int
using namespace std;
int main ()
{
	lli n,v=0,t,x,k,a,b,c;
	double f;
	cin>>n;
	for (int i=n+1;;i++)
    {
        x=i*i+n*n;
        a=sqrt(x);
        f=sqrt(x);
        if (f-a==0.0)
        {
            cout<<n<<' '<<i<<' '<<f<<endl;
            break;
        }
    }
	return 0;
}

