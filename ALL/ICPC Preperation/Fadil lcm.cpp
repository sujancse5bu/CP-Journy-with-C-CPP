///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int lcm (int x, int y)
{
    int i,v,z;
    if (x>y)
	{
		v=x;
		x=y;
		y=v;
	}
	if (x==0) return x;
	v=y;
	while (y%x!=0) y+=v;
	return y;
}
int main ()
{
    int i,n,x;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++) cin>>a[i];
    i=1;
    while (i<n)
    {
        a[i]=lcm (a[i-1],a[i]);
        i++;
    }
    x=0;
    while (a[i-1]>0)
    {
        x+=(a[i-1]%10);
        a[i-1]/=10;
    }
    int s=x;
    if (x%2==1) cout<<x<<endl;
    else
    {
        x/=2;
        if (x%2==0) x++;
        while (1)
        {
            if (s%x==0)
            {
                cout<<x<<endl;
                return 0;
            }
            x-=2;
        }
    }
    return 0;
}
