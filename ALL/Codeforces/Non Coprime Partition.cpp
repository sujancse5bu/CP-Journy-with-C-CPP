///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
long int gcd (long int x, long int y)
{
    long int v,z;
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
int main ()
{
    long int i,j,k,l,d,p,r,h,n,a[50000];
    cin>>n;
    for (i=1;i<=n;i++) a[i]=i;
    if (n<=2)
    {
        cout<<"No"<<endl;
        return 0;
    }
    for (i=2;i<=n;i++)
    {
        for (j=1,h=0;j<=n;j++)
        {
            if (i!=j) h+=j;
        }
        p=gcd (i,h);
        if (p>1)
        {
            cout<<"Yes"<<endl<<1<<" "<<i<<endl<<n-1<<" ";
            for (j=1;j<=n;j++)
            {
                if (j!=i) cout<<j<<" ";
            }
            return 0;
        }
    }








    return 0;
}

