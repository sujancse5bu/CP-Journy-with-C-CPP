

#include <stdio.h>
#include <iostream>
#define lli long long int
using namespace std;
//vector <lli> a;
lli gcd (lli a, lli b){if (a%b==0) return b;return (gcd(b,a%b));}
lli lcm (lli a, lli b){return a* b/gcd(a, b);}
int main ()
{
	lli d=10,s,n,m;
	while (d--)
	{
		cin>>n>>m;
		s=gcd(m,n);
		cout<<s<<endl;
		//a.push_back(s);
	}
	
	return 0;
}













/*
#include <stdio.h>
#include <iostream>
#define lli long long int
using namespace std;
lli gcd (lli a, lli b){if (a%b==0) return b;return (gcd(b,a%b));}
lli lcm (lli a, lli b){return a* b/gcd(a, b);}
int main ()
{
	lli s,n,m;
	cin>>n>>m;
	s=gcd(m,n);
	cout<<"GCD>>"<<s<<endl<<"LCM>>"<<lcm(m,n)<<endl;
	return 0;
}*/
