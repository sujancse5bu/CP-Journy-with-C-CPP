/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
lli gcd (lli x, lli y);
int main ()
{
    lli i,j,n,k,c;
    cin>>n;
    int a[n],b[n];
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n-1;i++) b[i]=gcd(a[i],a[i+1]);
    sort (b,b+n);
    for (i=n-2,j=0;i>=0;i--) if (b[n-2]==b[i]) j++;
    j++;
    if (n-j==0) cout<<-1<<endl;
    else cout<<n-j<<endl;






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
