///SHS
#include <iostream>
#define lli long long int
using namespace std;
lli gcd (lli x, lli y);
int main ()
{
    lli a,b,x,y,s,n;
    cin>>a>>b>>x>>y;
    s=gcd (x,y);
    x=x/s;
    y=y/s;
    s=a/x;
    n=b/y;
    if (s>n) cout<<n<<endl;
    else cout<<s<<endl;
    return 0;

}

lli gcd (lli x, lli y)
{
    lli v,z;
    if (x>y)
	{
		v=x;
		x=y;
		y=v;
	}
	if (x==0) return y;
	while (1)
	{
		z=y%x;
		if (z==0) break;
		y=x;
		x=z;
	}
	return x;
}
