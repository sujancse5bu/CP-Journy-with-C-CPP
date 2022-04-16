/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#define fast ios :: sync_with_stdio(false); cin.tie(0);
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define lli long long int
#include<bits/stdc++.h>
#define pb push_back
#define rs resize
#define S second
#define F first
#define all(v) v.begin(), v.end()
using namespace std;
vector <lli> z,zz,z1;
void nmcnv1 (lli a)
{
    lli b=0,c,i,j,x,p=0,q;
	q=a;
	x=a;
	while (q>0)
	{
		q=q/2;
		b++;
	}

	for (i=0; i<b; i++)
	{
		z.pb(x%2);
		x=x/2;
	}
	reverse(all(z));
	f(i,0,z.size()-1) cout<<z[i];
	cout<<' '<<z.size()-1<<endl<<"----"<<endl<<endl;
	if (z.size()) z.clear();
}
int main ()
{
    fast;
	lli i,j,k=0,n,m,l=0,f=0,en=0,on=0,om=0,em=0;
	while (1){cin>>j;
	nmcnv1 (j);
	}
	return 0;
}
